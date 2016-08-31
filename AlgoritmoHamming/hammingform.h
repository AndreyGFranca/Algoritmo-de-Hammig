#ifndef HAMMINGFORM_H
#define HAMMINGFORM_H

#include <QWidget>

namespace Ui {
class HammingForm;
}

class HammingForm : public QWidget
{
    Q_OBJECT

public:
    explicit HammingForm(QWidget *parent = 0);
    ~HammingForm();

private:
    Ui::HammingForm *ui;
};

#endif // HAMMINGFORM_H
