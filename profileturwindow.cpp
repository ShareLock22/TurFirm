#include "profileturwindow.h"
#include "ui_profileturwindow.h"
#include "database.h"
#include "deletewindow.h"
#include "database.h"

ProfileTurWindow::ProfileTurWindow(int id_tur, QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::ProfileTurWindow)
    , m_id_tur(id_tur)
{
    ui->setupUi(this);
    auto db = DataBase::getDB();
    db.populateComboBoxHotels(ui -> HotelcomboBox);
    auto turInfos = db.getTourInfo(id_tur);

    if (!turInfos.empty()) {
        QString duration = std::get<0>(turInfos[0]);
        QString climate = std::get<1>(turInfos[0]);
        QString date = std::get<2>(turInfos[0]);
        QString hotelName = std::get<3>(turInfos[0]);
        QString countryName = std::get<4>(turInfos[0]);
        QString operatorName = std::get<5>(turInfos[0]);
        QString clientName = std::get<6>(turInfos[0]);

        int durationIndex = ui->DureationcomboBox->findText(duration);
        ui -> DureationcomboBox->setCurrentIndex(durationIndex);
        int climateIndex = ui->ClimatecomboBox->findText(climate);
        ui -> ClimatecomboBox->setCurrentIndex(climateIndex);

        int hotelIndex = ui->HotelcomboBox->findText(hotelName);
        ui -> HotelcomboBox->setCurrentIndex(hotelIndex);
        ui->DateelineEdit->setText(date);
        ui->Countrylabel->setText(countryName);
        ui->Operatorlabel->setText(operatorName);
        ui->Clientlabel->setText(clientName);
    }

}

ProfileTurWindow::~ProfileTurWindow()
{
    delete ui;
}

void ProfileTurWindow::on_pushButton_clicked()
{
    close();
}


void ProfileTurWindow::on_DeletepushButton_clicked()
{
    DeleteWindow* delWindow = new DeleteWindow(m_id_tur, "Turs", this);
    connect(delWindow, &DeleteWindow::finished, this, [this]() {
        this->close();
    });

    delWindow->show();
}


void ProfileTurWindow::on_pushButton_2_clicked()
{
    auto db = DataBase::getDB();
    auto selectHotel = ui -> HotelcomboBox -> currentText();
    const int id_hotel = db.setHotel(selectHotel);

    int selectDuration = ui -> DureationcomboBox -> currentIndex();
    const auto duration = ui -> DureationcomboBox -> itemText(selectDuration);

    int selectClimate = ui -> ClimatecomboBox -> currentIndex();
    const auto climate = ui -> ClimatecomboBox -> itemText(selectClimate);

    const QString date = ui -> DateelineEdit -> text();

    //const auto datee = ui -> DatelineEdit -> text();

    db.reTur(m_id_tur, duration, date, id_hotel, climate);
    close();

}

