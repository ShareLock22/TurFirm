#ifndef MAINTURWINDOW_H
#define MAINTURWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainTurWindow;
}

class MainTurWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainTurWindow(QWidget *parent = nullptr);
    ~MainTurWindow();

private slots:
    void on_TurspushButton_clicked();
    void on_ExitpushButton_clicked();
    void on_HotelspushButton_clicked();

    void on_AddCountrypushButton_clicked();

    void on_listView_doubleClicked(const QModelIndex &index);

    void on_HotelListView_doubleClicked(const QModelIndex &index);
    void UpdateModel(const QString& modelType);
    void on_TurslistView_doubleClicked(const QModelIndex &index);


    int ModelIndex(const QString& modelName);

    void on_HotelModelcomboBox_currentIndexChanged(int index);

    void on_TourModelcomboBox_currentIndexChanged(int index);

signals:
    void logout();

private:
    Ui::MainTurWindow *ui;
};

#endif // MAINTURWINDOW_H
