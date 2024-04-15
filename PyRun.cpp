#include "PyRun.h"
#include <QDebug>
#include <QCoreApplication>
#include <QDir>

PyRun::PyRun(QObject *parent) : QObject(parent) {
    connect(&pythonProcess, &QProcess::readyReadStandardOutput, this, &PyRun::handleScriptOutput);
    connect(&pythonProcess, QOverload<int, QProcess::ExitStatus>::of(&QProcess::finished),
            this, &PyRun::handleScriptFinished);
    connect(&pythonProcess, QOverload<QProcess::ProcessError>::of(&QProcess::errorOccurred),
            this, &PyRun::handleScriptError);
}

void PyRun::runScript(const QString &scriptPath) {
    QString program = "python3";
    QStringList arguments;
    arguments << scriptPath;
    pythonProcess.start(program, arguments);
}

void PyRun::handleScriptOutput() {
    QByteArray data = pythonProcess.readAllStandardOutput();
    emit outputReceived(data);
}

void PyRun::handleScriptFinished(int exitCode, QProcess::ExitStatus exitStatus) {
    emit scriptFinished(exitCode, exitStatus);
}

void PyRun::handleScriptError(QProcess::ProcessError error) {
    qDebug() << "Script error:" << pythonProcess.errorString();
}
