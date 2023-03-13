#pragma once
#include <iostream>
using namespace std;
class Developer {
private:           // changed to private
	int* age;
public:
	Developer(int age);
	Developer(const Developer& rhs);
	int getAge();
	void setAge(int age); 
	~Developer();
};
