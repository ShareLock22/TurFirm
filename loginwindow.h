#ifndef LOGINWINDOW_H
#define LOGINWINDOW_H

#include <QDialog>
#include "actor.h"
#include "database.h"

namespace Ui {
class LoginWindow;
}

class LoginWindow : public QDialog
{
    Q_OBJECT

public:
    explicit LoginWindow(QWidget *parent = nullptr);
    ~LoginWindow();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void saveCheckboxState();

    void loadCheckboxState();

signals:
    void userEntered(Actor::Role);
private:
    Ui::LoginWindow *ui;
};

#endif // LOGINWINDOW_H
