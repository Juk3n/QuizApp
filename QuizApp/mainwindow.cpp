#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "filereader.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    loadQuestion();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::loadQuestion()
{
    QString textFromFile{FileReader::getTextFromFile("Question.txt")};
    ui->questionLabel->setText(textFromFile);
}
