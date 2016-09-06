/********************************************************************************
** Form generated from reading UI file 'hammingform.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HAMMINGFORM_H
#define UI_HAMMINGFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HammingForm
{
public:
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *lb_Bits_Dados;
    QLabel *label;
    QLabel *label_4;
    QLabel *label_2;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_3;
    QTextEdit *tf_Informacoes;
    QLabel *label_8;
    QLabel *lbComX;
    QLabel *label_9;
    QLabel *lbComBitParidade;
    QLabel *lbStrBitErrado;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *label_13;
    QLabel *label_14;
    QLabel *label_15;
    QLabel *label_16;
    QLabel *label_17;
    QLabel *label_18;
    QLabel *label_19;
    QLabel *label_20;
    QLabel *label_21;
    QLabel *label_22;
    QLabel *lbStrOpc4;

    void setupUi(QWidget *HammingForm)
    {
        if (HammingForm->objectName().isEmpty())
            HammingForm->setObjectName(QStringLiteral("HammingForm"));
        HammingForm->resize(554, 488);
        HammingForm->setMinimumSize(QSize(554, 488));
        HammingForm->setStyleSheet(QStringLiteral("border-color: rgb(255, 0, 0);"));
        horizontalLayoutWidget = new QWidget(HammingForm);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(10, 240, 450, 41));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        lb_Bits_Dados = new QLabel(horizontalLayoutWidget);
        lb_Bits_Dados->setObjectName(QStringLiteral("lb_Bits_Dados"));
        lb_Bits_Dados->setStyleSheet(QLatin1String("font: 14pt \"Sans Serif\";\n"
"font:bold;\n"
""));

        horizontalLayout->addWidget(lb_Bits_Dados);

        label = new QLabel(horizontalLayoutWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setStyleSheet(QLatin1String("font: 12pt \"Sans Serif\";\n"
"font:bold;\n"
"color: rgb(0, 0, 255);\n"
""));

        horizontalLayout->addWidget(label);

        label_4 = new QLabel(HammingForm);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(360, 30, 189, 61));
        label_2 = new QLabel(HammingForm);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(280, 10, 60, 49));
        label_5 = new QLabel(HammingForm);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(360, 0, 189, 61));
        label_6 = new QLabel(HammingForm);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(360, 60, 189, 61));
        label_7 = new QLabel(HammingForm);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(360, 100, 189, 61));
        label_3 = new QLabel(HammingForm);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(360, 150, 131, 16));
        tf_Informacoes = new QTextEdit(HammingForm);
        tf_Informacoes->setObjectName(QStringLiteral("tf_Informacoes"));
        tf_Informacoes->setGeometry(QRect(0, 400, 541, 81));
        tf_Informacoes->setTextInteractionFlags(Qt::NoTextInteraction);
        label_8 = new QLabel(HammingForm);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(20, 290, 21, 16));
        label_8->setStyleSheet(QLatin1String("font:bold;\n"
"font: 12pt \"Sans Serif\";"));
        lbComX = new QLabel(HammingForm);
        lbComX->setObjectName(QStringLiteral("lbComX"));
        lbComX->setGeometry(QRect(40, 280, 351, 31));
        lbComX->setStyleSheet(QLatin1String("font:bold;\n"
"font: 12pt \"Sans Serif\";"));
        label_9 = new QLabel(HammingForm);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(20, 320, 21, 16));
        label_9->setStyleSheet(QLatin1String("font:bold;\n"
"font: 12pt \"Sans Serif\";"));
        lbComBitParidade = new QLabel(HammingForm);
        lbComBitParidade->setObjectName(QStringLiteral("lbComBitParidade"));
        lbComBitParidade->setGeometry(QRect(40, 310, 351, 31));
        lbComBitParidade->setStyleSheet(QLatin1String("font:bold;\n"
"font: 12pt \"Sans Serif\";"));
        lbComBitParidade->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);
        lbStrBitErrado = new QLabel(HammingForm);
        lbStrBitErrado->setObjectName(QStringLiteral("lbStrBitErrado"));
        lbStrBitErrado->setGeometry(QRect(40, 340, 361, 31));
        lbStrBitErrado->setMaximumSize(QSize(361, 31));
        lbStrBitErrado->setStyleSheet(QLatin1String("font:bold;\n"
"font: 12pt \"Sans Serif\";"));
        label_10 = new QLabel(HammingForm);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(20, 350, 21, 16));
        label_10->setStyleSheet(QLatin1String("font:bold;\n"
"font: 12pt \"Sans Serif\";"));
        label_11 = new QLabel(HammingForm);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(340, 50, 16, 16));
        label_11->setStyleSheet(QStringLiteral("background: rgb(255, 0, 0);"));
        label_12 = new QLabel(HammingForm);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(340, 80, 16, 16));
        label_12->setStyleSheet(QStringLiteral("background: rgb(0, 0, 0)"));
        label_13 = new QLabel(HammingForm);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(340, 20, 16, 16));
        label_13->setStyleSheet(QStringLiteral("background: rgb(0, 0, 255)"));
        label_14 = new QLabel(HammingForm);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(340, 120, 21, 20));
        label_14->setStyleSheet(QLatin1String("color: rgb(0, 0, 255);\n"
"font:bold;"));
        label_15 = new QLabel(HammingForm);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setGeometry(QRect(340, 150, 20, 20));
        label_15->setStyleSheet(QLatin1String("color: rgb(0, 0, 255);\n"
"font:bold;"));
        label_16 = new QLabel(HammingForm);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setGeometry(QRect(-10, 90, 151, 151));
        label_16->setPixmap(QPixmap(QString::fromUtf8("../../../../Pictures/teste/dog.png")));
        label_17 = new QLabel(HammingForm);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setGeometry(QRect(-10, 0, 271, 191));
        label_17->setMaximumSize(QSize(271, 191));
        label_17->setPixmap(QPixmap(QString::fromUtf8("../../../../Pictures/teste/Brushe-balao-de-fala-pfs.png")));
        label_18 = new QLabel(HammingForm);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setGeometry(QRect(90, 30, 121, 16));
        label_19 = new QLabel(HammingForm);
        label_19->setObjectName(QStringLiteral("label_19"));
        label_19->setGeometry(QRect(90, 50, 141, 16));
        label_20 = new QLabel(HammingForm);
        label_20->setObjectName(QStringLiteral("label_20"));
        label_20->setGeometry(QRect(90, 70, 151, 16));
        label_21 = new QLabel(HammingForm);
        label_21->setObjectName(QStringLiteral("label_21"));
        label_21->setGeometry(QRect(120, 90, 91, 16));
        label_22 = new QLabel(HammingForm);
        label_22->setObjectName(QStringLiteral("label_22"));
        label_22->setGeometry(QRect(20, 380, 21, 16));
        label_22->setStyleSheet(QLatin1String("font:bold;\n"
"font: 12pt \"Sans Serif\";"));
        lbStrOpc4 = new QLabel(HammingForm);
        lbStrOpc4->setObjectName(QStringLiteral("lbStrOpc4"));
        lbStrOpc4->setGeometry(QRect(40, 370, 361, 31));
        lbStrOpc4->setMaximumSize(QSize(361, 31));
        lbStrOpc4->setStyleSheet(QLatin1String("font:bold;\n"
"font: 12pt \"Sans Serif\";"));

        retranslateUi(HammingForm);

        QMetaObject::connectSlotsByName(HammingForm);
    } // setupUi

    void retranslateUi(QWidget *HammingForm)
    {
        HammingForm->setWindowTitle(QApplication::translate("HammingForm", "Codigo de Hamming", 0));
        lb_Bits_Dados->setText(QApplication::translate("HammingForm", "Aqui ficara os bits de dados", 0));
        label->setText(QApplication::translate("HammingForm", "Bits paridade", 0));
        label_4->setText(QApplication::translate("HammingForm", "Bit Errado", 0));
        label_2->setText(QApplication::translate("HammingForm", "Legenda:", 0));
        label_5->setText(QApplication::translate("HammingForm", "Bit de Paridade", 0));
        label_6->setText(QApplication::translate("HammingForm", "Bit de Dados", 0));
        label_7->setText(QApplication::translate("HammingForm", "bit de paridade \303\255mpar", 0));
        label_3->setText(QApplication::translate("HammingForm", "bit de paridade par", 0));
        label_8->setText(QApplication::translate("HammingForm", "1\302\260", 0));
        lbComX->setText(QApplication::translate("HammingForm", "TextLabel", 0));
        label_9->setText(QApplication::translate("HammingForm", "2\302\260", 0));
        lbComBitParidade->setText(QApplication::translate("HammingForm", "TextLabel", 0));
        lbStrBitErrado->setText(QApplication::translate("HammingForm", "TextLabel", 0));
        label_10->setText(QApplication::translate("HammingForm", "3\302\260 ", 0));
        label_11->setText(QString());
        label_12->setText(QString());
        label_13->setText(QString());
        label_14->setText(QApplication::translate("HammingForm", "1", 0));
        label_15->setText(QApplication::translate("HammingForm", "0", 0));
        label_16->setText(QString());
        label_17->setText(QString());
        label_18->setText(QApplication::translate("HammingForm", "Aqui calcularemos", 0));
        label_19->setText(QApplication::translate("HammingForm", "O bit errado com o ", 0));
        label_20->setText(QApplication::translate("HammingForm", "famoso codigo de ", 0));
        label_21->setText(QApplication::translate("HammingForm", "Hamming", 0));
        label_22->setText(QApplication::translate("HammingForm", "4\302\260 ", 0));
        lbStrOpc4->setText(QApplication::translate("HammingForm", "TextLabel", 0));
    } // retranslateUi

};

namespace Ui {
    class HammingForm: public Ui_HammingForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HAMMINGFORM_H
