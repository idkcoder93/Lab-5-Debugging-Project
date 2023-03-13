#include"Location.h"
#include<iostream>
#include <cmath>
#define M_PI        3.14

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

/*double Location::distanceFrom(Location& location) {

	return sqrt(pow(this->latitude - location.latitude, 4)) + pow(this->longitude - location.longitude, 2); 

}*/

//Euclidean Distance (formula found in link)
double Location::distanceFrom(Location& location) {
	return sqrt(pow(this->latitude - location.latitude, 2) + pow(this->longitude - location.longitude, 2));  // formula was corrected sqrt((x1-x2)^2 + (y1-y2)^2)
}

/*   different version of calculating distance of coordinates 
Haversine Distance
double Location::distanceFrom(Location& location) {
	const double R = 6371.0; // Earth radius in km
	double lat1_rad = latitude * M_PI / 180.0;
	double long1_rad = longitude * M_PI / 180.0;
	double lat2_rad = location.latitude * M_PI / 180.0;
	double long2_rad = location.longitude * M_PI / 180.0;
	double sin_lat = sin((lat2_rad - lat1_rad) / 2.0);
	double sin_long = sin((long2_rad - long1_rad) / 2.0);
	double a = sin_lat * sin_lat + cos(lat1_rad) * cos(lat2_rad) * sin_long * sin_long;
	double c = 2.0 * asin(sqrt(a));
	return R * c;
}
*/

ostream& operator << (ostream& cout, Location& loc) // added assignment operator 
{
	cout << loc.longitude << loc.latitude << endl;
	return cout;
}

