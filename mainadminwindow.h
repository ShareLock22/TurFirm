#ifndef MAINADMINWINDOW_H
#define MAINADMINWINDOW_H

#include <QMainWindow>
#include "exitwindow.h"
#include "addoperatorwindow.h"
#include "addadminwindow.h"
#include <QDialog>
#include "database.h"


namespace Ui {
class MainAdminWindow;
}

class MainAdminWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainAdminWindow(QWidget *parent = nullptr);
    ~MainAdminWindow();

private slots:
    void on_AddpushButton_clicked();
    void on_ExitpushButton_clicked();
    void on_AddAdminpushButton_clicked();
    void on_ActortableView_doubleClicked(const QModelIndex &index);
    void UpdateModel(const QString& modelType);
    void on_AdmintableView_doubleClicked(const QModelIndex &index);

    void on_OperatortableView_doubleClicked(const QModelIndex &index);

    void on_ClienttableView_doubleClicked(const QModelIndex &index);

    void on_HotelListView_doubleClicked(const QModelIndex &index);

    void on_CountryListView_doubleClicked(const QModelIndex &index);

    int ModelIndex(const QString& modelName);

    void on_CountryModelcomboBox_currentIndexChanged(int index);

    void on_HotelModelcomboBox_currentIndexChanged(int index);

    void on_TourListView_doubleClicked(const QModelIndex &index);

    void on_TourModelcomboBox_currentIndexChanged(int index);

signals:
    void logout();
    //void UpdateModel();

private:
    Ui::MainAdminWindow *ui;
};

#endif // MAINADMINWINDOW_H
