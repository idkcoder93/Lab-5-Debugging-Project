#pragma once
#include <iostream>
using namespace std;
class Location {
private:        // changed data members to private 
	int latitude;  // changed data member to int
	int longitude;  // changed data member to int
public:
	Location(int latitude, int longitude); // changed data type to int (longitude)
	int getLatitude();
	int getLongitude();
	void setLatitude(int age);
	void setLongitude(int age);
	double distanceFrom(Location& location); 
	friend ostream& operator << (ostream& cout, Location& loc); // added cout operator signature 

};

