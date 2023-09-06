#include "mainwindow.h"
#include "ui_mainwindow.h"

bool add=false;
bool sub=false;
bool mul=false;
bool divi=false;

int oldVal=0;
int newVal=0;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_PB_number0_clicked()
{
    QString DisplayVal=ui->label_display->text();

    if(DisplayVal.toInt(0,10)==0)
        ui->label_display->setText("0");
    else
         ui->label_display->setText(DisplayVal+"0");

}


void MainWindow::on_PB_number1_clicked()
{
    QString DisplayVal=ui->label_display->text();
    if(DisplayVal.toInt(0,10)==0)
         ui->label_display->setText("1");
    else
         ui->label_display->setText(DisplayVal+"1");
}


void MainWindow::on_PB_number2_clicked()
{
    QString DisplayVal=ui->label_display->text();
    if(DisplayVal.toInt(0,10)==0)
         ui->label_display->setText("2");
    else
         ui->label_display->setText(DisplayVal+"2");
}


void MainWindow::on_PB_number3_clicked()
{
    QString DisplayVal=ui->label_display->text();
    if(DisplayVal.toInt(0,10)==0)
         ui->label_display->setText("3");
    else
         ui->label_display->setText(DisplayVal+"3");

}


void MainWindow::on_PB_number4_clicked()
{
    QString DisplayVal=ui->label_display->text();
    if(DisplayVal.toInt(0,10)==0)
         ui->label_display->setText("4");
    else
         ui->label_display->setText(DisplayVal+"4");
}


void MainWindow::on_PB_number5_clicked()
{
    QString DisplayVal=ui->label_display->text();
    if(DisplayVal.toInt(0,10)==0)
         ui->label_display->setText("5");
    else
         ui->label_display->setText(DisplayVal+"5");
}


void MainWindow::on_PB_number6_clicked()
{
    QString DisplayVal=ui->label_display->text();
    if(DisplayVal.toInt(0,10)==0)
         ui->label_display->setText("6");
    else
         ui->label_display->setText(DisplayVal+"6");
}


void MainWindow::on_PB_number7_clicked()
{
    QString DisplayVal=ui->label_display->text();
    if(DisplayVal.toInt(0,10)==0)
         ui->label_display->setText("7");
    else
         ui->label_display->setText(DisplayVal+"7");
}


void MainWindow::on_PB_number8_clicked()
{
    QString DisplayVal=ui->label_display->text();
    if(DisplayVal.toInt(0,10)==0)
         ui->label_display->setText("8");
    else
         ui->label_display->setText(DisplayVal+"8");
}


void MainWindow::on_PB_number9_clicked()
{
    QString DisplayVal=ui->label_display->text();
    if(DisplayVal.toInt(0,10)==0)
         ui->label_display->setText("9");
    else
         ui->label_display->setText(DisplayVal+"9");
}


void MainWindow::on_PB_clear_clicked()
{

     ui->label_display->setText("0");
}


void MainWindow::on_PB_Addition_clicked()
{
     oldVal=ui->label_display->text().toInt(0,10);
     add=true;
     sub=false;
     mul=false;
     divi=false;
     ui->label_display->setText("0");

}


void MainWindow::on_PB_Subtraction_clicked()
{
     oldVal=ui->label_display->text().toInt(0,10);
     add=false;
     sub=true;
     mul=false;
     divi=false;
     ui->label_display->setText("0");
}


void MainWindow::on_PB_Multiplication_clicked()
{
     oldVal=ui->label_display->text().toInt(0,10);
     add=false;
     sub=false;
     mul=true;
     divi=false;
     ui->label_display->setText("0");
}


void MainWindow::on_PB_Division_clicked()
{
     oldVal=ui->label_display->text().toInt(0,10);
     add=false;
     sub=false;
     mul=false;
     divi=true;
     ui->label_display->setText("0");
}


void MainWindow::on_PB_equal_clicked()
{
     int Result=0;
       newVal=ui->label_display->text().toInt(0,10);

     if(add==true)
         Result=oldVal+newVal;
     else if(sub==true)
         Result=oldVal-newVal;
     else if(mul==true)
         Result=oldVal*newVal;
     else if(divi==true)
         Result=oldVal/newVal;

     ui->label_display->setText(QString::number(Result,10));
}

