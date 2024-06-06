#ifndef ADDHOTELWINDOW_H
#define ADDHOTELWINDOW_H

#include <QDialog>

namespace Ui {
class AddHotelWindow;
}

class AddHotelWindow : public QDialog
{
    Q_OBJECT

public:
    explicit AddHotelWindow(QWidget *parent = nullptr);
    ~AddHotelWindow();

private slots:
    void on_CancelpushButton_clicked();

    void on_AddpushButton_clicked();


private:
    Ui::AddHotelWindow *ui;
};

#endif // ADDHOTELWINDOW_H
