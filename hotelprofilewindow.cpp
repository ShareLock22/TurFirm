#include "hotelprofilewindow.h"
#include "ui_hotelprofilewindow.h"
#include "database.h"
#include "deletewindow.h"

HotelProfileWindow::HotelProfileWindow(int id_hotel, QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::HotelProfileWindow)
    , m_id_hotel(id_hotel)
{
    ui->setupUi(this);
    auto db = DataBase::getDB();
    db.populateComboBox(ui -> CountrycomboBox);
    auto hotelInfos = db.getHotelInfo(id_hotel);

    if (!hotelInfos.empty()) {
        QString name = std::get<0>(hotelInfos[0]);
        QString adress = std::get<1>(hotelInfos[0]);
        QString countryName = std::get<2>(hotelInfos[0]);
        int services = std::get<3>(hotelInfos[0]);

        ui->NamelineEdit->setText(name);
        ui->AdresslineEdit->setText(adress);
        int countryIndex = ui->CountrycomboBox->findText(countryName);
        if (countryIndex != -1) {
            ui->CountrycomboBox->setCurrentIndex(countryIndex);
        }
        ui->ServicecomboBox->setCurrentIndex(5 - services);
    }
}

HotelProfileWindow::~HotelProfileWindow()
{
    delete ui;
}

void HotelProfileWindow::on_pushButton_clicked()
{
    close();
}


void HotelProfileWindow::on_pushButton_2_clicked()
{
    auto db = DataBase::getDB();

    const auto name = ui -> NamelineEdit -> text();
    const auto adress = ui -> AdresslineEdit -> text();
    int selectIndex2 = ui -> CountrycomboBox -> currentIndex();
    const auto country = ui -> CountrycomboBox -> itemText(selectIndex2);
    const int id_country = db.setCountry(country);
    int selectedIndex = ui -> ServicecomboBox -> currentIndex();
    const auto services = ui -> ServicecomboBox -> itemText(selectedIndex).toInt();

    db.reHotel(m_id_hotel, name, adress, id_country, services);
    close();
}


void HotelProfileWindow::on_pushButton_3_clicked()
{
    DeleteWindow* delWindow = new DeleteWindow(m_id_hotel, "Hotels", this);
    connect(delWindow, &DeleteWindow::finished, this, [this]() {
        this->close();
    });

    delWindow->show();

}

