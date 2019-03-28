#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "filereader.h"
#include "question.h"

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
    Question question{};
    ui->questionLabel->setText(question.getQuestionText());
    ui->answerButton1->setText(question.getAnswerText(0));
    ui->answerButton2->setText(question.getAnswerText(1));
    ui->answerButton3->setText(question.getAnswerText(2));
}
