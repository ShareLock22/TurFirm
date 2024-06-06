#ifndef ADDADMINWINDOW_H
#define ADDADMINWINDOW_H

#include <QDialog>

namespace Ui {
class AddAdminWindow;
}

class AddAdminWindow : public QDialog
{
    Q_OBJECT

public:
    explicit AddAdminWindow(QWidget *parent = nullptr);
    ~AddAdminWindow();

private slots:
    void on_CancelpushButton_clicked();

    void on_AddAdminpushButton_clicked();

private:
    Ui::AddAdminWindow *ui;
};

#endif // ADDADMINWINDOW_H
