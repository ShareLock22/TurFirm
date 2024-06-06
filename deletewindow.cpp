#include "deletewindow.h"
#include "ui_deletewindow.h"
#include "database.h"

DeleteWindow::DeleteWindow(int id_obj, const QString& table, QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::DeleteWindow)
    , m_id_obj(id_obj)
    , m_table(table)
{
    ui->setupUi(this);
    auto db = DataBase::getDB();
    auto name = db.setNameObject(table, id_obj);
    if (db.getIsActual(id_obj, table) == 1) {
        ui->DeletepushButton->setText("Удалить");
    }
    else {
        ui->DeletepushButton->setText("Восстановить");
    }
    ui->Namelabel->setText(name);
}

DeleteWindow::~DeleteWindow()
{
    delete ui;
}

void DeleteWindow::on_CancelpushButton_clicked()
{
    close();
}


void DeleteWindow::on_DeletepushButton_clicked()
{
    auto db = DataBase::getDB();
    db.delObj(m_id_obj, m_table, db.getIsActual(m_id_obj, m_table));
    emit finished(QDialog::Accepted);
    close();
}

