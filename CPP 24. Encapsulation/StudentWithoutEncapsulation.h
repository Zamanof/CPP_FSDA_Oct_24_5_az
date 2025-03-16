#pragma once
#include<iostream>
using namespace std;
class StudentWithoutEncapsulation
{
public:
	char firstName[30] = "Empty";
	char lastName[30] = "Empty";
	int age = 0;

	void info();
	void initialize(const char*, const char*, int);
};

