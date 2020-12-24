//#include <iostream>
//using namespace std;

//#include "location.h"
//#include "user.h"
//#include "login.h"
//#include "address.h"
//#include "initialize.h"
//#include <list>
//#include <algorithm>

//list<Location> createValidList(list<Location> allLocations, User u);

//int main() {
//    //For signup system
//    string enteredPassword;
//    string enteredUserName;
//    Login newUser = Login();
//    bool validity;

//    cout << "Enter userName" << endl;
//    cin >> enteredUserName;
//    newUser.setUserName(enteredUserName);

//    do {
//        cout << "Enter password. You need at least one digit, one upper case letter, one lower case letter." << endl;
//        cin >> enteredPassword;
//        validity = newUser.checkValidity(enteredPassword);
//    } while (!validity);

//    newUser.setPassword(enteredPassword);

//    list <User> users;	//not going to worry about user lookup efficiency since only need sample of users for proof of concept.
//    User u1(Login("admin", "Admin100")); User u2(Login("cisc320", "McLeod123")); User u3(Login("anything", "Anything1")); //Creating Users
//    users.push_back(u1); users.push_back(u2); users.push_back(u3);	//Adding users to database
//    User currentUser;
//    User nullUser;	//null user will have no attributes set, a non-null user will have at least one attribute set => not equal to make sure logged in

//    //user input
//    string userName;
//    string password;
//    bool userExists = false;

//    //not going to code user input yet because unsure of how UI will effect it.
//    //theoretically it would go here

//    //check if username is registered
//    for (User const& i : users) {
//        if (((Login)(i.getLogin())).getUserName() == userName) {
//            userExists = true;	//Validates credentials and assigns instance to correct user
//        }
//    }

//    //username exists
//    if (userExists == true) {
//        Login enteredCreds = Login(userName, password);
//        for (User const& i : users) {
//            if ((i.getLogin()).equals(enteredCreds)) {
//            //if (i.getLogin() == enteredCreds) {
//                currentUser = i;	//Validates credentials and assigns instance to correct user
//            }
//        }
//        if (currentUser == nullUser) {	//incorrect password
//            cout << "\nIncorrect Password!" << endl;
//        }
//    }

//    //initialize the list
//    Initialize initialize;
//    list <Location> allLocations; //list of all locations
//    list <Location> validLocations; //list of locations that meet the user specified criteria
//    allLocations = initialize.createList("src\\kingstonStudySpots.txt"); //return a list of all locations (reading data from input file)
//    validLocations = createValidList(allLocations, u1); //return a list of all locations that meet the preference criteria

//}

//list<Location> createValidList(list<Location> allLocations, User u) { //function to return a list of valid locations for a given user u
//    list<Location> validLocations;
//    for (std::list<Location>::iterator it = allLocations.begin(); it != allLocations.end(); ++it) { //iterate through all locations
//        //Location loc(it);
//        if ((*it).checkPreferences(u) == true)
//            validLocations.push_back(*it);
//    }
//    return validLocations;
//}
