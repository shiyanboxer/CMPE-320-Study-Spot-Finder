#include "loginPage.h"
#include "signup.h"
#include "ui_signup.h"
#include "user.h"
#include "login.h"
#include "address.h"
#include "location.h"
#include <list>
#include <algorithm>
#include <QTimer>

#include <QMessageBox>

signup::signup(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::signup)
{
    ui->setupUi(this);
    ui->createAccountButton->setStyleSheet("background-color: mediumblue; color : white; border-radius : 5px");
    ui->newUsername->setStyleSheet("border-color: black; border-radius : 5px; border : solid");
    ui->newPassword->setStyleSheet("border-color: black; border-radius : 5px; border : solid");
    QTimer::singleShot(0, ui->newUsername, SLOT(setFocus()));

    QFont font("SimSun", 11, 75);
    ui->label->setFont(font);
    ui->label_2->setFont(font);
    ui->createAccountButton->setFont(font);
}

signup::~signup()
{
    delete ui;
}


void signup::on_createAccountButton_clicked()
{
    QString username = ui->newUsername->text();
    QString password = ui->newPassword->text();

    if(username.isEmpty() || password.isEmpty()){
        QMessageBox :: information(this, "Signup", "Empty username or password");
    }

    else{
        Login newSignup = Login();
        bool passwordValidity = newSignup.checkValidity(password.toStdString());
        if(passwordValidity == false){
            QMessageBox :: information(this, "Signup", "Invalid password!\n1. Minimum length is 7\n2. Must contain at least one digit, one lowercase letter, and one uppercase letter");
            ui->newPassword->clear();
        }

        else{
            newSignup.setPassword(password.toStdString());
            bool userExists = false;

            //Check if the username exists
            for (const User &i : usersList) {
                if ((i.getLogin()).getUserName() == username.toStdString()) {
                    userExists = true;
                }
            }

            if(userExists){
                QMessageBox :: information(this, "Signup", "Username already taken, change another one");
                ui->newUsername->clear();
            }

            else{
                newSignup.setUserName(username.toStdString());
                User u1 = User(newSignup);
                usersList.push_back(u1);

                //Move to the next page
                //.....
                hide();
                LoginPage *loginPage = new LoginPage(this);
                loginPage->show();
            }
        }
    }
}

void signup::on_newUsername_returnPressed()
{
    on_createAccountButton_clicked();
}

void signup::on_newPassword_returnPressed()
{
    on_createAccountButton_clicked();
}
