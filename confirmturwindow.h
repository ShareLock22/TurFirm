#ifndef CONFIRMTURWINDOW_H
#define CONFIRMTURWINDOW_H

#include <QDialog>

namespace Ui {
class ConfirmTurWindow;
}

class ConfirmTurWindow : public QDialog
{
    Q_OBJECT

public:
    explicit ConfirmTurWindow(int id_tur, QWidget *parent = nullptr);
    ~ConfirmTurWindow();

private slots:
    void on_CancelpushButton_clicked();

    void on_pushButton_clicked();

private:
    Ui::ConfirmTurWindow *ui;
    int m_id_tur;
};

#endif // CONFIRMTURWINDOW_H
