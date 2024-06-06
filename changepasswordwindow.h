#ifndef CHANGEPASSWORDWINDOW_H
#define CHANGEPASSWORDWINDOW_H

#include <QDialog>

namespace Ui {
class ChangePasswordWindow;
}

class ChangePasswordWindow : public QDialog
{
    Q_OBJECT

public:
    explicit ChangePasswordWindow(int id_user, QWidget *parent = nullptr);
    ~ChangePasswordWindow();

private slots:
    void on_CancelpushButton_clicked();

    void on_ChangepushButton_clicked();

private:
    Ui::ChangePasswordWindow *ui;
    int m_id_user;
};

#endif // CHANGEPASSWORDWINDOW_H
