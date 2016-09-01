#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include"hammingform.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:

    void on_btOk_clicked();

    void on_rbHamm_clicked();

    void on_rbCodBitPar_clicked();

    void on_rbCodParidade_clicked();

private:
    Ui::MainWindow *ui;
    HammingForm hamming_form;
};

#endif // MAINWINDOW_H
