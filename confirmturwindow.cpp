#include "confirmturwindow.h"
#include "ui_confirmturwindow.h"
#include "database.h"
#include "QDebug"

ConfirmTurWindow::ConfirmTurWindow(int id_tur, QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::ConfirmTurWindow)
    , m_id_tur(id_tur)
{
    ui->setupUi(this);
    auto db = DataBase::getDB();
    Actor actor;
    auto login = actor.loadLogin();
    auto id_actor = db.setID(login);
    auto turInfos = db.getTourInfo(id_tur);
    auto clientDiscount = actor.setDiscount(id_actor);


    if (!turInfos.empty()) {
        // Извлекаем значения из первого (и единственного) кортежа
        QString duration = std::get<0>(turInfos[0]);
        QString countryName = std::get<4>(turInfos[0]);
        QString hotelName = std::get<3>(turInfos[0]);
        QString datee = std::get<2>(turInfos[0]);
        QString climate = std::get<1>(turInfos[0]);
        int price = std::get<7>(turInfos[0]);
        int discount = std::get<8>(turInfos[0]);

        QString priceFinal = QString::number(price * (1 - (discount+clientDiscount)/100.0), 'f', 2);

        // Устанавливаем значения в соответствующие QLabel
        ui->DurationLabel->setText(duration);
        ui->CountryLabel->setText(countryName);
        ui->HotelLabel->setText(hotelName);
        ui->Climatelabel->setText(climate);
        ui->Dateelabel->setText(datee);
        ui->pushButton->setText("Оформить за " + priceFinal);
    } else {
        // Если вектор пустой, то, возможно, не удалось получить информацию о туре
        // Можно установить значения по умолчанию или вывести сообщение об ошибке
        ui->DurationLabel->setText("Нет данных");
        ui->CountryLabel->setText("Нет данных");
        ui->HotelLabel->setText("Нет данных");
        ui->Climatelabel->setText("Нет данных");
        ui->Dateelabel->setText("Нет данных");
    }
}

ConfirmTurWindow::~ConfirmTurWindow()
{
    delete ui;
}

void ConfirmTurWindow::on_CancelpushButton_clicked()
{
    close();
}


void ConfirmTurWindow::on_pushButton_clicked()
{
    auto db = DataBase::getDB();
    Actor actor;
    const auto login = actor.loadLogin();
    const int id_client = db.setID(login);
    db.confirmTur(id_client, m_id_tur);
    close();
}

