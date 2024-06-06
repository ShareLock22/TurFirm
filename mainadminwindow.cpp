#include <QTableView>

#include "mainadminwindow.h"
#include "ui_mainadminwindow.h"
#include "deletewindow.h"
#include "hotelprofilewindow.h"
#include "profileturwindow.h"


MainAdminWindow::MainAdminWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainAdminWindow)
{
    ui->setupUi(this);
    auto db = DataBase::getDB();

    auto modelActor = db.modelActor(2);
    ui -> ActortableView -> setModel(modelActor);

    auto modelAdmin = db.modelRoleView(0);
    ui -> AdmintableView -> setModel(modelAdmin);

    auto modelOperator = db.modelRoleView(1);
    ui -> OperatortableView -> setModel(modelOperator);

    auto modelClient = db.modelRoleView(2);
    ui -> ClienttableView -> setModel(modelClient);

    auto modelHotel = db.modelHotel(ModelIndex("Hotels"));
    ui -> HotelListView -> setModel(modelHotel);
    auto modelCountry = db.modelCountry(ModelIndex("Countries"));
    ui -> CountryListView -> setModel(modelCountry);

    auto modelTours = db.modelAllTurs(ModelIndex("Tours"));
    ui -> TourListView -> setModel(modelTours);

    ui->ActortableView->setSelectionBehavior(QTableView::SelectionBehavior::SelectRows);
    ui->AdmintableView->setSelectionBehavior(QTableView::SelectionBehavior::SelectRows);
    ui->OperatortableView->setSelectionBehavior(QTableView::SelectionBehavior::SelectRows);
    ui->ClienttableView->setSelectionBehavior(QTableView::SelectionBehavior::SelectRows);
}

MainAdminWindow::~MainAdminWindow()
{
    delete ui;
}



void MainAdminWindow::on_AddpushButton_clicked()
{
    AddOperatorWindow* add = new AddOperatorWindow(this);

    connect(add, &AddOperatorWindow::finished, this, [this]() { UpdateModel("Operators"); });

    add->show();
}



void MainAdminWindow::on_ExitpushButton_clicked()
{
    ExitWindow ex(this);
    ex.exec();
    if (ex.result() == QDialog::Accepted) {
        emit logout();
    }
}


void MainAdminWindow::on_AddAdminpushButton_clicked()
{
    AddAdminWindow* add = new AddAdminWindow(this);

    connect(add, &AddOperatorWindow::finished,  this, [this]() { UpdateModel("Admins"); });


    add->show();
}


void MainAdminWindow::on_ActortableView_doubleClicked(const QModelIndex &index)
{
    auto db = DataBase::getDB();

    QAbstractItemModel* model = ui -> ActortableView -> model();
    QString name = model -> data(index, Qt::DisplayRole).toString();
    const auto id_actor = db.setID(name);

    DeleteWindow* deleteWindow = new DeleteWindow(id_actor, "Actors", this);

    connect(deleteWindow, &DeleteWindow::finished, this, [this]() { UpdateModel("Actors"); });

    deleteWindow -> show();
}

void MainAdminWindow::on_AdmintableView_doubleClicked(const QModelIndex &index)
{
    auto db = DataBase::getDB();

    QAbstractItemModel* model = ui -> AdmintableView -> model();
    QString name = model -> data(index, Qt::DisplayRole).toString();
    const auto id_actor = db.setID(name);

    DeleteWindow* deleteWindow = new DeleteWindow(id_actor, "Actors", this);

    connect(deleteWindow, &DeleteWindow::finished, this, [this]() { UpdateModel("Admins"); });

    deleteWindow -> show();
}

void MainAdminWindow::UpdateModel(const QString& modelType)
{
    auto db = DataBase::getDB();
    QAbstractItemModel* model = nullptr;
    QAbstractItemModel* modelActor = nullptr;

    modelActor = db.modelActor(2);
    if (modelType == "Actors")
    {
        model = db.modelActor(2);
        ui->ActortableView->setModel(model);
    }
    else if (modelType == "Admins")
    {
        model = db.modelRoleView(0);
        ui->AdmintableView->setModel(model);
        ui->ActortableView->setModel(modelActor);
    }
    else if (modelType == "Operators")
    {
        model = db.modelRoleView(1);
        ui->OperatortableView->setModel(model);
        ui->ActortableView->setModel(modelActor);
    }
    else if (modelType == "Clients")
    {
        model = db.modelRoleView(2);
        ui->ClienttableView->setModel(model);
        ui->ActortableView->setModel(modelActor);
    }
    else if (modelType == "Countries")
    {
        model = db.modelCountry(ModelIndex("Countries"));
        ui->CountryListView->setModel(model);
    }
    else if (modelType == "Hotels")
    {
        model = db.modelHotel(ModelIndex("Hotels"));
        ui->HotelListView->setModel(model);
    }
    else if (modelType == "Tours")
    {
        model = db.modelAllTurs(ModelIndex("Tours"));
        ui->TourListView->setModel(model);
    }
}

