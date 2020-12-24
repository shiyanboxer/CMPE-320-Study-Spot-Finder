/*
 * That is the header file for address
 */

#pragma once

#include<iostream>
#include <string>


using namespace std;

class Address {

public:

    Address(); //Default Constructor
    Address(float longitude, float latitude, string addressName); //Constructor
    float getLongitude(); //Accessor to return longitude
    float getLatitude(); //Accessor to return latitude
    string getAddressName(); //Accessor to return address name

    void setLongitude(float longitude); //Mutator to set the longitude
    void setLatitude(float latitude); //Mutator to set the latitude
    void setAddressName(string addressName); //Mutator to set the address name

    void printAddress(float longitude, float latitude, string addressName); //Method to print address

    long double toRadians(const long double);// Utility function for converting degrees to radians
    float calculateDistance(float longitude, float latitude, float myLongitude, float myLatitude);// Method that calculates the distance between 2 points with coordinates (longitude, latitude)
    bool deleteAddress(string address);// Delete address method

    //bool equals(Address right) const;

private:
    float longitude;
    float latitude;
    string addressName;
};

bool operator==(Address left, Address right);
