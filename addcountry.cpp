#include "addcountry.h"
#include "ui_addcountry.h"
#include "database.h"
#include "deletewindow.h"

AddCountry::AddCountry(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::AddCountry)
{
    ui->setupUi(this);
    auto db = DataBase::getDB();
    auto model = db.modelCountry(1);
    ui -> listView -> setModel(model);

}

AddCountry::~AddCountry()
{
    delete ui;
}

void AddCountry::on_CancelpushButton_clicked()
{
    close();
}


void AddCountry::on_AddpushButton_clicked()
{
    auto db = DataBase::getDB();

    auto const name = ui -> NamelineEdit -> text();
    if (db.uniqueCountry(name)) {
        db.addCountry(name);
        close();
    }
}

void AddCountry::on_listView_doubleClicked(const QModelIndex &index)
{
    auto db = DataBase::getDB();

    QAbstractItemModel* model = ui -> listView -> model();
    QString name = model -> data(index, Qt::DisplayRole).toString();
    const auto id_country = db.setCountry(name);

    DeleteWindow* deleteWindow = new DeleteWindow(id_country, "Countries", this);

    deleteWindow->exec();
}

