#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_PB_number0_clicked();

    void on_PB_number1_clicked();

    void on_PB_number2_clicked();

    void on_PB_number3_clicked();

    void on_PB_number4_clicked();

    void on_PB_number5_clicked();

    void on_PB_number6_clicked();

    void on_PB_number7_clicked();

    void on_PB_number8_clicked();

    void on_PB_number9_clicked();

    void on_PB_clear_clicked();

    void on_PB_Addition_clicked();

    void on_PB_Subtraction_clicked();

    void on_PB_Multiplication_clicked();

    void on_PB_Division_clicked();

    void on_PB_equal_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
