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

private:
    Ui::MainWindow *ui;
    int32_t correctAnswerIndex{};

private slots:
    void loadQuestion();
};

#endif // MAINWINDOW_H
