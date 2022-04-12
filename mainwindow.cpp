#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "qmessagebox.h"
#include "funcionalidad.cpp"
#include "funcionalidad.h"

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


void MainWindow::on_botonCalcular_clicked(){
    QMessageBox msg;
    if(ui->radioSum->isChecked()== false || ui->radioMulti->isChecked()== false || ui->radioDiv->isChecked()== false){
        msg.setText("Hay que seleccionar una opción.");
        msg.exec();
    }else{
        if(ui->op1Real->text().isEmpty() || ui->op2Real->text().isEmpty()){
            msg.setText("Hay que definir dos numeros reales.");
            msg.exec();
        }else{
            funcionalidad *aux = new funcionalidad();

            float nu = ui->op1Real->text().toFloat();
            float nu2 = ui->op2Real->text().toFloat();

            if (ui->radioSum->isChecked()) {
                aux->convertRealToUnion(nu,nu2,0);
            }else if (ui->radioMulti->isChecked()) {
                aux->convertRealToUnion(nu, nu2,1);
            }else if (ui->radioDiv->isChecked()) {
                aux->convertRealToUnion(nu, nu2,2);
            }
        }
    }
}





