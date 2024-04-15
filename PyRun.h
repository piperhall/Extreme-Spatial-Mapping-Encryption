#ifndef PYRUN_H
#define PYRUN_H

#include <Python.h>
#include <QObject>
#include <QProcess>

class PyRun : public QObject
{
    Q_OBJECT

public:
    explicit PyRun(QObject *parent = nullptr);
    void runScript(const QString &scriptPath);

signals:
    void outputReceived(const QByteArray &output);
    void scriptFinished(int exitCode, QProcess::ExitStatus exitStatus);

private slots:
    void handleScriptOutput();
    void handleScriptFinished(int exitCode, QProcess::ExitStatus exitStatus);
    void handleScriptError(QProcess::ProcessError error);

private:
    QProcess pythonProcess;
};

#endif // PYRUN_H
