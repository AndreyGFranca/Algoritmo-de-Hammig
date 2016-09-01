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
    QLabel *label;
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
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(564, 350);
        MainWindow->setMaximumSize(QSize(564, 350));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayoutWidget = new QWidget(centralWidget);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(0, 70, 361, 141));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(verticalLayoutWidget);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout->addWidget(label);

        tfBit = new QLineEdit(verticalLayoutWidget);
        tfBit->setObjectName(QStringLiteral("tfBit"));

        verticalLayout->addWidget(tfBit);

        rbCodParidade = new QRadioButton(verticalLayoutWidget);
        rbCodParidade->setObjectName(QStringLiteral("rbCodParidade"));

        verticalLayout->addWidget(rbCodParidade);

        rbCodBitPar = new QRadioButton(verticalLayoutWidget);
        rbCodBitPar->setObjectName(QStringLiteral("rbCodBitPar"));

        verticalLayout->addWidget(rbCodBitPar);

        rbHamm = new QRadioButton(verticalLayoutWidget);
        rbHamm->setObjectName(QStringLiteral("rbHamm"));

        verticalLayout->addWidget(rbHamm);

        horizontalLayoutWidget = new QWidget(centralWidget);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(80, 220, 391, 80));
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
        lbLateral->setGeometry(QRect(360, 80, 201, 16));
        tfBitParidade = new QLineEdit(centralWidget);
        tfBitParidade->setObjectName(QStringLiteral("tfBitParidade"));
        tfBitParidade->setGeometry(QRect(410, 110, 113, 22));
        MainWindow->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
#ifndef QT_NO_WHATSTHIS
        MainWindow->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        label->setText(QApplication::translate("MainWindow", "Informe os bits de qualquer tamanho", 0));
        rbCodParidade->setText(QApplication::translate("MainWindow", "C\303\263digo de Paridade", 0));
        rbCodBitPar->setText(QApplication::translate("MainWindow", "C\303\263digo de Paridade com bit de paridade", 0));
        rbHamm->setText(QApplication::translate("MainWindow", "Algoritmo de Hamming", 0));
        btOk->setText(QApplication::translate("MainWindow", "OK", 0));
        btSair->setText(QApplication::translate("MainWindow", "Sair", 0));
        lbLateral->setText(QApplication::translate("MainWindow", "TextLabel", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
