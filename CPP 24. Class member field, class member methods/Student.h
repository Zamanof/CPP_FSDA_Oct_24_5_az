#pragma once
#include<iostream>
using namespace std;

// .h faylinin ichinde field-ler ve method-larin
// prototipleri yazilir
class Student
{
public:
	//  fields - member fields(C++)
	char firstName[30];
	char lastName[30];
	int age;
	float marks[5];

	// methods - member functions(C++)
	void info();

private:
	float average();
};

