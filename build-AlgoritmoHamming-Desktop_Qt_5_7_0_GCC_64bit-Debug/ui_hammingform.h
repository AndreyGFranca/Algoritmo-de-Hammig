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

    void setupUi(QWidget *HammingForm)
    {
        if (HammingForm->objectName().isEmpty())
            HammingForm->setObjectName(QStringLiteral("HammingForm"));
        HammingForm->resize(554, 350);
        HammingForm->setStyleSheet(QStringLiteral("border-color: rgb(255, 0, 0);"));
        horizontalLayoutWidget = new QWidget(HammingForm);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(10, 10, 321, 89));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        lb_Bits_Dados = new QLabel(horizontalLayoutWidget);
        lb_Bits_Dados->setObjectName(QStringLiteral("lb_Bits_Dados"));

        horizontalLayout->addWidget(lb_Bits_Dados);

        label = new QLabel(horizontalLayoutWidget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        label_4 = new QLabel(HammingForm);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(410, 20, 189, 61));
        label_2 = new QLabel(HammingForm);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(330, 0, 60, 49));
        label_5 = new QLabel(HammingForm);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(410, -10, 189, 61));
        label_6 = new QLabel(HammingForm);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(410, 50, 189, 61));
        label_7 = new QLabel(HammingForm);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(410, 90, 189, 61));
        label_3 = new QLabel(HammingForm);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(410, 150, 131, 16));
        tf_Informacoes = new QTextEdit(HammingForm);
        tf_Informacoes->setObjectName(QStringLiteral("tf_Informacoes"));
        tf_Informacoes->setGeometry(QRect(20, 260, 381, 70));
        tf_Informacoes->setTextInteractionFlags(Qt::NoTextInteraction);
        horizontalLayoutWidget->raise();
        label->raise();
        label_4->raise();
        label->raise();
        label_2->raise();
        label_5->raise();
        label_6->raise();
        label_7->raise();
        label_3->raise();
        lb_Bits_Dados->raise();
        tf_Informacoes->raise();

        retranslateUi(HammingForm);

        QMetaObject::connectSlotsByName(HammingForm);
    } // setupUi

    void retranslateUi(QWidget *HammingForm)
    {
        HammingForm->setWindowTitle(QApplication::translate("HammingForm", "Form", 0));
        lb_Bits_Dados->setText(QApplication::translate("HammingForm", "Aqui ficara os bits de dados", 0));
        label->setText(QApplication::translate("HammingForm", "Bits paridade", 0));
        label_4->setText(QApplication::translate("HammingForm", "Bit Errado", 0));
        label_2->setText(QApplication::translate("HammingForm", "Legenda:", 0));
        label_5->setText(QApplication::translate("HammingForm", "Bit de Paridade", 0));
        label_6->setText(QApplication::translate("HammingForm", "Bit de Dados", 0));
        label_7->setText(QApplication::translate("HammingForm", "bit de paridade \303\255mpar", 0));
        label_3->setText(QApplication::translate("HammingForm", "bit de paridade par", 0));
    } // retranslateUi

};

namespace Ui {
    class HammingForm: public Ui_HammingForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HAMMINGFORM_H
