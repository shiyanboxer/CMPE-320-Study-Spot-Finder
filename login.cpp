/*
 * That is the implementation source file for login class
 */

#include <iostream>
#include <list>
#include <string>
#include <stdlib.h>
#include <bits/stdc++.h>



using namespace std;

#include "login.h"

//Constructor
Login :: Login() : userName(), password(){}

Login :: Login(const string& userName, const string& password) : userName(userName), password(password){}

//Accessors
string Login::getUserName()const {
    return userName;
}
string Login::getPassword()const {
    return password;
}

//Mutator
void Login :: setUserName(string newUserName){
    userName = newUserName;
}

void Login :: setPassword(string newPassword){
    password = newPassword;
}

bool Login::checkValidity(string enteredPassword)
{
    bool length = false, digit = false, upperCase = false, lowerCase = false, valid = false;

    if (enteredPassword.length() >= 7) {
        length = true;
    }

    char password[enteredPassword.length()];
    strcpy(password, enteredPassword.c_str());
    for (int i = 0; i < enteredPassword.length(); i++) {
        char c = password[i];
        if (!digit && isdigit(c)) {
            digit = true;
            continue;
        }

        if (!upperCase && isupper(c)) {
            upperCase = true;
            continue;
        }

        if (!lowerCase && islower(c)) {
            lowerCase = true;
            continue;
        }
    }

    cout << "Password Length : " << (length ? "Long Enough" : "Too Short") << endl;
    cout << "Password contains digit? : " << (digit ? "Yes" : "No") << endl;
    cout << "Password contains upper case? : " << (upperCase ? "Yes" : "No") << endl;
    cout << "Password contains lower case? : " << (lowerCase ? "Yes" : "No") << endl;

    if(length == true && digit == true && upperCase == true && lowerCase == true) {
        valid = true;
        cout << "Password is valid? : " << (valid ? "Yes" : "No") << endl;
        return true;
    } else {
        cout << "Password is valid ? : " << (valid ? "Yes" : "No") << endl;
        return false;
    }
}
bool Login::equals(Login right) const{
    return ((this->password == right.getPassword()) && (this->userName == right.getUserName()));
}

