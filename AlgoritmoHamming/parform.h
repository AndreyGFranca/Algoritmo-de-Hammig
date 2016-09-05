#ifndef PARFORM_H
#define PARFORM_H

#include <QWidget>

namespace Ui {
class ParForm;
}

class ParForm : public QWidget
{
    Q_OBJECT

public:
    explicit ParForm(QWidget *parent = 0);
    ~ParForm();

private:
    Ui::ParForm *ui;
};

#endif // PARFORM_H
