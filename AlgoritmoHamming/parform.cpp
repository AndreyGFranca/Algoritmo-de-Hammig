#include "parform.h"
#include "ui_parform.h"
#include "paridade.h"

ParForm::ParForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ParForm)
{
    ui->setupUi(this);
    //ui->lbBitsDados->setVisible(false);
    //ui->lbRespostaCorreta->setVisible(false);

    QString lista;
    auto printable = QStringLiteral("A soma dos numeros 1's é igual a: %1").arg(Paridade::instancia()->acumulador_Bits);

    for (int i = 0; i < Paridade::instancia()->bit_Dados.size(); ++i)
    {
        QString myString = QString::number(Paridade::instancia()->bit_Dados.at(i));
        QChar c = myString[0];
        lista.append(c);
    }

    if(Paridade::instancia()->conta_Numero_Paridade()){
        ui->lbNum->setText("0");
        ui->lbNum_2->setText("1");
    }
    else{
        ui->lbNum->setText("1");
        ui->lbNum_2->setText("0");
    }

    ui->lbBitsDados->setText(lista);
    ui->tf_Informacoes->setText(printable);

    ui->lbRespostaCorreta->setText(lista);

}

ParForm::~ParForm()
{
    delete ui;
}
