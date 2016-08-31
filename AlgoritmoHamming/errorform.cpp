#include "errorform.h"
#include "ui_errorform.h"

ErrorForm::ErrorForm(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ErrorForm)
{
    ui->setupUi(this);
}

ErrorForm::~ErrorForm()
{
    delete ui;
}

void ErrorForm::on_pushButton_clicked()
{
    this->setVisible(false);
}
