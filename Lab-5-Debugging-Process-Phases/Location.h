#pragma once
#include <iostream>
using namespace std;
class Location {
private:        // changed data members to private 
	int latitude;  // changed data member to int
	int longitude;  // changed data member to int
public:
	Location(int latitude, int longitude); // changed data type to int (longitude)
	Location(Location& loc); // created copy constructor
	~Location(); // created destructor
	int getLatitude();
	int getLongitude();
	void setLatitude(int latitude); // incorrect variable name
	void setLongitude(int longitude); // incorrect variable name
	double distanceFrom(Location& location); 
	friend ostream& operator << (ostream& cout, Location& loc); // added cout operator signature 

};

