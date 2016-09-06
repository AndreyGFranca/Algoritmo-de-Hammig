/********************************************************************************
** Form generated from reading UI file 'parsimplesform.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PARSIMPLESFORM_H
#define UI_PARSIMPLESFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ParSimplesForm
{
public:
    QTextEdit *tf_Informacoes;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *lbBitsDados;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_13;
    QLabel *label_7;
    QLabel *label_14;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *label_15;
    QLabel *label_17;

    void setupUi(QWidget *ParSimplesForm)
    {
        if (ParSimplesForm->objectName().isEmpty())
            ParSimplesForm->setObjectName(QStringLiteral("ParSimplesForm"));
        ParSimplesForm->resize(522, 349);
        ParSimplesForm->setMinimumSize(QSize(522, 266));
        ParSimplesForm->setMaximumSize(QSize(522, 349));
        tf_Informacoes = new QTextEdit(ParSimplesForm);
        tf_Informacoes->setObjectName(QStringLiteral("tf_Informacoes"));
        tf_Informacoes->setGeometry(QRect(20, 260, 461, 81));
        tf_Informacoes->setTextInteractionFlags(Qt::NoTextInteraction);
        label = new QLabel(ParSimplesForm);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(380, 80, 131, 20));
        label_2 = new QLabel(ParSimplesForm);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(380, 60, 131, 20));
        label_3 = new QLabel(ParSimplesForm);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(360, 60, 16, 16));
        label_3->setStyleSheet(QLatin1String("font:bold; color:blue;\n"
""));
        label_4 = new QLabel(ParSimplesForm);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(360, 80, 16, 16));
        label_4->setStyleSheet(QLatin1String("font: bold;\n"
"color:blue;\n"
""));
        lbBitsDados = new QLabel(ParSimplesForm);
        lbBitsDados->setObjectName(QStringLiteral("lbBitsDados"));
        lbBitsDados->setGeometry(QRect(90, 200, 381, 16));
        lbBitsDados->setMinimumSize(QSize(381, 16));
        lbBitsDados->setMaximumSize(QSize(381, 16));
        lbBitsDados->setStyleSheet(QStringLiteral("font: 12pt \"Sans Serif\";"));
        label_5 = new QLabel(ParSimplesForm);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(300, 10, 59, 14));
        label_6 = new QLabel(ParSimplesForm);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(370, 10, 21, 16));
        label_6->setAutoFillBackground(false);
        label_13 = new QLabel(ParSimplesForm);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(370, 10, 16, 16));
        label_13->setStyleSheet(QStringLiteral("background: rgb(0, 0, 255)"));
        label_7 = new QLabel(ParSimplesForm);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(390, 10, 131, 20));
        label_14 = new QLabel(ParSimplesForm);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(370, 30, 16, 16));
        label_14->setStyleSheet(QStringLiteral("background: rgb(0, 0, 0)"));
        label_8 = new QLabel(ParSimplesForm);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(390, 30, 131, 20));
        label_9 = new QLabel(ParSimplesForm);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(0, 90, 181, 111));
        label_9->setPixmap(QPixmap(QString::fromUtf8("../../../../Pictures/teste/dog.png")));
        label_10 = new QLabel(ParSimplesForm);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(110, 10, 171, 131));
        label_10->setPixmap(QPixmap(QString::fromUtf8("../../../../Pictures/teste/9994-200.png")));
        label_11 = new QLabel(ParSimplesForm);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(140, 50, 81, 16));
        label_12 = new QLabel(ParSimplesForm);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(130, 70, 111, 16));
        label_15 = new QLabel(ParSimplesForm);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setGeometry(QRect(130, 90, 91, 16));
        label_17 = new QLabel(ParSimplesForm);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setGeometry(QRect(30, 230, 111, 16));
        label_17->setStyleSheet(QStringLiteral("font: italic 12pt \"Sans Serif\";"));

        retranslateUi(ParSimplesForm);

        QMetaObject::connectSlotsByName(ParSimplesForm);
    } // setupUi

    void retranslateUi(QWidget *ParSimplesForm)
    {
        ParSimplesForm->setWindowTitle(QApplication::translate("ParSimplesForm", "Paridade", 0));
        label->setText(QApplication::translate("ParSimplesForm", "Bit paridade impar", 0));
        label_2->setText(QApplication::translate("ParSimplesForm", "Bit paridade par", 0));
        label_3->setText(QApplication::translate("ParSimplesForm", "0", 0));
        label_4->setText(QApplication::translate("ParSimplesForm", "1", 0));
        lbBitsDados->setText(QApplication::translate("ParSimplesForm", "lbBitsDados", 0));
        label_5->setText(QApplication::translate("ParSimplesForm", "Legenda:", 0));
        label_6->setText(QString());
        label_13->setText(QString());
        label_7->setText(QApplication::translate("ParSimplesForm", "Bit paridade", 0));
        label_14->setText(QString());
        label_8->setText(QApplication::translate("ParSimplesForm", "Bit de dados", 0));
        label_9->setText(QString());
        label_10->setText(QString());
        label_11->setText(QApplication::translate("ParSimplesForm", "Aqui vamos", 0));
        label_12->setText(QApplication::translate("ParSimplesForm", "Encontrar o valor", 0));
        label_15->setText(QApplication::translate("ParSimplesForm", "do bit paridade", 0));
        label_17->setText(QApplication::translate("ParSimplesForm", "Explica\303\247\303\243o:", 0));
    } // retranslateUi

};

namespace Ui {
    class ParSimplesForm: public Ui_ParSimplesForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PARSIMPLESFORM_H
