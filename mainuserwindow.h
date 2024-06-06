#ifndef MAINUSERWINDOW_H
#define MAINUSERWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainUserWindow;
}

class MainUserWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainUserWindow(QWidget *parent = nullptr);
    ~MainUserWindow();

private slots:
    void on_ExitpushButton_clicked();

    void on_ClienttableView_doubleClicked(const QModelIndex &index);

    void on_ProfilepushButton_clicked();

signals:
    void logout();
    void openClientProfile(QString& name);
private:
    Ui::MainUserWindow *ui;
};

#endif // MAINUSERWINDOW_H
