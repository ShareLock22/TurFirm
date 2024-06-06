#ifndef PROFILEWINDOW_H
#define PROFILEWINDOW_H

#include <QMainWindow>

namespace Ui {
class ProfileWindow;
}

class ProfileWindow : public QMainWindow
{
    Q_OBJECT

public:
    ProfileWindow(int id_client, QWidget *parent = nullptr);
    ~ProfileWindow();

signals:
    void returnback();

private slots:
    void on_pushButton_clicked();
    void on_BackpushButton_clicked();

    void on_UpdatepushButton_clicked();

private:
    Ui::ProfileWindow *ui;
    int m_id_client;

    // QWidget interface
protected:
    void closeEvent(QCloseEvent *event);
};

#endif // PROFILEWINDOW_H
