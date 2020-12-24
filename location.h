/*
 * Header file for location
 */

#pragma once

#include <iostream>
#include <string>
class User;
#include "user.h"

using namespace std;

class Location {

public:

    // constructors
    Location();
    Location(int volume, Address location, string inOrOut, bool internet, bool power, bool equipment, int maxCapacity, int currentCapacity);
    //Location(Location loc);

    // accessors
    int getVolume();
    Address getLocation();
    bool getInternet();
    bool getPower();
    bool getEquipment();
    string getInOrOut();
    int getMaxCapacity();
    int getCurrentCapacity();

    // mutators
    void setInternet(bool internet);
    void setPower(bool power);
    void setEquipment(bool equipment);
    void setInOrOut(string inOrOut);
    void setMaxCapacity(int maxCapacity);
    void setCurrentCapacity(int currentCapacity);

    // overridden less than operator for sorting
    bool operator<(const Location& right);

    bool checkPreferences(User user);

private:

    // attributes
    int volume;
    Address location;
    string inOrOut;
    bool internet;
    bool power;
    bool equipment;
    int maxCapacity;
    int currentCapacity;
};
