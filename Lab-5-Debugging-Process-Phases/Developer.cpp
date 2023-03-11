#include"Developer.h"
#include<iostream>

Developer::Developer(int age) {
	cout << "Created Developer object" << endl;
	this->age = new int;
	*this->age = age;
}

Developer::Developer(Developer& rhs) {

	cout << "Copy Developer object" << endl;
	age = rhs.age;

}

int Developer::getAge() {

	return *age;

}

void Developer::setAge(int age) {

	*this->age = age;

}

Developer::~Developer() {
	
	//delete age;
}


