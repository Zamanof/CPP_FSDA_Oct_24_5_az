#include "Student.h"

// cpp faylin ichinde ise method-larin realizasiyasi yazilir
void Student::info() {
	cout << "Name:    " << firstName << endl;
	cout << "Surname: " << lastName << endl;
	cout << "Age:     " << age << endl;
	cout << "Marks: " << endl;
	for (size_t i = 0; i < 5; i++)
	{
		cout <<"    " << marks[i] << " / ";
	}
	cout << '\n';
	cout << "Average: " << average() << endl;
	cout << '\n';
}

float Student::average() {
	float summ{};
	for (size_t i = 0; i < 5; i++)
	{
		summ += marks[i];
	}
	return summ / 5;
}
