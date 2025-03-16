#include "StudentWithoutEncapsulation.h"

void StudentWithoutEncapsulation::info() {
	cout << "Name:    " << firstName << endl;
	cout << "Surname: " << lastName << endl;
	cout << "Age:     " << age << endl;
	cout << '\n';
}

void StudentWithoutEncapsulation::initialize(
		const char* name, 
		const char* surname, 
		int Age) {
	if (strlen(name) < 3) cout << "Ad 3 simvoldan az ola bilmez" << endl;
	else strcpy_s(firstName, 30, name);

	if (strlen(surname) < 3) cout << "Soyad 3 simvoldan az ola bilmez" << endl;
	else strcpy_s(lastName, 30, surname);

	if (Age < 0 || Age > 150) cout << "Yash menfi ve ya 150den boyuk ola bilmez" << endl;
	else age = Age;
	
}
