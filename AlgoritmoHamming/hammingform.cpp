#include "hammingform.h"
#include "ui_hammingform.h"
#include "hamming.h"

HammingForm::HammingForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::HammingForm)
{
    ui->setupUi(this);
    QString lista;
    ui->lbComX->setText(Hamming::instancia()->copia_Lista);

    ui->lb_Bits_Dados->setText(Hamming::instancia()->bits_Originais);
    ui->label->setText(Hamming::instancia()->paridade_Originais);

    auto printable = QStringLiteral("1° Os bits de paridades são destacados na palavra. "
                                    "Note que os bits de paridade são adcionados nas posições "
                                    "em que os indices são potencia de dois.\n"
                                    "2° Os bits de paridades são adicionados na palavra.\n"
                                    "3 O bit errado na palavra é destacado com a cor vermelha\n"
                                    "4° São retirados os bits de paridade, restando só a palavra"
                                    " o bit errado permanece com a cor vermelha.\n\n"
                                    "Para encontrar o bit errado, primeiramente insira os bits de padidade "
                                    "nas posições em que o indice seja uma potência de dois (1,2, 4, 8, 16, e assim por diante)\n"
                                    "Feito isso o próximo passo é contar as quantidades de números 1's "
                                    "em intervalos pré-definidos. O primeiro bit de paridade na posição 1 "
                                    "verifica cada bit até o final da palavra verificando um e pulando um, e assim por diante"
                                    ". O Segundo bit verifica 2 e pula 2, e assim por diante,"
                                    "o quarto bit, verifica 4 e pula 4 e assim por diante. Isso se repete até o final da palavra "
                                    "com todos os bits de paridade.\n"
                                    "A cada soma dos numeros 1's, verifica se essa soma é ímpar ou par, caso seja ímpar "
                                    "e o bit de paridade seja par, então tem um erro alí, caso a soma seja par, e o "
                                    "bit paridade seja 1 então este bit está errado. \n\n"
                                    "Após encontrar todos os erros, basta somar os indices dos bits que apontaram erro, esse "
                                    "valor será o indice do bit errado. Por exemplo o 2° e o 3° bit apontam erro, "
                                    "então o 5° bit dessa palavra é o bit errado.");

    ui->tf_Informacoes->setText(printable);

    /*passar vector para qString*/
   /* for (int i = 0; i < Hamming::instancia()->lista_Bits_Dados.size(); ++i)
    {
        QString myString = QString::number(Hamming::instancia()->lista_Bits_Dados.at(i));
        QChar c = myString[0];
        lista.append(c);
    }*/
    ui->lbComBitParidade->setText(lista);


    for (int i = 1; i <= Hamming::instancia()->lista_Bits_Dados.size(); i++)
    {
        QString c;
        c.clear();
        QString myString = QString::number(Hamming::instancia()->lista_Bits_Dados.at(i-1));
        if (Hamming::instancia()->potencia_De_Dois(i)){
            QString c;
            if(myString[0] == '1')
                c.append("<font color='blue'>1</font>");
            else
                c.append("<font color='blue'>0</font>");
            //c.append(myString[0]);
            //c.append("</font>");
            lista.append(c);

        }
        else{
            QChar c = myString[0];
            lista.append(c);

        }
    }
    ui->lbComBitParidade->setText(lista);

    /*for (int i = 0; i < Hamming::instancia()->lista_Bits_Dados.size(); ++i)
    {
        QString myString = QString::number(Hamming::instancia()->lista_Bits_Dados.at(i));
        QChar c = myString[0];
        lista.append(c);
    }*/

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
    if (Hamming::instancia()->soma != 0 && Hamming::instancia()->soma < Hamming::instancia()->lista_Bits_Dados.size())
    {
        QString bit_Errado;
        QString bit_Errado_Sem_Paridade;
        bit_Errado_Sem_Paridade.clear();
        bit_Errado.clear();
        for (int i = 1; i <= Hamming::instancia()->lista_Bits_Dados.size(); i++)
        {
            QString c;
            c.clear();
            QString myString = QString::number(Hamming::instancia()->lista_Bits_Dados.at(i-1));

            if (i == Hamming::instancia()->soma){
                QString c;
                if(myString[0] == '1')
                    c.append("<font color='red'>1</font>");
                else
                    c.append("<font color='red'>0</font>");
                bit_Errado.append(c);
            }
            else if (Hamming::instancia()->potencia_De_Dois(i)){
                QString c;
                if(myString[0] == '1')
                    c.append("<font color='blue'>1</font>");
                else
                    c.append("<font color='blue'>0</font>");
                bit_Errado.append(c);

            }
            else{
                QChar c = myString[0];
                bit_Errado.append(c);
            }
        }

        int tam1 = Hamming::instancia()->lista_Bits_Dados.size() - Hamming::instancia()->paridade_Originais.size();
        int acumulador = 0;
        for (int i = 1; i <= Hamming::instancia()->soma; i++)
        {
            if (Hamming::instancia()->potencia_De_Dois(i))
                acumulador++;
        }
        for (int i = 1; i <= tam1 ; i++)
        {
            QString c;
            c.clear();
            QString myString = (Hamming::instancia()->bits_Originais.at(i-1));

            if (i == Hamming::instancia()->soma - acumulador){
                if(myString[0] == '1')
                    c.append("<font color='red'>1</font>");
                else
                    c.append("<font color='red'>0</font>");
                bit_Errado_Sem_Paridade.append(c);
            }else{
                QChar c = myString[0];
                bit_Errado_Sem_Paridade.append(c);
            }

        }
        /*auto printable = QStringLiteral("O bit é errado está na posicao de numero %1 na palavra").arg(Hamming::instancia()->soma);*/
        ui->lbStrBitErrado->setText(bit_Errado);
        ui->lbStrOpc4->setText(bit_Errado_Sem_Paridade);
    }
    else if (Hamming::instancia()->soma >= Hamming::instancia()->lista_Bits_Dados.size()){
        ui->lbStrBitErrado->setText("Não foi possivel encontrar o bit errado!");
        ui->lbStrOpc4->setText("Não foi possivel encontrar o bit errado!");
    }

    else{
        ui->lbStrBitErrado->setText("Nenhum bit errado!");
        ui->lbStrOpc4->setText("Nenhum bit errado!");
    }

}

HammingForm::~HammingForm()
{
    delete ui;
}
