#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "hammingform.h"
#include "errorform.h"
#include "hamming.h"
#include "paridade.h"
#include "paridadesimples.h"
#include "parform.h"
#include "parsimplesform.h"

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
    if(ui->tfBit->text() == NULL/* || ui->tfBitParidade->text() == NULL*/)
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

    //pega os valores para mandar para a janela nos labels
    Hamming::instancia()->bits_Originais = ui->tfBit->text();
    Hamming::instancia()->paridade_Originais = ui->tfBitParidade->text();
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

    while(aux <= tam)
    {
        aux *=2;
        cont++; /*será justamento o numero de bits paridade necessário na palavra.*/
    }

    for (int i = 1; i <= qs_Bit.length() + cont + 1; i++)
    {
        if (Hamming::instancia()->potencia_De_Dois(i))
        {
            Hamming::instancia()->copia_Lista.insert(i-1, QString("X"));
        }

    }

   Paridade::instancia()->bit_Dados = Hamming::instancia()->lista_Bits_Dados;
   ParidadeSimples::instancia()->bit_Dados = Hamming::instancia()->lista_Bits_Dados;

    if(!erro)
    {
        if(ui->rbHamm->isChecked())
        {
            Hamming::instancia()->insere_Bit_Paridade();
            HammingForm *hamming_Form = new HammingForm();
            hamming_Form->setVisible(true);
        }
        else if (ui->rbCodBitPar->isChecked() && ui->tfBitParidade->text().size() == 1)
        {
            Paridade::instancia()->bit_Paridade = ui->tfBitParidade->text();
            ParForm *paridade_Form = new ParForm();
            paridade_Form->setVisible(true);
        }
        else if (ui->rbCodParidade->isChecked())
        {
            ParSimplesForm *par_Form = new ParSimplesForm();
            par_Form->setVisible(true);
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
