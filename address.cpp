/*
 * File: Address.cpp
 * Date: Oct 19, 2020
 * Author: Shiyan Boxer
 * Description: Address cpp file
 * Attributes:
    * longitude: float
    * latitude: float
    * address: string
* Methods
    * calculateDistance(): float
    * printAddress(): string
    * deleteAddress(): bool
 */

 /*
 ToDo
 - update header file - lat and long
 - calc distance
 - delete addy
 */

 // Include libraries
#include <time.h>
#include <vector>
#include <stdio.h>
#include <stdlib.h>
#include <set>
#include <iostream>
#include <fstream>
#include <cmath>
#include <string>
#include <bits/stdc++.h> // C++ program to calculate Distance between Two Points on Earth


// Include other address.h file
#include "address.h"

#include "location.h"

using namespace std;

// Constructors
Address::Address() : longitude(), latitude(), addressName() {}
Address::Address(float myLongitude, float myLatitude, string myAddressName) : longitude(myLongitude), latitude(myLatitude), addressName(myAddressName) {}

// Accessor
float Address::getLongitude() {
    return longitude;
}

float Address::getLatitude() {
    return latitude;
}

string Address::getAddressName() {
    return addressName;
}

// Mutators
void Address::setLongitude(float myLongitude) {
    longitude = myLongitude;
}

void Address::setLatitude(float myLatitude) {
    latitude = myLatitude;
}

void Address::setAddressName(string myAddressName) {
    addressName = myAddressName;
}

// Utility function for converting degrees to radians
long double Address::toRadians(const long double degree) {
    // cmath library in C++ defines the constant M_PI = pi
    double pi = 3.1415926;
    long double one_deg = (pi) / 180;
    return (one_deg * degree);
}

// Method that calculates the distance between 2 points with coordinates (longitude, latitude)
// https://www.geeksforgeeks.org/program-distance-two-points-earth/
float Address::calculateDistance(float longitude, float latitude, float myLongitude, float myLatitude){
    // Convert the latitudes and longitudes from degree to radians.
    latitude = toRadians(latitude);
    longitude = toRadians(longitude);
    myLatitude = toRadians(myLatitude);
    myLongitude = toRadians(myLongitude);

    // Haversine Formula
    long double dlong = myLongitude - longitude;
    long double dlat = myLatitude - latitude;

    long double ans = pow(sin(dlat / 2), 2) + cos(latitude) * cos(myLatitude) * pow(sin(dlong / 2), 2);
    ans = 2 * asin(sqrt(ans));

    // Radius of Earth in  Kilometers, R = 6371
    long double R = 6371;

    // Calculate the result
    ans = ans * R;

    return ans;
}

//TODO make a function that recieves two addresses and calculates the distance between them, needed for the preferences method in location.cpp

// Method to print address
void Address::printAddress(float longitude, float latitude, string addressName) {
    cout << "Address" << addressName << "at longitude" << longitude << "and latitude" << latitude;
}

// Delete address method
bool Address::deleteAddress(string address) {
    // also need to pass in the attributes of this address and set to null, discard memory and pass in data structure
    // find the address in the data structure
    // remove from the data structure
    return false;
}

bool operator==(Address left, Address right){
    return ((left.getAddressName() == right.getAddressName()) && (left.getLongitude() == right.getLongitude()) && (left.getLatitude() == right.getLatitude()));
}

/*bool Address::equals(Address right) const{
    return ((this->getAddressName() == right.getAddressName()) && (this->getLongitude() == right.getLongitude()) && (this->getLatitude() == right.getLatitude()));
}*/
