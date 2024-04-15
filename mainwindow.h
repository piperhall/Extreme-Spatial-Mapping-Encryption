#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "PyRun.h"
#include <QMainWindow>
#include <QProcess>
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void handlePythonData(const QByteArray &output);

private slots:
    // void on_encryptTextButton_clicked();
    void on_fileSelectButton_clicked();
    void on_encryptFileButton_clicked();

private:
    PyRun *PyRunner;
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
