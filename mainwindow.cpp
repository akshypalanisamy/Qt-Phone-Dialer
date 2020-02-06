#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QFileDialog>
#include <iostream>
#include <queue>
#include <string>
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow),
    myModel(new MyAddressBookModel(this))
{
    ui->setupUi(this);
    ui->tableView->setModel(myModel);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actionOpen_an_Address_Book_triggered()
{
    //Create own logic to open address book
    QString fileName = QFileDialog::getOpenFileName(this,
                                                    tr("Open Address Book"),"",
                                                    tr("Address Book (*.csv);;All Files (*)"));
    std::cout << fileName.toStdString() << std::endl;

    myModel->openFile(fileName);
}

void MainWindow::on_tableView_clicked(const QModelIndex &index)
{
    std::cout << index.row() << "," << index.column() << std::endl;
    ui->label->setText(myModel->getPhoneNumber(index.row()));
}

void MainWindow::on_actionExit_triggered()
{
    QApplication::quit();
}

void MainWindow::on_button1_clicked()
{
    if(phoneNum.size()==3){
        phoneNum.push_back('-');
    }
    if (phoneNum.size()==7) {
        phoneNum.push_back('-');
    }
    if(phoneNum.size()<12){
        phoneNum.push_back('1');
    }
    update();
}

void MainWindow::on_button2_clicked()
{
    if(phoneNum.size()==3){
        phoneNum.push_back('-');
    }
    if (phoneNum.size()==7) {
        phoneNum.push_back('-');
    }
    if(phoneNum.size()<12){
        phoneNum.push_back('2');
    }
    update();
}

void MainWindow::on_button3_clicked()
{
    if(phoneNum.size()==3){
        phoneNum.push_back('-');
    }
    if (phoneNum.size()==7) {
        phoneNum.push_back('-');
    }
    if(phoneNum.size()<12){
        phoneNum.push_back('3');
    }
    update();
}

void MainWindow::on_button4_clicked()
{
    if(phoneNum.size()==3){
        phoneNum.push_back('-');
    }
    if (phoneNum.size()==7) {
        phoneNum.push_back('-');
    }
    if(phoneNum.size()<12){
        phoneNum.push_back('4');
    }
    update();
}

void MainWindow::on_button5_clicked()
{
    if(phoneNum.size()==3){
        phoneNum.push_back('-');
    }
    if (phoneNum.size()==7) {
        phoneNum.push_back('-');
    }
    if(phoneNum.size()<12){
        phoneNum.push_back('5');
    }
    update();
}

void MainWindow::on_button6_clicked()
{
    if(phoneNum.size()==3){
        phoneNum.push_back('-');
    }
    if (phoneNum.size()==7) {
        phoneNum.push_back('-');
    }
    if(phoneNum.size()<12){
        phoneNum.push_back('6');
    }
    update();
}

void MainWindow::on_button7_clicked()
{
    if(phoneNum.size()==3){
        phoneNum.push_back('-');
    }
    if (phoneNum.size()==7) {
        phoneNum.push_back('-');
    }
    if(phoneNum.size()<12){
        phoneNum.push_back('7');
    }
    update();
}

void MainWindow::on_button8_clicked()
{
    if(phoneNum.size()==3){
        phoneNum.push_back('-');
    }
    if(phoneNum.size()==7) {
        phoneNum.push_back('-');
    }
    if(phoneNum.size()<12){
        phoneNum.push_back('8');
    }
    update();
}

void MainWindow::on_button9_clicked()
{
    if(phoneNum.size()==3){
        phoneNum.push_back('-');
    }
    if(phoneNum.size()==7) {
        phoneNum.push_back('-');
    }
    if(phoneNum.size()<12){
        phoneNum.push_back('9');
    }
    update();
}

void MainWindow::on_buttonStar_clicked()
{
    if(phoneNum.size()==3){
        phoneNum.push_back('-');
    }
    if(phoneNum.size()==7) {
        phoneNum.push_back('-');
    }
    if(phoneNum.size()<12){
        phoneNum.push_back('*');
    }
    update();
}

void MainWindow::on_button0_clicked()
{
    if(phoneNum.size()==3){
        phoneNum.push_back('-');
    }
    if(phoneNum.size()==7) {
        phoneNum.push_back('-');
    }
    if(phoneNum.size()<12){
        phoneNum.push_back('0');
    }
    update();
}

void MainWindow::on_buttonNum_clicked()
{
    if(phoneNum.size()==3){
        phoneNum.push_back('-');
    }
    if(phoneNum.size()==7) {
        phoneNum.push_back('-');
    }
    if(phoneNum.size()<12){
        phoneNum.push_back('#');
    }
    update();
}

void MainWindow::on_phoneButton_clicked()
{
    QMessageBox msgBox;
    msgBox.setText("Calling "+ ui->label->text() + "..." );
    msgBox.exec();
    if(msgBox.Close){
        phoneNum.clear();
        update();
    }
}

void MainWindow::update(){
    ui->label->setText(QString::fromStdString(phoneNum));
}

void MainWindow::on_clearButton_clicked()
{
    if(phoneNum.size()>0){
        phoneNum.pop_back();
    }
    update();
}
