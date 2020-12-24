/*
 * Header file for user
 */

#pragma once

#include <iostream>
#include <string>
#include "login.h"
#include "address.h"
#include "location.h"

using namespace std;

class User {

public:

	// constructors
	User(); //null instance
	User(Login loginCreds);
    User(int volume, Address currentLocation, string inOrOut, bool internet, bool power, bool equipment, double maxTravelDistance, Login loginCreds);
    //User(int volume, Address currentLocation, string inOrOut, bool internet, bool power, bool equipment, double maxTravelDistance);
	// accessors
	int getVolume() const;
	Address getCurrentLocation() const;
	bool getInternet() const;
	bool getPower() const;
	bool getEquipment() const;
	string getInOrOut() const;
	double getMaxDistance() const;
	Login getLogin() const;
	Address getCurrentStudySpot() const;

	// mutators
	void setVolume(int volume);
	void setCurrentLocation(Address currentLocation);
	void setLogin(Login LoginCreds);
	void setMaxDistance(double maxTravelDistance);
	void setInOrOut(string inOrOut);
	void setEquipment(bool equipment);
	void setPower(bool power);
	void setInternet(bool internet);
	void setCurrentStudySpot(Address currentStudySpot);

private:

	// attributes
	int volume;
	Address currentLocation;
	string inOrOut;
	bool internet;
	bool power;
	bool equipment;
	double maxTravelDistance;
	Login loginCreds;
	Address currentStudySpot;
};

bool operator==(const User& left, const User& right);
