#include<iostream>

using namespace std;

class Person
{

public:
	char* name;
	char* surname;
	short bornYear;
	short age;
	Person()
		: name{}, surname{}, bornYear{}, age{}
		// initialize list
	{
		// asaqidaki qaydada constructor-da initialize etsek
		// ilk evvel field yaranir ve sonra ise bu filde her hansi bir
		// value menimsedilir
		/*name = nullptr;
		surname = nullptr;
		bornYear = 0;
		age = 0;*/
	}

	Person(const char* name, const char* surname, short bornYear):
		name{ new char[strlen(name) + 1] },
		surname{ new char[strlen(surname) + 1] },
		bornYear{ bornYear }
	{
		
		strcpy_s(this->name, strlen(name) + 1, name);		
		strcpy_s(this->surname, strlen(surname) + 1, surname);
		age = 2025 - bornYear;
	}


	void show() {
		cout << "Name:    " << (name ? name : "Empty") << endl;
		cout << "Surname: " << (surname ? surname : "Empty") << endl;
		cout << "Age:     " << age << endl;
	}
};

class BankAccount {
public:
	Person person;
	float balance;
	const short percentage;

	BankAccount(const char* name, const char* surname, short bornYear, float balance, short percentage)
		: person(name, surname, bornYear),
		balance{ balance },
		percentage{ percentage }
	{}
	void show() {
		person.show();
		cout << "Balance: " << balance << endl;
		cout << "Percent: " << percentage <<"%" << endl;
	}

	BankAccount(Person person, float balance, short percentage)
		: person(person.name, person.surname, person.bornYear),
		 balance{ balance }, percentage{percentage}
	{}
	
};

int main() {
	// Initialize:
	// int a = 5;	// copy initialize
	// int b{ 5 };	// unify intialize
	// int c(5);	// direct initialize

	// initialize list:
	// 1. obyekt yaranan anda ishleyir (copy initialize-in qarshisini alir)
	// 2. obyekt yaranan anda ishlediyi uchun const field-lere ilkin deyer vermek olur
	// 3. this achar sozunun hedden artiq istifadesinin qarshisini alir

	Person person("Nadir", "Zamanov", 1980);
	
	/*person.show();*/
	BankAccount personAccount(person, 2550, 5);
	personAccount.show();
	
	

	
}