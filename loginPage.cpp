#include "loginPage.h"
#include "findlocationmatches.h"
#include <QMessageBox>
#include "user.h"
#include <QTimer>
list<User> usersList;

LoginPage::LoginPage(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::LoginPage)
{
    ui->setupUi(this);

    ui->loginButton->setStyleSheet("background-color: mediumblue; color : white; border-radius : 5px");
    ui->signupButton->setStyleSheet("background-color: mediumblue; color : white; border-radius : 5px");
    ui->usernameInput->setStyleSheet("border-color: black; border-radius : 5px");
    ui->passwordInput->setStyleSheet("border-color: black; border-radius : 5px");
    QTimer::singleShot(0, ui->usernameInput, SLOT(setFocus()));
    //ui->label->setStyleSheet("color : mediumblue");

    QFont font("SimSun", 11, 75);
    ui->label_2->setFont(font);
    ui->label_3->setFont(font);
    ui->loginButton->setFont(font);
    ui->signupButton->setFont(font);
}

LoginPage::~LoginPage()
{
    delete ui;
}

list<User> LoginPage::getLoginlist() {
    return usersList;
}

void LoginPage::addToLoginInfoList(User user) {
    usersList.push_back(user);
}

void LoginPage::on_loginButton_clicked()
{
    QString username = ui->usernameInput->text();
    QString password = ui->passwordInput->text();
    if (username.isEmpty() || password.isEmpty())
    {
        QMessageBox::information(this, "Login", "Empty username or password");
    }

    else {
        QString username = ui->usernameInput->text();
        QString password = ui->passwordInput->text();
        User currentUser;
        bool userExists = false;
        bool correctPassword = false;
        bool loggedIn = false;

        //list <User> users;
        //For testing
        Login L1 = Login("Amy", "123"); Login L2 = Login("Tom", "abc");
        User u1 = User(L1); User u2 = User(L2); //users.push_back(u1); users.push_back(u2);
        usersList.push_back(u1);
        usersList.push_back(u2);

        //check if username is registered
        for (const User& i : usersList) {
            if ((i.getLogin()).getUserName() == username.toStdString()) {
                userExists = true;
            }
        }

        //username exists
        if (userExists == true) {
            Login enteredCreds = Login(username.toStdString(), password.toStdString());
            for (const User& i : usersList) {
                if (i.getLogin() == enteredCreds) {
                    currentUser = i;	//Validates credentials and assigns instance to correct user
                    correctPassword = true;
                    loggedIn = true;
                }
            }

            if (!correctPassword) {	//incorrect password
                QMessageBox::information(this, "Login", "Incorrect Password!");
            }
        }

        else {
            QMessageBox::information(this, "Login", "User doesn't exist!");
        }

        if (loggedIn == true) {
        //functionality available to user once logged in
            hide();
            findLocationMatches *matchesPage = new findLocationMatches();
            matchesPage->show();
        }
    }
}

void LoginPage::on_signupButton_clicked()
{
    hide();
    signup *signupPage = new signup(this);
    signupPage->show();
}

void LoginPage::on_usernameInput_returnPressed()
{
    on_loginButton_clicked();
}

void LoginPage::on_passwordInput_returnPressed()
{
    on_loginButton_clicked();
}
