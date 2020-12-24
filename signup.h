#ifndef SIGNUP_H
#define SIGNUP_H

#include <QDialog>
#include "loginPage.h"
#include "ui_signup.h"
#include "ui_loginPage.h"



namespace Ui {
class signup;
}

class signup : public QDialog
{
    Q_OBJECT

public:
    explicit signup(QWidget *parent = nullptr);
    ~signup();
    //LoginPage *loginPage; //New dialog for signup

private slots:
    void on_createAccountButton_clicked();

    void on_newUsername_returnPressed();

    void on_newPassword_returnPressed();

private:
    Ui::signup *ui;
};

#endif // SIGNUP_H
