/********************************************************************************
** Form generated from reading UI file 'parform.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PARFORM_H
#define UI_PARFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ParForm
{
public:
    QLabel *label_8;
    QLabel *lbBitsDados;
    QLabel *label_3;
    QLabel *label_12;
    QLabel *label_2;
    QLabel *lbRespostaCorreta;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label;
    QLabel *label_7;
    QLabel *label_13;
    QLabel *label_9;
    QLabel *label_10;
    QTextEdit *tf_Informacoes;
    QLabel *lbMovie;
    QLabel *label_4;
    QLabel *label_11;
    QLabel *label_14;
    QLabel *label_15;
    QLabel *label_16;
    QLabel *label_17;

    void setupUi(QWidget *ParForm)
    {
        if (ParForm->objectName().isEmpty())
            ParForm->setObjectName(QStringLiteral("ParForm"));
        ParForm->resize(556, 369);
        ParForm->setMinimumSize(QSize(556, 369));
        label_8 = new QLabel(ParForm);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(8, 210, 111, 20));
        lbBitsDados = new QLabel(ParForm);
        lbBitsDados->setObjectName(QStringLiteral("lbBitsDados"));
        lbBitsDados->setGeometry(QRect(140, 180, 391, 16));
        lbBitsDados->setStyleSheet(QStringLiteral("font: 12pt \"Sans Serif\";"));
        label_3 = new QLabel(ParForm);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(350, 110, 131, 16));
        label_12 = new QLabel(ParForm);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(350, 50, 16, 16));
        label_12->setStyleSheet(QStringLiteral("background: rgb(0, 0, 0)"));
        label_2 = new QLabel(ParForm);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(270, 0, 60, 49));
        lbRespostaCorreta = new QLabel(ParForm);
        lbRespostaCorreta->setObjectName(QStringLiteral("lbRespostaCorreta"));
        lbRespostaCorreta->setGeometry(QRect(140, 210, 401, 16));
        lbRespostaCorreta->setMaximumSize(QSize(401, 16));
        lbRespostaCorreta->setStyleSheet(QStringLiteral("font: 12pt \"Sans Serif\";"));
        label_5 = new QLabel(ParForm);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(370, 0, 189, 61));
        label_6 = new QLabel(ParForm);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(370, 30, 189, 61));
        label = new QLabel(ParForm);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 180, 111, 16));
        label->setStyleSheet(QStringLiteral("font: 10pt \"Sans Serif\";"));
        label_7 = new QLabel(ParForm);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(350, 70, 189, 61));
        label_13 = new QLabel(ParForm);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(350, 20, 16, 16));
        label_13->setStyleSheet(QStringLiteral("background: rgb(0, 0, 255)"));
        label_9 = new QLabel(ParForm);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(330, 90, 16, 16));
        label_9->setStyleSheet(QLatin1String("color:blue;\n"
""));
        label_10 = new QLabel(ParForm);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(330, 110, 16, 16));
        label_10->setStyleSheet(QLatin1String("color:blue;\n"
""));
        tf_Informacoes = new QTextEdit(ParForm);
        tf_Informacoes->setObjectName(QStringLiteral("tf_Informacoes"));
        tf_Informacoes->setGeometry(QRect(10, 270, 501, 81));
        tf_Informacoes->setTextInteractionFlags(Qt::NoTextInteraction);
        lbMovie = new QLabel(ParForm);
        lbMovie->setObjectName(QStringLiteral("lbMovie"));
        lbMovie->setGeometry(QRect(0, 60, 121, 131));
        lbMovie->setStyleSheet(QStringLiteral("border-color: rgb(0, 0, 0);"));
        lbMovie->setPixmap(QPixmap(QString::fromUtf8("../../../../Pictures/teste/dog.png")));
        label_4 = new QLabel(ParForm);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(110, 0, 181, 141));
        label_4->setPixmap(QPixmap(QString::fromUtf8("../../../../Pictures/teste/265-128.png")));
        label_11 = new QLabel(ParForm);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(130, 30, 101, 21));
        label_11->setLayoutDirection(Qt::LeftToRight);
        label_14 = new QLabel(ParForm);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(130, 50, 111, 16));
        label_15 = new QLabel(ParForm);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setGeometry(QRect(130, 70, 101, 16));
        label_16 = new QLabel(ParForm);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setGeometry(QRect(150, 90, 59, 14));
        label_17 = new QLabel(ParForm);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setGeometry(QRect(20, 240, 111, 16));
        label_17->setStyleSheet(QStringLiteral("font: italic 12pt \"Sans Serif\";"));

        retranslateUi(ParForm);

        QMetaObject::connectSlotsByName(ParForm);
    } // setupUi

    void retranslateUi(QWidget *ParForm)
    {
        ParForm->setWindowTitle(QApplication::translate("ParForm", "Paridade com bit paridade", 0));
#ifndef QT_NO_WHATSTHIS
        label_8->setWhatsThis(QApplication::translate("ParForm", "<html><head/><body><p>font: 10pt &quot;Sans Serif&quot;;</p></body></html>", 0));
#endif // QT_NO_WHATSTHIS
        label_8->setText(QApplication::translate("ParForm", "Resposta Correta:", 0));
        lbBitsDados->setText(QApplication::translate("ParForm", "lbBitsDados", 0));
        label_3->setText(QApplication::translate("ParForm", "bit de paridade par", 0));
        label_12->setText(QString());
        label_2->setText(QApplication::translate("ParForm", "Legenda:", 0));
        lbRespostaCorreta->setText(QApplication::translate("ParForm", "lbRespostaCorreta", 0));
        label_5->setText(QApplication::translate("ParForm", "Bit de Paridade", 0));
        label_6->setText(QApplication::translate("ParForm", "Bit de Dados", 0));
        label->setText(QApplication::translate("ParForm", "Bits Informados:", 0));
        label_7->setText(QApplication::translate("ParForm", "bit de paridade \303\255mpar", 0));
        label_13->setText(QString());
        label_9->setText(QApplication::translate("ParForm", "1", 0));
        label_10->setText(QApplication::translate("ParForm", "0", 0));
        lbMovie->setText(QString());
        label_4->setText(QString());
        label_11->setText(QApplication::translate("ParForm", "     Aqui vamos", 0));
        label_14->setText(QApplication::translate("ParForm", "Verificar se o bit", 0));
        label_15->setText(QApplication::translate("ParForm", "de paridade est\303\241", 0));
        label_16->setText(QApplication::translate("ParForm", "correto!", 0));
        label_17->setText(QApplication::translate("ParForm", "Explica\303\247\303\243o:", 0));
    } // retranslateUi

};

namespace Ui {
    class ParForm: public Ui_ParForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PARFORM_H
