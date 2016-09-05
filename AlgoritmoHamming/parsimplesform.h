#ifndef PARSIMPLESFORM_H
#define PARSIMPLESFORM_H

#include <QWidget>

namespace Ui {
class ParSimplesForm;
}

class ParSimplesForm : public QWidget
{
    Q_OBJECT

public:
    explicit ParSimplesForm(QWidget *parent = 0);
    ~ParSimplesForm();

private:
    Ui::ParSimplesForm *ui;
};

#endif // PARSIMPLESFORM_H
