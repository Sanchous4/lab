#include "main_window.h"
#include "ui_main_window.h"
#include "h_list.h"

h_list <string> test_1;
h_list <string> test_2;
h_list <string> test_3;

main_window::main_window(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::main_window)
{
    ui->setupUi(this);
}

main_window::~main_window()
{
    delete ui;
}


void main_window::on_pushButton_clicked() {
    string fname = ui->add_1->text().toUtf8().constData();
    h_list <string> add_c(fname,1);
    test_1 = add_c;
}

void main_window::on_pushButton_2_clicked(){
    string fname = ui->add_2->text().toUtf8().constData();
    h_list <string> add_c(fname,1);
    test_2 = add_c;
}

void main_window::on_pushButton_6_clicked()
{
    test_3 = test_2 && test_1;
    auto ptr = test_3.ptr_bgn;
    while(ptr){
    string str_ = ptr->val;
    const QString &text = QString::fromStdString(str_);;
    QListWidgetItem *item_1 = new QListWidgetItem(text);
    ui->listWidget->addItem(item_1);
    ptr = ptr->front;
    }

}

void main_window::on_pushButton_3_clicked()
{
    test_3 << ui->add_el->text().toUtf8().constData();
    auto ptr = test_3.ptr_bgn;
    while(ptr){
    string str_ = ptr->val;
    const QString &text = QString::fromStdString(str_);;
    QListWidgetItem *item_1 = new QListWidgetItem(text);
    ui->listWidget->addItem(item_1);
    ptr = ptr->front;
    }
}

void main_window::on_pushButton_4_clicked()
{
    test_3.remove_element(ui->del_el->text().toUtf8().constData());
    auto ptr = test_3.ptr_bgn;
    while(ptr){
    string str_ = ptr->val;
    const QString &text = QString::fromStdString(str_);;
    QListWidgetItem *item_1 = new QListWidgetItem(text);
    ui->listWidget->addItem(item_1);
    ptr = ptr->front;
    }
}

void main_window::on_pushButton_5_clicked()
{
    test_3.in_file(ui->save->text().toUtf8().constData());
}
