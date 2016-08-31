#include "hammingform.h"
#include "ui_hammingform.h"

HammingForm::HammingForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::HammingForm)
{
    ui->setupUi(this);
}

HammingForm::~HammingForm()
{
    delete ui;
}
