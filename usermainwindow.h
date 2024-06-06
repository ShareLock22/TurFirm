#ifndef USERMAINWINDOW_H
#define USERMAINWINDOW_H

#include <QDialog>

namespace Ui {
class UserMainWindow;
}

class UserMainWindow : public QDialog
{
    Q_OBJECT

public:
    explicit UserMainWindow(QWidget *parent = nullptr);
    ~UserMainWindow();

private:
    Ui::UserMainWindow *ui;
};

#endif // USERMAINWINDOW_H
