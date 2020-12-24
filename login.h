/*
 * That is the header file for login credentials
 */

#pragma once

#include<iostream>
#include <list>
#include <string>

using namespace std;

class Login {
public:
    Login(); //Constructor
    Login(const string& userName, const string& password); //Constructor
    string getUserName()const; //Accessor to return userName
    string getPassword()const; //Accessor to return password
    void setUserName(string userName); //Mutator to set the user name
    void setPassword(string password); //Mutator to set the password
    bool checkValidity(const string enteredPassword);
    bool equals(Login right) const;

private:
    string userName;
    string password;
};

//bool operator==(Login& right);
