#include "addhotelwindow.h"
#include "ui_addhotelwindow.h"
#include "database.h"
#include "hotels.h"

#include <QMessageBox>
#include <QFile>
#include <QTextStream>
#include <QRegularExpression>
#include <QRegularExpressionValidator>

AddHotelWindow::AddHotelWindow(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::AddHotelWindow)
{
    ui->setupUi(this);
    auto db = DataBase::getDB();
    db.populateComboBox(ui -> CountrycomboBox);

}

AddHotelWindow::~AddHotelWindow()
{
    delete ui;
}

void AddHotelWindow::on_CancelpushButton_clicked()
{
    close();
}


void AddHotelWindow::on_AddpushButton_clicked()
{   Hotels hotels;
    auto db = DataBase::getDB();

    const auto name = ui -> NamelineEdit -> text();
    const auto adress = ui -> AdresslineEdit -> text();
    int selectIndex2 = ui -> CountrycomboBox -> currentIndex();
    const auto country = ui -> CountrycomboBox -> itemText(selectIndex2);
    const int id_country = db.setCountry(country);
    int selectedIndex = ui -> ServicecomboBox -> currentIndex();
    const auto services = ui -> ServicecomboBox -> itemText(selectedIndex).toInt();


    auto str_warning = hotels.dataValidCheck(name, adress, country, services);
    QMessageBox::warning(this, "Ошибка", str_warning);

    if(str_warning == "Отель добавлен"){
    db.addHotel(name, adress, id_country, services);
    close();
    }

}



