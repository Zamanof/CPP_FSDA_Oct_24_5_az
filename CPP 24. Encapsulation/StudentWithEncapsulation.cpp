#include "StudentWithEncapsulation.h"
#include<iostream>
using namespace std;
void StudentWithEncapsulation::info() {
	cout << "Name:    " << firstName << endl;
	cout << "Surname: " << lastName << endl;
	cout << "Age:     " << age << endl;
	cout << '\n';
}

void StudentWithEncapsulation::initialize(
	const char* name,
	const char* surname,
	int Age) {
	setFirstName(name);
	setLastName(surname);
	setAge(Age);

}

// setter - mutator
void StudentWithEncapsulation::setFirstName(const char* name) {
	if (strlen(name) < 3) cout << "Ad 3 simvoldan az ola bilmez" << endl;
	else strcpy_s(firstName, 30, name);
}
void StudentWithEncapsulation::setLastName(const char* surname) {
	if (strlen(surname) < 3) cout << "Soyad 3 simvoldan az ola bilmez" << endl;
	else strcpy_s(lastName, 30, surname);
}
void StudentWithEncapsulation::setAge(int Age) {
	if (Age < 0 || Age > 150) cout << "Yash menfi ve ya 150den boyuk ola bilmez" << endl;
	else age = Age;
}

// getter - accessor
char* StudentWithEncapsulation::getFirstName() {
	return firstName;
}
char* StudentWithEncapsulation::getLastName() {
	return lastName;
}
int StudentWithEncapsulation::getAge() {
	return age;
}