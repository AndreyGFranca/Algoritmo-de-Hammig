/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLineEdit *tfBit;
    QRadioButton *rbCodParidade;
    QRadioButton *rbCodBitPar;
    QRadioButton *rbHamm;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *btOk;
    QPushButton *btSair;
    QLabel *lbLateral;
    QLineEdit *tfBitParidade;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(573, 410);
        MainWindow->setMinimumSize(QSize(573, 410));
        MainWindow->setMaximumSize(QSize(573, 410));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayoutWidget = new QWidget(centralWidget);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(10, 240, 361, 102));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        tfBit = new QLineEdit(verticalLayoutWidget);
        tfBit->setObjectName(QStringLiteral("tfBit"));

        verticalLayout->addWidget(tfBit);

        rbCodParidade = new QRadioButton(verticalLayoutWidget);
        rbCodParidade->setObjectName(QStringLiteral("rbCodParidade"));

        verticalLayout->addWidget(rbCodParidade);

        rbCodBitPar = new QRadioButton(verticalLayoutWidget);
        rbCodBitPar->setObjectName(QStringLiteral("rbCodBitPar"));
        rbCodBitPar->setAutoFillBackground(false);

        verticalLayout->addWidget(rbCodBitPar);

        rbHamm = new QRadioButton(verticalLayoutWidget);
        rbHamm->setObjectName(QStringLiteral("rbHamm"));

        verticalLayout->addWidget(rbHamm);

        horizontalLayoutWidget = new QWidget(centralWidget);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(60, 350, 443, 41));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        btOk = new QPushButton(horizontalLayoutWidget);
        btOk->setObjectName(QStringLiteral("btOk"));

        horizontalLayout->addWidget(btOk);

        btSair = new QPushButton(horizontalLayoutWidget);
        btSair->setObjectName(QStringLiteral("btSair"));

        horizontalLayout->addWidget(btSair);

        lbLateral = new QLabel(centralWidget);
        lbLateral->setObjectName(QStringLiteral("lbLateral"));
        lbLateral->setGeometry(QRect(370, 220, 201, 16));
        tfBitParidade = new QLineEdit(centralWidget);
        tfBitParidade->setObjectName(QStringLiteral("tfBitParidade"));
        tfBitParidade->setGeometry(QRect(370, 240, 113, 22));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 220, 261, 16));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 130, 111, 91));
        label_2->setPixmap(QPixmap(QString::fromUtf8("../../../../Pictures/teste/dog.png")));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(30, 0, 311, 201));
        label_3->setPixmap(QPixmap(QString::fromUtf8("../../../../Pictures/teste/Brushe-balao-de-fala-pfs.png")));
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(130, 30, 111, 16));
        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(110, 50, 161, 16));
        label_6 = new QLabel(centralWidget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(110, 70, 161, 16));
        label_7 = new QLabel(centralWidget);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(120, 90, 141, 16));
        label_8 = new QLabel(centralWidget);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(160, 100, 101, 16));
        MainWindow->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Aprendendo Arquitetura de Computadores com o Fred!", 0));
#ifndef QT_NO_WHATSTHIS
        MainWindow->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        rbCodParidade->setText(QApplication::translate("MainWindow", "C\303\263digo de Paridade", 0));
        rbCodBitPar->setText(QApplication::translate("MainWindow", "C\303\263digo de Paridade com bit de paridade", 0));
        rbHamm->setText(QApplication::translate("MainWindow", "Algoritmo de Hamming", 0));
        btOk->setText(QApplication::translate("MainWindow", "OK", 0));
        btSair->setText(QApplication::translate("MainWindow", "Sair", 0));
        lbLateral->setText(QApplication::translate("MainWindow", "TextLabel", 0));
        label->setText(QApplication::translate("MainWindow", "Informe uma palavra de qualquer tamanho:", 0));
        label_2->setText(QString());
        label_3->setText(QString());
        label_4->setText(QApplication::translate("MainWindow", "Ol\303\241, eu sou o Fred", 0));
        label_5->setText(QApplication::translate("MainWindow", "Vou te ensinar algumas", 0));
        label_6->setText(QApplication::translate("MainWindow", "coisas bem legais, sobre", 0));
        label_7->setText(QApplication::translate("MainWindow", "Arquitetura de ", 0));
        label_8->setText(QApplication::translate("MainWindow", "Computadores", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
