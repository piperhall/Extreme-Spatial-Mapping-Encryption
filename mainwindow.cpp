#include "mainwindow.h"
#include "encrypt.h"
#include "./ui_mainwindow.h"

#include <QFileDialog>
#include <QTextStream>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setWindowTitle("Extreme Spatial Mapping Encryption");
    PyRunner = new PyRun(this);
    connect(PyRunner, &PyRun::outputReceived, this, &MainWindow::handlePythonData);
}

MainWindow::~MainWindow()
{
    delete ui;
}

// void MainWindow::on_encryptTextButton_clicked()
// {
//     QString inputString = ui->inputBar->toPlainText();
//     if (!inputString.isEmpty()) {
//         CryptoPP::RandomPool prng;
//         CryptoPP::SecByteBlock key(CryptoPP::AES::DEFAULT_KEYLENGTH);
//         CryptoPP::SecByteBlock iv(CryptoPP::AES::BLOCKSIZE);
//         prng.GenerateBlock(key, key.size());
//         prng.GenerateBlock(iv, iv.size());
//         std::string encrypted = encryptText(inputString.toStdString(), key, iv);
//         QString str = QString::fromUtf8(encrypted.c_str());
//         ui->textEdit->setPlainText(str);
//     }
//     else {
//         ui->textEdit->setPlainText("Please enter text to encrypt!");
//     }
// }

void MainWindow::on_fileSelectButton_clicked()
{
    QFileDialog dialog(this);
    dialog.setFileMode(QFileDialog::ExistingFile);
    dialog.setViewMode(QFileDialog::Detail);
    QString fileName = QFileDialog::getOpenFileName(this, tr("Open File"),
                                                    "/home",
                                                    tr("Text files (*.txt);; Images (*.png *.xpm *.jpg);;XML files (*.xml)"));
    ui->textFileName->setPlainText(fileName);
}


void MainWindow::on_encryptFileButton_clicked()
{
    QString fileName = ui->textFileName->toPlainText();
    if (!fileName.isEmpty()) {
        PyRunner->runScript("spatialmapping.py");
        ui->textEdit->setPlainText("Running...");
    }
    else {
        QString errormsg = "Must select a file!";
        ui->textEdit->setPlainText(errormsg);
    }
}

void MainWindow::handlePythonData(const QByteArray &output) {
    QString fileName = ui->textFileName->toPlainText();
    CryptoPP::RandomPool prng;
    CryptoPP::SecByteBlock key(CryptoPP::AES::DEFAULT_KEYLENGTH);
    CryptoPP::SecByteBlock iv(CryptoPP::AES::BLOCKSIZE);
    const unsigned char* data = reinterpret_cast<const unsigned char*>(output.constData());
    size_t size = output.size();
    if (prng.CanIncorporateEntropy()) {
        prng.IncorporateEntropy(data, size);
        prng.GenerateBlock(key, key.size());
        prng.GenerateBlock(iv, iv.size());
    }
    encryptFile(fileName.toStdString(), fileName.toStdString(), key, iv);
    ui->textEdit->setPlainText("Successfully encrypted!\n" + fileName);
}

