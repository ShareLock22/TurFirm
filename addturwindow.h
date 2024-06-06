#ifndef ADDTURWINDOW_H
#define ADDTURWINDOW_H

#include <QDialog>

namespace Ui {
class AddTurWindow;
}

class AddTurWindow : public QDialog
{
    Q_OBJECT

public:
    explicit AddTurWindow(QWidget *parent = nullptr);
    ~AddTurWindow();

private slots:
    void on_pushButton_clicked();

    void on_AddpushButton_clicked();

private:
    Ui::AddTurWindow *ui;
};

#endif // ADDTURWINDOW_H
