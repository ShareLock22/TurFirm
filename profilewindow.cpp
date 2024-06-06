#include "profilewindow.h"
#include "ui_profilewindow.h"
#include "database.h"
#include "mainuserwindow.h"
#include "changepasswordwindow.h"

ProfileWindow::ProfileWindow(int id_client, QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::ProfileWindow)
    ,m_id_client(id_client)
{
    ui->setupUi(this);
    auto db = DataBase::getDB();
    Actor actor;
    auto discount = actor.setDiscount(id_client);
    auto actorsInfos = db.getActorInfo(id_client);

    if (!actorsInfos.empty()) {
        QString name = std::get<0>(actorsInfos[0]);
        QString number = std::get<1>(actorsInfos[0]);
        QString login = std::get<2>(actorsInfos[0]);
        QString mail = std::get<3>(actorsInfos[0]);
        QString password = std::get<4>(actorsInfos[0]);

        ui->MailLineEdit->setText(mail);
        ui->Loginlabel->setText(login);
        ui->UpdatepushButton->setText(password);
        ui->PhonelineEdit->setText(number);
        ui->Clientlabel->setText(name);
        ui->Discountlabel->setText(QString("Персональная скидка: %1 %").arg(QString::number(discount, 'f', 0)));
    }

    auto modelCurrentTurs = db.modelConfirmedTurs(id_client);
    ui -> CurrentTurtableView -> setModel(modelCurrentTurs);

}

ProfileWindow::~ProfileWindow()
{
    delete ui;
}

void ProfileWindow::on_pushButton_clicked()
{
    emit returnback();
}

void ProfileWindow::closeEvent(QCloseEvent *event)
{
    qApp->quit();
}

void ProfileWindow::on_BackpushButton_clicked()
{
    MainUserWindow* userWindow = new MainUserWindow(this);
    userWindow->show();
    //this->hide();
}


void ProfileWindow::on_UpdatepushButton_clicked()
{
    ChangePasswordWindow* passWindow = new ChangePasswordWindow(m_id_client, this);
    passWindow->show();
}

