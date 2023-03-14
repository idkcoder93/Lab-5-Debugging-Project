#include"Developer.h"
#include<iostream>

Developer::Developer(int age) {
	std::cout << "Created Developer object" << std::endl;
	this->age = new int;
	*this->age = age;
}

Developer::Developer(const Developer& rhs) {

	std::cout << "Copy Developer object" << std::endl;
	this->age = new int(*rhs.age); // allocating memory in the copy constructor

}

int Developer::getAge() {

	return *age;

}

void Developer::setAge(int age) {

	*this->age = age;

}

Developer::~Developer() {

	delete age;
}