#include"StudentWithoutEncapsulation.h"
#include"StudentWithEncapsulation.h"

struct Point {
	int x;
	int y;
	void show() {
		cout << "(x=" << x << ", y =" << y << ")" << endl;
	}
};

int main() {
	StudentWithoutEncapsulation student;
	student.initialize("Nadir", "Zamanov", 48);
	/*student.age = -10;
	cout << student.age << endl;*/
	student.info();

	StudentWithEncapsulation student1;
	student1.initialize("Nadir", "Zamanov", 45);
	student1.setAge(36);
	student1.info();
	cout << student1.getFirstName() << endl;

	// inakapsulyasiya datalarin gizledilmesi (private)
	// ve onlara xususi interfeysler vasitasi ile access vererek
	// icazesiz deyishdirile bilmenin qarshisinin alinmasidir
}