#include "mainuserwindow.h"
#include "ui_mainuserwindow.h"
#include "exitwindow.h"
#include "database.h"
#include "confirmturwindow.h"
#include "actor.h"
#include "profilewindow.h"

MainUserWindow::MainUserWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainUserWindow)
{
    ui->setupUi(this);
    auto db = DataBase::getDB();
    auto model = db.modelUnconfirmedTurs();
    ui -> ClienttableView -> setModel(model);

    ui -> ClienttableView -> setSelectionBehavior(QTableView::SelectionBehavior::SelectRows);
}

MainUserWindow::~MainUserWindow()
{
    delete ui;
}

void MainUserWindow::on_ExitpushButton_clicked()
{
    ExitWindow ex(this);
    ex.exec();
    if (ex.result() == QDialog::Accepted) {
        emit logout();
    }
}

void MainUserWindow::on_ClienttableView_doubleClicked(const QModelIndex &index)
{
    auto db = DataBase::getDB();
    //const auto clientName = actor.loadLogin();
    QAbstractItemModel* model = ui->ClienttableView->model();
    QString name = model->data(index, Qt::DisplayRole).toString();
    const auto id_country = db.setCountry(name);
    const auto id_tur = db.setTur(id_country);
    qDebug() << id_country << "Country";
    ConfirmTurWindow* confirmWindow = new ConfirmTurWindow(id_tur, this);
    confirmWindow->exec();

}



void MainUserWindow::on_ProfilepushButton_clicked()
{
    Actor actor;
    auto db = DataBase::getDB();
    auto login = actor.loadLogin();
    auto id_client = db.setID(login);
    emit openClientProfile(login);
    ProfileWindow* profile = new ProfileWindow(id_client, this);
    this->close();
    profile->show();
}

