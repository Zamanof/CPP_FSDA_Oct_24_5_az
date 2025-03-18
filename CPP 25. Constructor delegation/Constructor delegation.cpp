#include<iostream>

using namespace std;

#pragma region Person without constructor delegation
//class Person
//{
//
//public:
//	char* name;
//	char* surname;
//
//	short age;
//	Person()
//		: name{}, surname{}, age{}
//
//	{}
//
//	Person(const char* name, const char* surname, short age = 0) :
//		name{ new char[strlen(name) + 1] },
//		surname{ new char[strlen(surname) + 1] },
//		age{ age }
//	{
//
//		strcpy_s(this->name, strlen(name) + 1, name);
//		strcpy_s(this->surname, strlen(surname) + 1, surname);
//	}
//
//	Person(const char* name, const char* surname) :
//		name{ new char[strlen(name) + 1] },
//		surname{ new char[strlen(surname) + 1] },
//		age{ 18 }
//	{
//		strcpy_s(this->name, strlen(name) + 1, name);
//		strcpy_s(this->surname, strlen(surname) + 1, surname);
//	}
//
//	Person(const char* name, short age) :
//		name{ new char[strlen(name) + 1] },
//		surname{}, age{ age }
//
//	{
//		strcpy_s(this->name, strlen(name) + 1, name);
//
//	}
//
//
//	void show() {
//		cout << "Name:    " << (name ? name : "Empty") << endl;
//		cout << "Surname: " << (surname ? surname : "Empty") << endl;
//		cout << "Age:     " << age << endl;
//	}
//};
#pragma endregion
#pragma region Person withconstructor delegation
class Person
{

public:
	char* name;
	char* surname;

	short age;
	Person()
		:Person(nullptr, nullptr, 0) // constructor delegation
	{
		
		cout << "Person()" << endl;
	}

	Person(const char* name, const char* surname, short age = 0) :
		name{ name ? new char[strlen(name) + 1]: nullptr},
		surname{ surname? new char[strlen(surname) + 1]:nullptr},
		age{ age }
	{
		if (name) strcpy_s(this->name, strlen(name) + 1, name);
		if (surname) strcpy_s(this->surname, strlen(surname) + 1, surname);
		cout << "Person(const char* name, const char* surname, short age = 0)" << endl;
	}

	Person(const char* name, const char* surname)
		:Person(name, surname, 0) // constructor delegation
	{
		cout << "Person(const char* name, const char* surname) " << endl;
	}

	Person(const char* name, short age)
		:Person(name, nullptr, age) // constructor delegation
		
	{
		cout << "Person(const char* name, short age)" << endl;
	}


	void show() {
		cout << "Name:    " << (name ? name : "Empty") << endl;
		cout << "Surname: " << (surname ? surname : "Empty") << endl;
		cout << "Age:     " << age << endl;
	}
};
#pragma endregion





int main() {
	Person person;
	/*Person person1("Nadir", 45);
	Person person3("Nadir", "Surname", 45);
	person.show();
	person1.show();
	person3.show();*/
}