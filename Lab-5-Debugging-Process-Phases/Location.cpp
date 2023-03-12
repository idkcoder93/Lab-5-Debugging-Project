#include"Location.h"
#include<iostream>

Location::Location(int latitude, int longitude) { // changed data type in header and cpp file
	cout << "Created Location object" << endl;
	this->latitude = latitude; // changed variable to equal the correct lvalue
	this->longitude = longitude;

}

Location::~Location() = default; // created destructor memory isnt allocated to heap set to default

Location::Location(Location& temp) {  // copy constructor created
	this->latitude = temp.latitude;
	this->longitude = temp.longitude;
}

int Location::getLatitude() {

	return latitude; // wrong data member was used latitude not longitude
}

int Location::getLongitude() {

	return longitude;
}

void Location::setLatitude(int latitude) {

	this->latitude = latitude; // linked correct data members
}

void Location::setLongitude(int longitude) {

	this->longitude = longitude; // line was duplicated, removed line
}

// **********************************************************************************************
// Though the distance between two locations should be calculated using the Haversine formula, 
// in our requirements we **accept** the simple distance calculation 
// based on the formula found in  https://www.cuemath.com/geometry/distance-between-two-points/
// **********************************************************************************************
double Location::distanceFrom(Location& location) { 

	return sqrt(pow(this->latitude - location.latitude, 4)) + pow(this->longitude - location.longitude, 2); // formula was incorrect distance of coordinates needed to be added

}

ostream& operator << (ostream& cout, Location& loc) // added assignment operator 
{
	cout << loc.longitude << loc.latitude << endl;
	return cout;
}

