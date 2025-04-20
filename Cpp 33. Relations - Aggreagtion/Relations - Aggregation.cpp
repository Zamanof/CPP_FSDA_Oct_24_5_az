#include<iostream>
#include<format>

using namespace std;

class Address {
private:
	string city;
	string street;
	int house;
	int apartament;
public:
	Address(string city, string street, int house, int apartament)
		:city{ city }, street{street}, house{house}, apartament{apartament}
	{ 
		cout << format("Adress {}; {}; {}; {}; was created", city, street, house, apartament)<<endl;
	}
	void show() {
		cout << format("City:       {};\nStreet:     {};\nHouse:      {};\nApartament: {};", city, street, house, apartament) << endl;
	}

	~Address()
	{
		cout << format("Adress {}; {}; {}; {}; was deleted", city, street, house, apartament) << endl;
	}
};

class Student {
private:
	string firstName;
	string lastName;
	int age;
	Address& address;
public:
	Student(string firstName, string lasstName, int age, Address& address)
		:firstName{firstName}, lastName{lastName}, age{age}, address{address}
	{
		cout << format("Student {} {} was created", firstName, lastName)<<endl;
	}
	~Student()
	{
		cout << format("Student {} {} was deleted", firstName, lastName) << endl;
	}
	void show(){
		cout << format("Hello my name is {} {}", firstName, lastName) << endl;
		cout << format("I am {} years old", age) << endl;
		cout << "My address:" << endl;
		address.show();
	}
};


class Teacher {
private:
	string firstName;
	string lastName;
	int age;
	double salary;
	Address& address;
public:
	Teacher(string firstName, string lastName, int age, double salary, Address& address)
		:firstName{ firstName }, lastName{ lastName }, 
		age{ age }, salary{ salary }, address {address}
	{
		cout << format("Teacher {} {} was created", firstName, lastName) << endl;
	}
	~Teacher()
	{
		cout << format("Teacher {} {} was deleted", firstName, lastName) << endl;
	}
	
	void show() {
		cout << format("Hello my name is {} {}", firstName, lastName) << endl;
		cout << format("I am {} years old", age) << endl;
		cout << "My address:" << endl;
		address.show();
	}
};


void foo(Address& address) {
	Student student("Aydan", "Zaman", 17, address);
}

int main() {

	/*
		Relations - elaqeler:
			- is: Inheritance(toreme)
			- has - malikdir(ozunde saxlayir): Aggregation(Aqreqasiya), Composition(Kompozisiya)
			- depends on - asilidir
			- uses - istifade edir
			- part-whole - hisse-tam: Nested classes

			Aggregation:
				1. obyekt-hisse obyekt-tamin terkibine daxildir.
				2. obyekt-hisse eyni zamanda bir neche obyekt-tama aid ola biler
				3. obyekt-hisse obyekt-tam olmadan movcud ola biler.
					Yeni ki obyekt-tam, obyekt-hissenin movcudluquna cavabdeh deyil.
				4. obyekt-hisse obyekt-tam haqqinda hech bir melumata malik deyil.

	*/

	Address address("Absheron", "Saray MTK", 70, 10);
	Teacher teacher1("Nadir", "Zamanov", 45, 4500000, address);
	/*teacher1.show();*/

	foo(address);

	Student student("Ayan", "Zaman", 12, address);
	/*student.show();*/



}