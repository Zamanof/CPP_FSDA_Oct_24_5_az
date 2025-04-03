#include<iostream>

using namespace std;

class Human {
private:
	static int count;
public:
	char firstName[50];
	char lastName[50];
	int age;
	static char planet[50];
	// Human(this, const char firstName[50], const char lastName[50], int age)
	Human(const char firstName[50], const char lastName[50], int age)
		:age{ age }
	{
		strcpy_s(this->firstName, firstName);
		strcpy_s(this->lastName, lastName);
		count++;
	}

	// void Show(this)
	void Show() {
		cout << "Firstname: " << firstName << endl;
		cout << "Lastname:  " << lastName << endl;
		cout << "Age:       " << age << endl;

	}

	// static int getCount()
	static int getCount() {
		
		return count;
	}

	// ~Human(this)
	~Human()
	{
		count--;
	}

};
// static field class-dan kenarda initialize olunur
int Human::count = 0;
char Human::planet[50] = "Earth";

void Foo() {
	Human human("Ali", "Valiyev", 35);
	cout << human.firstName << " age = " << human.age << endl;
	/*cout << "Object count in function " << Human::count << endl;*/
	cout << "Object created in function. Created humans count = " 
		<< human.getCount() << endl;
}

int main() {
	// static field, static metod
	// static field bu field-in ilk chaqirilmasi zamani
	// ve ya ilk obyektin yaranmasi zamani, 
	// obyekt yaramamishdan evvel yaranir

	cout << "Created humans count = "
		<< Human::getCount() << endl;
	
	Human human("Nadir", "Zamanov", 45);
	//human.Show();	
	/*cout << Human::count << endl;*/
	
	cout << human.firstName << " age = " << human.age << endl;
	cout << "Object created in main. Created humans count = "
		<< human.getCount() << endl;

	{
		Human human2("Salam", "Salamzade", 18);
		cout << human2.firstName << " age = " << human2.age << endl;
		cout << "Object created in scope. Created humans count = "
			<< human2.getCount() << endl;
		Foo();
	}
	cout << "Created humans count = "
		<< human.getCount() << endl;
	Human human2("Sahib", "Allahverdiyev", 28);
	/*cout << Human::count << endl;*/
	cout <<human2.firstName<< " age = " << human2.age << endl;
	cout << "Object created in main. Created humans count = "
		<< human2.getCount() << endl;



}