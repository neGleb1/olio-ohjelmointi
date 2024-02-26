#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow){
    ui->setupUi(this);
    state = 1;
    number1 = "";
    number2 = "";
    resetLineEdits();
}

MainWindow::~MainWindow(){
    delete ui;
}

void MainWindow::numberClickedHandler(){

    QPushButton * button = qobject_cast<QPushButton*>(sender());
    QString name = button->objectName();
    qDebug() << "Button name:" << name;


    if(state == 1) {
        number1 += name.last(1);
        ui->num1->setText(number1);
    } else {
        number2 += name.last(1);
        ui->num2->setText(number2);
    }
    qDebug()<<"number 1 = "<< number1<<Qt::endl;
    qDebug()<<"number 2 = "<< number2<<Qt::endl;
}

void MainWindow::clearAndEnterClickHandler(){
    QPushButton * button = qobject_cast<QPushButton*>(sender());
    QString name = button->objectName();
    qDebug() << "Button name:" << name;
    if(name == "clear") {
        state = 1;
        number1 = "";
        number2 = "";
        resetLineEdits();
    } else {
        float n1 = number1.toFloat();
        float n2 = number2.toFloat();
        qDebug()<<"number 1 = "<< n1 << " and number 2 = "<<n2 <<Qt::endl;

        switch(operand) {
          case 0:
            result = n1+n2;
            break;
          case 1:
            result = n1-n2;
            break;
          case 2:
            result = n1*n2;
            break;
          case 3:
            result = n1/n2;
            break;

          default:
            qDebug()<<"Wrong command"<<Qt::endl;
        }
        ui->result->setText(QString::number(result));
    }

}

void MainWindow::addSubMulDivClickHandler(){
    QPushButton * button = qobject_cast<QPushButton*>(sender());
    QString name = button->objectName();
    qDebug() << "Button name:" << name;
    
    if(name == "add"){
        operand = 0;
    }
    else if(name == "sub"){
        operand = 1;
    }
    else if(name == "mul"){
        operand = 2;
    }
    else if(name == "div"){
        operand = 3;
    }
    state = 2;
    qDebug()<<"command = "<< operand << Qt::endl;

}

void MainWindow::resetLineEdits(){
    ui->num1->clear();
    ui->num2->clear();
    ui->result->clear();
}

void MainWindow::n0Clicked(){
    numberClickedHandler();
}

void MainWindow::n1Clicked(){
    numberClickedHandler();
}


void MainWindow::n2Clicked(){
    numberClickedHandler();
}


void MainWindow::n3Clicked(){
    numberClickedHandler();
}


void MainWindow::n4Clicked(){
    numberClickedHandler();
}


void MainWindow::n5Clicked(){
    numberClickedHandler();
}


void MainWindow::n6Clicked(){
    numberClickedHandler();
}


void MainWindow::n7Clicked(){
    numberClickedHandler();
}


void MainWindow::n8Clicked(){
    numberClickedHandler();
}


void MainWindow::n9Clicked(){
    numberClickedHandler();
}

void MainWindow::addClicked(){
    addSubMulDivClickHandler();
}


void MainWindow::subClicked(){
    addSubMulDivClickHandler();
}


void MainWindow::mulClicked(){
    addSubMulDivClickHandler();
}


void MainWindow::divClicked(){
    addSubMulDivClickHandler();
}


void MainWindow::clearClicked(){
    clearAndEnterClickHandler();
}


void MainWindow::enterClicked(){
    clearAndEnterClickHandler();
}
