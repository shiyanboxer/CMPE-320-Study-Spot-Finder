/*
 * That is the implementation source file for user class
 */

#include <iostream>
#include <string>
#include <stdlib.h>

#include "login.h"
#include "address.h"
#include "user.h"
#include "location.h"

using namespace std;

// constructors
User::User() {}

User::User(Login loginCreds) : loginCreds(loginCreds), volume(-1), currentLocation(Address(-1,-1,"null")), inOrOut("either"), internet(false), power(false), equipment(false), maxTravelDistance(-1), currentStudySpot(Address())  {}

User::User(int volume, Address currentLocation, string inOrOut, bool internet, bool power, bool equipment, double maxTravelDistance, Login loginCreds) :
    volume(volume), currentLocation(currentLocation), inOrOut(inOrOut), internet(internet), power(power), equipment(equipment), maxTravelDistance(maxTravelDistance), loginCreds(loginCreds), currentStudySpot(Address()) {}


//User::User(int volume, Address currentLocation, string inOrOut, bool internet, bool power, bool equipment, double maxTravelDistance) :
//    volume(volume), currentLocation(currentLocation), inOrOut(inOrOut), internet(internet), power(power), equipment(equipment), maxTravelDistance(maxTravelDistance), currentStudySpot(Address()) {}


// accessors
int User::getVolume() const{
    return volume;
}

Address User::getCurrentLocation() const{
    return currentLocation;
}

bool User::getInternet() const{
    return internet;
}

bool User::getPower() const{
    return power;
}

bool User::getEquipment() const{
    return equipment;
}

string User::getInOrOut() const{
    return inOrOut;
}

double User::getMaxDistance() const{
    return maxTravelDistance;
}

Login User::getLogin() const
{
    return loginCreds;
}

Address User::getCurrentStudySpot() const
{
    return currentStudySpot;
}


// mutators
void User::setVolume(int volume) {
    this->volume = volume;
}
void User::setCurrentLocation(Address currentLocation) {
    this->currentLocation = currentLocation;
}

void User::setLogin(Login loginCreds) {
    this->loginCreds = loginCreds;
}

void User::setMaxDistance(double maxTravelDistance) {
    this->maxTravelDistance = maxTravelDistance;
}

void User::setInOrOut(string inOrOut) {
    this->inOrOut = inOrOut;
}

void User::setEquipment(bool equipment) {
    this->equipment = equipment;
}

void User::setPower(bool power) {
    this->power = power;
}

void User::setInternet(bool internet) {
    this->internet = internet;
}

void User::setCurrentStudySpot(Address currentStudySpot)
{
    this->currentStudySpot = currentStudySpot;
}

bool operator==(const User& left, const User& right) {
    return ((left.getVolume() == right.getVolume()) && (left.getPower() == right.getPower()) && (left.getInternet() == right.getInternet()) && (left.getEquipment() == right.getEquipment()) && (left.getLogin().equals(right.getLogin())) && (left.getInOrOut() == right.getInOrOut()) && (left.getMaxDistance() == right.getMaxDistance()) && (left.getCurrentLocation()  == right.getCurrentLocation()) && (left.getCurrentStudySpot() == right.getCurrentStudySpot()));
}
