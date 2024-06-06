#ifndef DELETEWINDOW_H
#define DELETEWINDOW_H

#include <QDialog>

namespace Ui {
class DeleteWindow;
}

class DeleteWindow : public QDialog
{
    Q_OBJECT

public:
    explicit DeleteWindow(int id_obj, const QString& table, QWidget *parent = nullptr);
    ~DeleteWindow();

private slots:
    void on_CancelpushButton_clicked();

    void on_DeletepushButton_clicked();

private:
    Ui::DeleteWindow *ui;
    int m_id_obj;
    QString m_table;
};

#endif // DELETEWINDOW_H
