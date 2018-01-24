#include "rownaniekwadratowe.h"
#include "ui_rownaniekwadratowe.h"

RownanieKwadratowe::RownanieKwadratowe(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::RownanieKwadratowe)
{
    ui->setupUi(this);
}

RownanieKwadratowe::~RownanieKwadratowe()
{
    delete ui;
}
