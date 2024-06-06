#ifndef ADDCOUNTRY_H
#define ADDCOUNTRY_H

#include <QDialog>

namespace Ui {
class AddCountry;
}

class AddCountry : public QDialog
{
    Q_OBJECT

public:
    explicit AddCountry(QWidget *parent = nullptr);
    ~AddCountry();

private slots:
    void on_CancelpushButton_clicked();

    void on_AddpushButton_clicked();

    void on_listView_doubleClicked(const QModelIndex &index);

private:
    Ui::AddCountry *ui;
};

#endif // ADDCOUNTRY_H
