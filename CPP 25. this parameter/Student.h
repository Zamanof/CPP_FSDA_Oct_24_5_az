#pragma once
#include<iostream>

using namespace std;
class Student
{
private:
	char firstName[50];
	char lastName[50];
	int age;
public:
	Student()
	{
		strcpy_s(firstName, 50, "");
		strcpy_s(lastName, 50, "");
		age = 0;
	}
	Student(const char* firstName, const char* lastName, int age)
	{
		setFirstName(firstName);
		setLastName(lastName);
		setAge(age);
	}
	void setFirstName(const char* firstName);
	char* getFirstName();

	void setLastName(const char* lirstName);
	char* getLastName();

	void setAge(int age);
	int getAge();
	
	void show();
	

};

