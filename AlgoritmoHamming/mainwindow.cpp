#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "hammingform.h"
#include "errorform.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_btOk_clicked()
{
    /*
     * Verifica se a caixa de texto está vazia, caso esteja abre uma janela
     * de erro, avisando que a caixa está vazia. Caso não esteja vazia checa
     * qual o radio esta ativo, entao abre uma janela de acordo com o ativo.
     */
    if(ui->tfBit->text() == NULL)
    {

        ErrorForm *err = new ErrorForm();
        err->setVisible(true);
    }

    else if(!ui->rbCodBitPar->isChecked() && !ui->rbCodParidade->isChecked() &&
            !ui->rbHamm->isChecked())
    {
        ErrorForm *err = new ErrorForm();
        err->setVisible(true);
    }

    QString qs_Bit = ui->tfBit->text();
    bool ok, erro = false;
    /*int i_Bit = qs_Bit.toInt(&ok, 100);
    qDebug ("%d", i_Bit);*/

    for (int var = 0; var < qs_Bit.length(); ++var)
    {
        if (!(qs_Bit.at(var) == '1' || qs_Bit.at(var) == '0'))
        {
            erro = true;
            ;
            //int digit = qs_Bit.at(var).digitValue();
            //DO SOMETHING HERE WITH THE DIGIT
        }
    }

    if(erro)
    {
        ErrorForm *err = new ErrorForm();
        err->setVisible(true);
    }

}
