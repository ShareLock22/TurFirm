#ifndef HOTELPROFILEWINDOW_H
#define HOTELPROFILEWINDOW_H

#include <QDialog>

namespace Ui {
class HotelProfileWindow;
}

class HotelProfileWindow : public QDialog
{
    Q_OBJECT

public:
    explicit HotelProfileWindow(int id_hotel, QWidget *parent = nullptr);
    ~HotelProfileWindow();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::HotelProfileWindow *ui;
    int m_id_hotel;
};

#endif // HOTELPROFILEWINDOW_H
