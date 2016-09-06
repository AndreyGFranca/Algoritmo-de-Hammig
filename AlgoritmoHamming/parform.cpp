#include "parform.h"
#include "ui_parform.h"
#include "paridade.h"
#include <QMovie>"

ParForm::ParForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ParForm)
{

    this->setWindowTitle("sdafasfd");
    ui->setupUi(this);
    Paridade::instancia()->conta_Numero_Paridade();

    qDebug("aac : %d", Paridade::instancia()->acumulador_Bits);
    QString lista;
    auto printable = QStringLiteral("A soma dos numeros 1's é igual a: %1\n"
                                    "Após receber a palavra é feita uma contagem de todos os 1's, se o número de 1's "
                                    "for um número par e o bit de paridade informado for 0, a palavra está correta, se "
                                    "o número de 1's for um número impar a palavra está correta, caso contrário a essas duas "
                                    "suposições o bit contém erro.").arg(Paridade::instancia()->acumulador_Bits);

    ui->tf_Informacoes->setText(printable);
    for (int i = 0; i < Paridade::instancia()->bit_Dados.size(); ++i)
    {
        QString myString = QString::number(Paridade::instancia()->bit_Dados.at(i));
        QChar c = myString[0];
        lista.append(c);
    }

    int a = Paridade::instancia()->bit_Paridade_Correto.toInt();
    QString correta, incorreta;

    /*Muda o valor dos labels de acordo com o calculo do bit errado */
    if(Paridade::instancia()->correto && a == 0){
        correta = lista;
        correta.append("<font color='blue'>0</font>");
        incorreta = lista;
        incorreta.append("<font color='blue'>0</font>");
    }
    else if(Paridade::instancia()->correto && a == 1){
        correta = lista;
        correta.append("<font color='blue'>1</font>");
        incorreta = lista;
        incorreta.append("<font color='blue'>1</font>");
    }

    else if (!Paridade::instancia()->correto && Paridade::instancia()->bit_Paridade.toInt() == 1){
        correta = lista;
        correta.append("<font color='blue'>0</font>");
        incorreta = lista;
        incorreta.append("<font color='blue'>1</font>");
    }
    else if (!Paridade::instancia()->correto && Paridade::instancia()->bit_Paridade.toInt() == 0){
        correta = lista;
        correta.append("<font color='blue'>1</font>");
        incorreta = lista;
        incorreta.append("<font color='blue'>0</font>");
    }

    ui->lbBitsDados->setText(incorreta);

    ui->lbRespostaCorreta->setText(correta);

}

ParForm::~ParForm()
{
    delete ui;
}
