#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

public slots:
    void onButton1Clicked();
    void onButton2Clicked();
    void onButton3Clicked();
    void onNxtQstnBtnClicked();

private:
    Ui::MainWindow *ui;
    int32_t correctAnswerIndex{};
    int32_t questionNumber{};
    QString questionSourceFolder{};

private slots:
    void loadQuestion(int questionNumber);
    void resetQuestionsButtonsView();
};

#endif // MAINWINDOW_H
