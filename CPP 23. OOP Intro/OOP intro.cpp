#include<iostream>

using namespace std;
struct Student {
	char name[50];
	char surname[50];
	int age;
};

class Human {
public:
	char name[50];
	void show() {
		cout << "Name :    " << name << endl;
		cout << "Surname : " << surname << endl;
		cout << "Age :     " << age << endl;
	}
private:
	char surname[50];
protected:
	int age;
};


int main() {
	// OOP - Object Oriented Paradigm (Programming) -> Obyekt yonumlu paradiqma
	// C with classes -> C++

	// OOP Principle:
	// 1. Inheritance	- Toreme, vereselik
	// 2. Encapsulation - Inkapsulyasiya
	// 3. Polymorphism	- Polimorfizm
	// 4. Abstraction	- Abstraksiya

	// C++ da struct ve class arasinda yegane
	// ferq default olaraq access modificator-un
	// public(struct-da) ve ya private(class-da)
	// omasidir

	Student student;
	student.age;
	Human human;
	human.name;
	


	// access modifiers
	
	// public		- publik, achiq-aydin (bu verilenler her kese elchatandir 
	//					(class/struct daxilinde ve xaricinde))

	// private		- privat, gizli (bu verilenler yalniz class/struct daxilinde
	//					 elchatandir)

	// protected	- qorunan (bu verilenler yalniz class/struct daxilinde ve
	//					 vereselerde(ovladlarda) elchatandir)
}