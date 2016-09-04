#include "hammingform.h"
#include "ui_hammingform.h"
#include "hamming.h"

HammingForm::HammingForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::HammingForm)
{
    QString lista;
    ui->setupUi(this);
    ui->lbComX->setText(Hamming::instancia()->copia_Lista);


    /*passar vector para qString*/
    for (int i = 0; i < Hamming::instancia()->lista_Bits_Dados.size(); ++i)
    {
        QString myString = QString::number(Hamming::instancia()->lista_Bits_Dados.at(i));
        QChar c = myString[0];
        lista.append(c);
    }
    ui->lbComBitParidade->setText(lista);


    for (int i = 0; i < Hamming::instancia()->lista_Bits_Dados.size(); ++i)
    {
        QString myString = QString::number(Hamming::instancia()->lista_Bits_Dados.at(i));
        QChar c = myString[0];
        lista.append(c);
    }

    /*bool flag = true;
    for (int i = 0; i < Hamming::instancia()->lista_Bits_Dados.size(); ++i)
    {
        if (i == Hamming::instancia()->soma)
        {
            QString styledString = "<span style=\"color: red;\" > ";
            lista.insert(i, styledString);
            //lista.replace(i, styledString);

        }
    }

    lista.append("</span>");
    */
    auto printable = QStringLiteral("O bit é errado está na posicao de numero %1 na palavra").arg(Hamming::instancia()->soma);
    ui->lbStrBitErrado->setText(printable);
}

HammingForm::~HammingForm()
{
    delete ui;
}
