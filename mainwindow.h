#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "myaddressbookmodel.h"

#include <iostream>
#include <queue>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_actionOpen_an_Address_Book_triggered();

    void on_tableView_clicked(const QModelIndex &index);

    void on_actionExit_triggered();

    void on_button1_clicked();

    void on_button2_clicked();

    void on_button3_clicked();

    void on_button4_clicked();

    void on_button5_clicked();

    void on_button6_clicked();

    void on_button7_clicked();

    void on_button8_clicked();

    void on_button9_clicked();

    void on_buttonStar_clicked();

    void on_button0_clicked();

    void on_buttonNum_clicked();

    void on_phoneButton_clicked();

    void update();

    void on_clearButton_clicked();

private:
    Ui::MainWindow *ui;
    MyAddressBookModel *myModel;
    std::string phoneNum;
};

#endif // MAINWINDOW_H
