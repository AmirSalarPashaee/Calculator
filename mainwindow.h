#ifndef MAINWINDOW_H
#include <iostream>
#include <string>
#include <QMainWindow>

#define MAINWINDOW_H


using namespace std;

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_num_1_clicked();
    
    void on_num_2_clicked();

    void on_num_3_clicked();

    void on_num_4_clicked();

    void on_num_5_clicked();

    void on_num_6_clicked();

    void on_num_7_clicked();

    void on_num_8_clicked();

    void on_num_9_clicked();

    void on_num_10_clicked();

    void on_equal_clicked();

    void on_add_clicked();

    void on_mult_2_clicked();

    void on_mult_clicked();

    void calculate(string text);

private:
    Ui::MainWindow *ui;
    char operators[10];
    int lists_number[10];
};

#endif // MAINWINDOW_H