void MainAdminWindow::on_OperatortableView_doubleClicked(const QModelIndex &index)
{
    auto db = DataBase::getDB();

    QAbstractItemModel* model = ui -> OperatortableView -> model();
    QString name = model -> data(index, Qt::DisplayRole).toString();
    const auto id_actor = db.setID(name);

    DeleteWindow* deleteWindow = new DeleteWindow(id_actor, "Actors", this);

    connect(deleteWindow, &DeleteWindow::finished, this, [this]() { UpdateModel("Operators"); });

    deleteWindow -> show();
}


void MainAdminWindow::on_ClienttableView_doubleClicked(const QModelIndex &index)
{
    auto db = DataBase::getDB();

    QAbstractItemModel* model = ui -> ClienttableView -> model();
    QString name = model -> data(index, Qt::DisplayRole).toString();
    const auto id_actor = db.setID(name);

    DeleteWindow* deleteWindow = new DeleteWindow(id_actor, "Actors", this);

    connect(deleteWindow, &DeleteWindow::finished, this, [this]() { UpdateModel("Clients"); });

    deleteWindow -> show();
}


void MainAdminWindow::on_HotelListView_doubleClicked(const QModelIndex &index)
{
    auto db = DataBase::getDB();

    QAbstractItemModel* model = ui -> HotelListView -> model();
    QString name = model -> data(index, Qt::DisplayRole).toString();
    const auto id_hotel = db.setHotel(name);

    HotelProfileWindow* hotelProfile = new HotelProfileWindow(id_hotel, this);

    connect(hotelProfile, &HotelProfileWindow::finished, this, [this]() { UpdateModel("Hotels"); });

    hotelProfile->exec();
}


void MainAdminWindow::on_CountryListView_doubleClicked(const QModelIndex &index)
{
    auto db = DataBase::getDB();

    QAbstractItemModel* model = ui -> CountryListView -> model();
    QString name = model -> data(index, Qt::DisplayRole).toString();
    const auto id_country = db.setCountry(name);

    DeleteWindow* deleteWindow = new DeleteWindow(id_country, "Countries", this);

     connect(deleteWindow, &DeleteWindow::finished, this, [this]() { UpdateModel("Countries"); });

    deleteWindow->exec();
}

int MainAdminWindow::ModelIndex(const QString& modelName) {
    int selectedIndex;
    if (modelName == "Countries") {
        selectedIndex = ui -> CountryModelcomboBox -> currentIndex();
    }
    if (modelName == "Hotels") {
        selectedIndex = ui -> HotelModelcomboBox -> currentIndex();
    }
    if (modelName == "Tours") {
        selectedIndex = ui -> TourModelcomboBox -> currentIndex();
    }
    return 2 - selectedIndex;
}

void MainAdminWindow::on_TourListView_doubleClicked(const QModelIndex &index)
{
    auto db = DataBase::getDB();

    QAbstractItemModel* model = ui -> TourListView -> model();
    QString name = model -> data(index, Qt::DisplayRole).toString();
    const auto id_country = db.setCountry(name);
    const auto id_tur = db.setTur(id_country);

    ProfileTurWindow* turProfile = new ProfileTurWindow(id_tur, this);
    connect(turProfile, &ProfileTurWindow::finished, this, [this]() { UpdateModel("Tours"); });

    turProfile->exec();
}


void MainAdminWindow::on_TourModelcomboBox_currentIndexChanged(int index)
{
    UpdateModel("Tours");
}

void MainAdminWindow::on_CountryModelcomboBox_currentIndexChanged(int index)
{
    UpdateModel("Countries");
}

void MainAdminWindow::on_HotelModelcomboBox_currentIndexChanged(int index)
{
    UpdateModel("Hotels");
}
