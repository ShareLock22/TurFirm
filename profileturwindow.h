#ifndef PROFILETURWINDOW_H
#define PROFILETURWINDOW_H

#include <QDialog>

namespace Ui {
class ProfileTurWindow;
}

class ProfileTurWindow : public QDialog
{
    Q_OBJECT

public:
    explicit ProfileTurWindow(int id_tur, QWidget *parent = nullptr);
    ~ProfileTurWindow();

private slots:
    void on_pushButton_clicked();

    void on_DeletepushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::ProfileTurWindow *ui;
    int m_id_tur;
};

#endif // PROFILETURWINDOW_H
