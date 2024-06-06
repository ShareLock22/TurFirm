#ifndef EXITWINDOW_H
#define EXITWINDOW_H

#include <QDialog>

namespace Ui {
class ExitWindow;
}

class ExitWindow : public QDialog
{
    Q_OBJECT

public:
    explicit ExitWindow(QWidget *parent = nullptr);
    ~ExitWindow();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

signals:
    void logout();

private:
    Ui::ExitWindow *ui;
};

#endif // EXITWINDOW_H
