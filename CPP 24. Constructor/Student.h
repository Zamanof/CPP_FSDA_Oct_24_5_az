#pragma once
#include<iostream>
using namespace std;
class Student
{
private:
	char firstName[30];
	char lastName[30];
	int age;
	
public:

	// constructor - obyekt yaradilan zaman chaqrilan metoddur

	// parameterless constructor (default constructor)
	Student() {
		strcpy_s(firstName, 30, "Empty");
		strcpy_s(lastName, 30, "Empty");
		age = 0;
		cout << "Constructor -> Student()" << endl;
	}

	// constructor with parameters (parametrized constructor)
	Student(const char* name) {
		setFirstName(name);
		setLastName("Empty");
		age = 0;
		cout << "Constructor -> Student(const char* name)" << endl;
	}

	// constructor with parameters (parametrized constructor)
	Student(const char* name, const char* surname) {
		setFirstName(name);
		setLastName(surname);
		age = 0;
		cout << "Constructor -> Student(const char* name, const char* surname)" << endl;
	}

	// constructor with parameters (parametrized constructor)
	Student(const char* name, const char* surname, int Age) {
		setFirstName(name);
		setLastName(surname);
		age = Age;
		cout << "Constructor -> Student(const char* name, const char* surname, int Age)" << endl;
	}
	

	// setter - mutator
	void setFirstName(const char*);
	void setLastName(const char*);
	void setAge(int);


	// getter - accessor
	char* getFirstName();
	char* getLastName();
	int getAge();

	void info();
	
};

