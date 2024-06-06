#include "addturwindow.h"
#include "ui_addturwindow.h"
#include "database.h"

#include <QMessageBox>

AddTurWindow::AddTurWindow(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::AddTurWindow)
{
    ui->setupUi(this);
    auto db = DataBase::getDB();
    db.populateComboBoxHotels(ui -> HotelcomboBox);
    db.populateComboBox(ui -> CountrycomboBox);
}

AddTurWindow::~AddTurWindow()
{
    delete ui;
}

void AddTurWindow::on_pushButton_clicked()
{
    close();
}


void AddTurWindow::on_AddpushButton_clicked()
{
    auto db = DataBase::getDB();
    Actor actor;

    auto selectHotel = ui -> HotelcomboBox -> currentText();
    const int id_hotel = db.setHotel(selectHotel);

    auto selectCountry = ui -> CountrycomboBox -> currentText();
    const int id_country = db.setCountry(selectCountry);

    int selectDuration = ui -> DurationcomboBox -> currentIndex();
    const auto duration = ui -> DurationcomboBox -> itemText(selectDuration);

    int selectClimate = ui -> ClimatecomboBox -> currentIndex();
    const auto climate = ui -> ClimatecomboBox -> itemText(selectClimate);

    const auto datee = ui -> DatelineEdit -> text();

    const auto login = actor.loadLogin();

    const int id_operator = db.setID(login);

    const int price = ui->PricespinBox->value();

    const int discount = ui->DiscountspinBox->value();

    if (db.checkHotel(id_hotel, id_country)) {
        db.addTur(duration, id_hotel, id_country, datee, climate, id_operator, 3, price, discount);
        close();
    }

    else QMessageBox::warning(this, "Ошибка", "Отель находится в другой стране");

}


