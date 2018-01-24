#ifndef ROWNANIEKWADRATOWE_H
#define ROWNANIEKWADRATOWE_H

#include <QMainWindow>

namespace Ui {
class RownanieKwadratowe;
}

class RownanieKwadratowe : public QMainWindow
{
    Q_OBJECT

public:
    explicit RownanieKwadratowe(QWidget *parent = 0);
    ~RownanieKwadratowe();

private:
    Ui::RownanieKwadratowe *ui;
};

#endif // ROWNANIEKWADRATOWE_H
