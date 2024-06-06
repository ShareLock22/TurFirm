#ifndef REGWINDOW_H
#define REGWINDOW_H

#include <QDialog>
#include <QRegularExpressionValidator>

namespace Ui {
class RegWindow;
}

class RegWindow : public QDialog
{
    Q_OBJECT

public:
    explicit RegWindow(QWidget *parent = nullptr);
    ~RegWindow();

private slots:
    void on_regClicked_clicked();

    void on_pushButton_clicked();

private:
    Ui::RegWindow *ui;
    QRegularExpressionValidator* m_nameValidator;
    QRegularExpressionValidator* m_phoneValidator;
    QRegularExpressionValidator* m_emailValidator;
    QRegularExpressionValidator* m_loginValidator;
    QRegularExpressionValidator* m_passwordValidator;
};

#endif // REGWINDOW_H
