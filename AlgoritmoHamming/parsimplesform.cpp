#include "parsimplesform.h"
#include "ui_parsimplesform.h"
#include "paridadesimples.h"

ParSimplesForm::ParSimplesForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ParSimplesForm)
{
    ui->setupUi(this);

    QString lista;


    for (int i = 0; i < ParidadeSimples::instancia()->bit_Dados.size(); ++i)
    {
        QString myString = QString::number(ParidadeSimples::instancia()->bit_Dados.at(i));
        QChar c = myString[0];
        lista.append(c);
    }

    ui->lbBitsDados->setText(lista);
    if (ParidadeSimples::instancia()->acumulador_Bits % 2 != 0)
        ui->lbNum->setText("1");
    else
        ui->lbNum->setText("0");
}

ParSimplesForm::~ParSimplesForm()
{
    delete ui;
}
