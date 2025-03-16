#include"Student.h"

int main() {
	// constructor - obyekt yaradilan zaman chaqrilan metoddur
	// yaradilan obyekte ilkin deyerler vermek uchun istifade olunur
	// obyekt yaradilarken default construxtor-a malikdir
	// eger biz istenilen bir constructor yardairiqsa default constructor silinir
	// constructor-lari overload etmek mumkundur

	Student student;

	Student student1("Nadir", "Zamanov", 45);

	Student student2("Ali");

	Student student3("Ali", "Salamzade");

}