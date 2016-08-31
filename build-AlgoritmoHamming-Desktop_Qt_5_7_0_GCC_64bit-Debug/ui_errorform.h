/********************************************************************************
** Form generated from reading UI file 'errorform.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ERRORFORM_H
#define UI_ERRORFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_ErrorForm
{
public:
    QLabel *label;
    QLabel *label_2;
    QPushButton *pushButton;
    QLabel *label_3;

    void setupUi(QDialog *ErrorForm)
    {
        if (ErrorForm->objectName().isEmpty())
            ErrorForm->setObjectName(QStringLiteral("ErrorForm"));
        ErrorForm->resize(388, 186);
        label = new QLabel(ErrorForm);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 10, 241, 16));
        label_2 = new QLabel(ErrorForm);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 30, 311, 16));
        pushButton = new QPushButton(ErrorForm);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(40, 80, 141, 41));
        label_3 = new QLabel(ErrorForm);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(220, 50, 131, 131));
        label_3->setPixmap(QPixmap(QString::fromUtf8("../../../../Pictures/teste/rosto-triste_318-67603.png.jpeg")));

        retranslateUi(ErrorForm);

        QMetaObject::connectSlotsByName(ErrorForm);
    } // setupUi

    void retranslateUi(QDialog *ErrorForm)
    {
        ErrorForm->setWindowTitle(QApplication::translate("ErrorForm", "Dialog", 0));
        label->setText(QApplication::translate("ErrorForm", "Desculpe! mas ocorreu algum erro.", 0));
        label_2->setText(QApplication::translate("ErrorForm", "Cheque todos os campos, e veja se est\303\241 tudo certo.", 0));
        pushButton->setText(QApplication::translate("ErrorForm", "Voltar", 0));
        label_3->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class ErrorForm: public Ui_ErrorForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ERRORFORM_H
