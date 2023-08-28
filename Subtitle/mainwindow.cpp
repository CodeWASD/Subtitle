#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "filereader.h"
#include <QDebug>
#include <QFileDialog>

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
void  MainWindow::inserRowToList(){
    SubTitle test;
    //ui->list_ShowSubtitle->addItem();
}

void MainWindow::on_btnStart_clicked()
{
    ui->list_ShowSubtitle->clear();
    QString fileName = QFileDialog::getOpenFileName(this,"Open Subtitle", "",
                                                    "subtitle (*.srt)");


    reader.readSubtitle(fileName);
    for (int i=0;i<reader.sub_vector.length() ;i++) {
        ui->list_ShowSubtitle->addItem(reader.sub_vector[i].change_to_strring());
    }
    qDebug()<<"block count"<<reader.sub_vector.length();

}

void MainWindow::on_list_ShowSubtitle_currentRowChanged(int currentRow)
{
    ui->edt_start->setText(reader.sub_vector.at(currentRow).start_time.toString("hh:mm:ss,zzz"));
    ui->edt_end->setText(reader.sub_vector.at(currentRow).end_time.toString("hh:mm:ss,zzz"));
    ui->edt_text->setText(reader.sub_vector.at(currentRow).text);
}


void MainWindow::on_btn_change_clicked()
{
    int currentRow = ui->list_ShowSubtitle->currentRow();
    if(currentRow<0)
        return;

    reader.sub_vector[currentRow].start_time = QTime::fromString(ui->edt_start->text(),"hh:mm:ss,zzz") ;
    reader.sub_vector[currentRow].end_time   = QTime::fromString(ui->edt_end->text(),"hh:mm:ss,zzz") ;
    reader.sub_vector[currentRow].text       = ui->edt_text->toPlainText();
    ui->list_ShowSubtitle->item(currentRow)->setText(reader.sub_vector.at(currentRow).change_to_strring());
}
void MainWindow::on_btn_Save_clicked()
{
    QString fileName = QFileDialog::getSaveFileName(this,"Saved", "",
                                                    "subtitle (*.srt)");
    QFile file(fileName);
    if (!file.open(QIODevice::WriteOnly | QIODevice::Text))
    {
        return;
    }

    for(int i = 0; i <  reader.sub_vector.length();i++)
    {
        QString str = reader.sub_vector.at(i).change_to_subtitleFormat();

        file.write(str.toLocal8Bit());
    }
    file.close();
}


void MainWindow::on_btn_plus_clicked()
{

    if(i<1000){
        ui->edt_shifttime->setText(QString::number(++i)+"Secend");
        shiftTime();
    }else{
        return;
    }
}


void MainWindow::on_btn_negetive_clicked()
{

    if(i>0){
        ui->edt_shifttime->setText(QString::number(--i)+"Secend");
        shiftTime();
    }else{
        return;
    }
}
void MainWindow::shiftTime(){
    int currentRow = ui->list_ShowSubtitle->currentRow();
    if(currentRow<0)
        return;
    reader.sub_vector[currentRow].start_time = reader.sub_vector[currentRow].start_time.addMSecs(i);// = QTime::fromString(ui->edt_start->text(),"hh:mm:ss,zzz") ;
    reader.sub_vector[currentRow].end_time = reader.sub_vector[currentRow].end_time.addMSecs(i);//  = QTime::fromString(ui->edt_end->text(),"hh:mm:ss,zzz") ;
    ui->edt_start->setText(reader.sub_vector.at(currentRow).start_time.toString("hh:mm:ss,zzz"));
    ui->edt_end->setText(reader.sub_vector.at(currentRow).end_time.toString("hh:mm:ss,zzz"));
    ui->list_ShowSubtitle->item(currentRow)->setText(reader.sub_vector.at(currentRow).change_to_strring());

}

