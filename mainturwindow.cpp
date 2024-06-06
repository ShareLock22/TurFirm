#include <QTimer>

#include "mainturwindow.h"
#include "exitwindow.h"
#include "addhotelwindow.h"
#include "addturwindow.h"
#include "ui_mainturwindow.h"
#include "addcountry.h"
#include "database.h"
#include "deletewindow.h"
#include "hotelprofilewindow.h"
#include "profileturwindow.h"

MainTurWindow::MainTurWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainTurWindow)
{
    ui->setupUi(this);
    Actor actor;
    const auto login = actor.loadLogin();

    auto db = DataBase::getDB();
    const auto id_operator = db.setID(login);

    auto modelTurs = db.modelTur(id_operator, ModelIndex("Tours"));

    ui->TurslistView->setModel(modelTurs);
    connect(modelTurs, &QAbstractItemModel::dataChanged, this, [this]() {
        UpdateModel("Tours");
    });

    auto modelHotel = db.modelHotel(ModelIndex("Hotels"));
    ui->HotelListView->setModel(modelHotel);
    connect(modelHotel, &QAbstractItemModel::dataChanged, this, [this]() {
        UpdateModel("Hotels");
    });

    UpdateModel("Hotels");
    UpdateModel("Tours");

}

MainTurWindow::~MainTurWindow()
{
    delete ui;
}

void MainTurWindow::on_ExitpushButton_clicked()
{
    ExitWindow ex(this);
    ex.exec();
    if (ex.result() == QDialog::Accepted) {
        emit logout();
    }
}


void MainTurWindow::on_TurspushButton_clicked()
{
    auto* tur = new AddTurWindow;
    connect(tur, &AddTurWindow::finished, this, [this]() {
        UpdateModel("Tours");
    });
    tur->show();
}


void MainTurWindow::on_HotelspushButton_clicked()
{
    auto* hotel = new AddHotelWindow;
    connect(hotel, &AddHotelWindow::finished, this, [this]() {
        UpdateModel("Hotels");
    });
    hotel->show();
}

void MainTurWindow::on_AddCountrypushButton_clicked()
{
    auto* country = new AddCountry;
    connect(country, &AddCountry::finished, this, [this]() {
        UpdateModel("Turs");
        UpdateModel("Hotels");
    });
    country->show();
}


void MainTurWindow::on_listView_doubleClicked(const QModelIndex &index)
{
    auto db = DataBase::getDB();

    QAbstractItemModel* model = ui -> TurslistView -> model();
    QString name = model -> data(index, Qt::DisplayRole).toString();
    const auto id_country = db.setCountry(name);
    const auto id_tur = db.setTur(id_country);

    DeleteWindow* deleteWindow = new DeleteWindow(id_tur, "Turs", this);
    connect(deleteWindow, &DeleteWindow::finished, this, [this]() { UpdateModel("Turs"); });
    deleteWindow->exec();

}

void MainTurWindow::UpdateModel(const QString& modelType) {
    Actor actor;
    const auto login = actor.loadLogin();
    auto db = DataBase::getDB();
    const auto id_operator = db.setID(login);

    QAbstractItemModel* model = nullptr;
    if (modelType == "Tours") {
        model = db.modelTur(id_operator, ModelIndex("Tours"));
        ui->TurslistView->setModel(model);
    }
    else if (modelType == "Hotels") {
        model = db.modelHotel(ModelIndex("Hotels"));
        ui->HotelListView->setModel(model);
    }
    ui->TurslistView->update();
    ui->HotelListView->update();
}

void MainTurWindow::on_HotelListView_doubleClicked(const QModelIndex &index)
{
    auto db = DataBase::getDB();

    QAbstractItemModel* model = ui -> HotelListView -> model();
    QString name = model -> data(index, Qt::DisplayRole).toString();
    const auto id_hotel = db.setHotel(name);

    HotelProfileWindow* hotelProfile = new HotelProfileWindow(id_hotel, this);

    connect(hotelProfile, &HotelProfileWindow::finished, this, [this]() { UpdateModel("Hotels"); });

    hotelProfile->exec();
}


void MainTurWindow::on_TurslistView_doubleClicked(const QModelIndex &index)
{
    auto db = DataBase::getDB();

    QAbstractItemModel* model = ui -> TurslistView -> model();
    QString name = model -> data(index, Qt::DisplayRole).toString();
    const auto id_country = db.setCountry(name);
    const auto id_tur = db.setTur(id_country);

    ProfileTurWindow* turProfile = new ProfileTurWindow(id_tur, this);
    connect(turProfile, &ProfileTurWindow::finished, this, [this]() { UpdateModel("Turs"); });

    turProfile->exec();
}

int MainTurWindow::ModelIndex(const QString& modelName) {
    int selectedIndex;
    if (modelName == "Hotels") {
        selectedIndex = ui -> HotelModelcomboBox -> currentIndex();
    }

    if (modelName == "Tours") {
        selectedIndex = ui -> TourModelcomboBox -> currentIndex();
    }
    return 2 - selectedIndex;
}

void MainTurWindow::on_HotelModelcomboBox_currentIndexChanged(int index)
{
    UpdateModel("Hotels");
}


void MainTurWindow::on_TourModelcomboBox_currentIndexChanged(int index)
{
    UpdateModel("Tours");
}

