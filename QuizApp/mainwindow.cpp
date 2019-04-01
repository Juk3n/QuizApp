#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "filereader.h"
#include "question.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect(ui->answerButton1, SIGNAL(clicked(bool)), this, SLOT(onButton1Clicked()));
    connect(ui->answerButton2, SIGNAL(clicked(bool)), this, SLOT(onButton2Clicked()));
    connect(ui->answerButton3, SIGNAL(clicked(bool)), this, SLOT(onButton3Clicked()));
    connect(ui->nextQuestionButton, SIGNAL(clicked(bool)), this, SLOT(onNxtQstnBtnClicked()));

    loadQuestion(questionNumber);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::onButton1Clicked()
{
    if(correctAnswerIndex == 1)
    {
        ui->answerButton1->setStyleSheet("QPushButton{background-color: green }");
    }
    else {
        ui->answerButton1->setStyleSheet("QPushButton{background-color: red }");
    }
}

void MainWindow::onButton2Clicked()
{
    if(correctAnswerIndex == 2)
    {
        ui->answerButton2->setStyleSheet("QPushButton{background-color: green }");
    }
    else {
        ui->answerButton2->setStyleSheet("QPushButton{background-color: red }");
    }
}

void MainWindow::onButton3Clicked()
{
    if(correctAnswerIndex == 3)
    {
        ui->answerButton3->setStyleSheet("QPushButton{background-color: green }");
    }
    else {
        ui->answerButton3->setStyleSheet("QPushButton{background-color: red }");
    }
}

void MainWindow::onNxtQstnBtnClicked()
{
    questionNumber++;
    loadQuestion(questionNumber);
}



void MainWindow::loadQuestion(int32_t questionNumber)
{
    Question question{questionNumber};
    ui->questionLabel->setText(question.getQuestionText());
    ui->answerButton1->setText(question.getAnswerText(0));
    ui->answerButton2->setText(question.getAnswerText(1));
    ui->answerButton3->setText(question.getAnswerText(2));
    correctAnswerIndex = question.getCorrectAnswerIndex();
}
