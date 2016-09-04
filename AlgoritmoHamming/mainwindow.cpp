#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "hammingform.h"
#include "errorform.h"
#include "hamming.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->lbLateral->setVisible(false);
    ui->tfBitParidade->setVisible(false);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_btOk_clicked()
{
    /*Limpando a fila, e a lista */
    Hamming::instancia()->lista_Bits_Dados.clear();
    Hamming::instancia()->fila_Bits_Paridade.clear();

    /*Verifica se a caixa de texto está vazia.*/
    if(ui->tfBit->text() == NULL || ui->tfBitParidade->text() == NULL)
    {

        ErrorForm *err = new ErrorForm();
        err->setVisible(true);
    }

    /*verifica se algum radio button foi checado */
    else if(!ui->rbCodBitPar->isChecked() && !ui->rbCodParidade->isChecked() &&
            !ui->rbHamm->isChecked())
    {
        ErrorForm *err = new ErrorForm();
        err->setVisible(true);
    }

    /*
     * Obtem a string do tfBit, e percorre toda ela, verificando se há
     * algum erro, armazena todos os bits em uma lista, cada um em uma
     * posicao.
     */
    QString qs_Bit = ui->tfBit->text();
    bool erro = false;

    /*copia a string para outra e adciona x na copia, para printar no hammingform*/
    Hamming::instancia()->copia_Lista = qs_Bit;
    for (int i = 1; i <= qs_Bit.length(); i++)
    {
        if (Hamming::instancia()->potencia_De_Dois(i))
        {
            Hamming::instancia()->copia_Lista.insert(i-1, QString("X"));
        }

    }

    //qDebug(""+ Hamming::instancia()->copia_Lista.toLatin1()+"");

    /* Percorre cada digito da string.*/
    for (int var = 0; var < qs_Bit.length(); ++var)
    {
        /* Verifica se há algum digito que não seja 1 ou 0 no tfBit; */
        if (!(qs_Bit.at(var) == '1' || qs_Bit.at(var) == '0'))
        {
            erro = true;
            break;
        }

        /* Adciona os bits na lista de bits de dados. */
        int bit = qs_Bit.at(var).digitValue();
        Hamming::instancia()->lista_Bits_Dados.push_back(bit);
    }

    if(erro)
    {
        ErrorForm *err = new ErrorForm();
        err->setVisible(true);
        erro = !erro;
    }

    /*
     * Obtem a string do tfBitsParidade em seguida, faz a mesma coisa
     * com o tfBits, ou seja, verifica os erros, e armazena o bit pa_
     * ridade em uma fila.
     */

    QString qs_Bit_Paridade = ui->tfBitParidade->text();
    erro = false;

    for (int var = 0; var < qs_Bit_Paridade.length(); ++var)
    {
        /* Verifica se há algum digito que não seja 1 ou 0 no tfBitParidade; */
        if (!(qs_Bit_Paridade.at(var) == '1' || qs_Bit_Paridade.at(var) == '0'))
        {
            erro = true;
            break;
        }

        /* Adciona os bits na fila de bits de paridade. */
        int bit = qs_Bit_Paridade.at(var).digitValue();

        Hamming::instancia()->fila_Bits_Paridade.insert(
                    Hamming::instancia()->fila_Bits_Paridade.begin(), bit);
    }

    if(erro)
    {
        ErrorForm *err = new ErrorForm();
        err->setVisible(true);
        erro = !erro;
    }

    /*Verificar se o tamanho do bit de paridade corresponde ao tamanho do
     * bit de dados inserido.*/
    unsigned int tam = Hamming::instancia()->lista_Bits_Dados.size(), aux = 1, cont = 0;
    aux = 1; cont = 0;

    /*Se o tamanho da palavra de dados for igual 1
     * Adciona vai adciona o primeiro bit de paridade na posicao 1,
     * e o segundo bit de paridade na posicao 2.
     */
    erro = true;
    if (tam == 1)
    {

       int a = Hamming::instancia()->fila_Bits_Paridade[Hamming::instancia()->fila_Bits_Paridade.size() - 1];
       Hamming::instancia()->lista_Bits_Dados.insert(Hamming::instancia()->lista_Bits_Dados.begin(), a);
       Hamming::instancia()->fila_Bits_Paridade.erase(Hamming::instancia()->fila_Bits_Paridade.end() - 1);
       Hamming::instancia()->lista_Bits_Dados.insert(Hamming::instancia()->lista_Bits_Dados.begin()+1, a);

       Hamming::instancia()->calcula_Bit_Errado();
       HammingForm *hamming_Form = new HammingForm();
       hamming_Form->setVisible(true);

    }
    else if (tam == 2)
    {
        int a = Hamming::instancia()->fila_Bits_Paridade[Hamming::instancia()->fila_Bits_Paridade.size() - 1];
        Hamming::instancia()->lista_Bits_Dados.insert(Hamming::instancia()->lista_Bits_Dados.begin(), a);
        Hamming::instancia()->fila_Bits_Paridade.erase(Hamming::instancia()->fila_Bits_Paridade.end() - 1);
        Hamming::instancia()->lista_Bits_Dados.insert(Hamming::instancia()->lista_Bits_Dados.begin()+1, a);
        Hamming::instancia()->fila_Bits_Paridade.erase(Hamming::instancia()->fila_Bits_Paridade.end() - 1);
        Hamming::instancia()->lista_Bits_Dados.insert(Hamming::instancia()->lista_Bits_Dados.begin()+3, a);

        Hamming::instancia()->calcula_Bit_Errado();
        HammingForm *hamming_Form = new HammingForm();
        hamming_Form->setVisible(true);
    }
    else if (tam > 2)
    {
        while(aux <= tam)
        {
            aux *=2;
            cont++; /*será justamento o numero de bits paridade necessário na palavra.*/
        }
        /*qDebug("%d", cont);*/

        /*Verifica se o tamanho do bit de paridade é maior do que devia.*/
        if(Hamming::instancia()->fila_Bits_Paridade.size() != cont)
        {
            ErrorForm *err = new ErrorForm();
            err->setVisible(true);
            erro = !erro;
        }

        /*for (auto n : Hamming::instancia()->lista_Bits_Dados)
            qDebug("%d", n);*/

        if(erro)
        {
            Hamming::instancia()->insere_Bit_Paridade();
            HammingForm *hamming_Form = new HammingForm();
            hamming_Form->setVisible(true);
        }
    }

}

void MainWindow::on_rbHamm_clicked()
{
    ui->lbLateral->setText("Informe o bit de paridade");
    ui->tfBitParidade->setVisible(true);
    ui->lbLateral->setVisible(true);

}

void MainWindow::on_rbCodBitPar_clicked()
{
    ui->lbLateral->setText("Informe o bit de paridade");
    ui->tfBitParidade->setVisible(true);
    ui->lbLateral->setVisible(true);
}

void MainWindow::on_rbCodParidade_clicked()
{
    ui->tfBitParidade->setVisible(false);
    ui->lbLateral->setVisible(false);
}
