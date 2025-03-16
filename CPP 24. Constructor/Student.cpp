#include "Student.h"

void Student::info() {
	cout << "Name:    " << firstName << endl;
	cout << "Surname: " << lastName << endl;
	cout << "Age:     " << age << endl;
	cout << '\n';
}


// setter - mutator
void Student::setFirstName(const char* name) {
	if (strlen(name) < 3) cout << "Ad 3 simvoldan az ola bilmez" << endl;
	else strcpy_s(firstName, 30, name);
}
void Student::setLastName(const char* surname) {
	if (strlen(surname) < 3) cout << "Soyad 3 simvoldan az ola bilmez" << endl;
	else strcpy_s(lastName, 30, surname);
}
void Student::setAge(int Age) {
	if (Age < 0 || Age > 150) cout << "Yash menfi ve ya 150den boyuk ola bilmez" << endl;
	else age = Age;
}

// getter - accessor
char* Student::getFirstName() {
	return firstName;
}
char* Student::getLastName() {
	return lastName;
}
int Student::getAge() {
	return age;
}
