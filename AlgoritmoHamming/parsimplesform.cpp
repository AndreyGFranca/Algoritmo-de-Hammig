#include "parsimplesform.h"
#include "ui_parsimplesform.h"
#include "paridadesimples.h"

ParSimplesForm::ParSimplesForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ParSimplesForm)
{
    ui->setupUi(this);
    ParidadeSimples::instancia()->soma_Numeros();
    QString lista;

    auto printable = QStringLiteral("A soma dos numeros 1's é igual a: %1\n"
                                    "Após receber a palavra é feita uma contagem de todos os 1's, se o número de 1's "
                                    "for um número par então o bit paridade é 0, caso contrário, o bit paridade é 1").arg(ParidadeSimples::instancia()->acumulador_Bits);

    ui->tf_Informacoes->setText(printable);

    for (int i = 0; i < ParidadeSimples::instancia()->bit_Dados.size(); ++i)
    {
        QString myString = QString::number(ParidadeSimples::instancia()->bit_Dados.at(i));
        QChar c = myString[0];
        lista.append(c);
    }

    lista.append(ParidadeSimples::instancia()->bit);
    ui->lbBitsDados->setText(lista);
}

ParSimplesForm::~ParSimplesForm()
{
    delete ui;
}
