#include "Student.h"
void Student::setFirstName(const char* firstName) {
	if (strlen(firstName) > 2) 
		strcpy_s(this->firstName, 50, firstName);
	else 
		cout << "Name length must be 2 symbols or more\n\n";
}
char* Student::getFirstName() {	
	return firstName;
}

void Student::setLastName(const char* lastName) {
	if (strlen(lastName) > 2) 
		strcpy_s(this->lastName, 50, lastName);
	else 
		cout << "Name length must be 2 symbols or more\n\n";
}
char* Student::getLastName() {
	return lastName;
}

void Student::setAge(int age) {
	if (age >= 0) 
		this->age = age;
	else  
		cout << "Incorrect value for age\n\n";
}
int Student::getAge() {
	return age;
}

void Student::show() {
	cout << "FirstName: " << firstName << endl;
	cout << "LastName: " << lastName << endl;
	cout << "Age: " << age << endl;
}
