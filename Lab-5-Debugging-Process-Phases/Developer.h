#pragma once

// no need to use namespace nor libraries in header files

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
