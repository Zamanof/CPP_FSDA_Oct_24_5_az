#include"Student.h"

int main() {
	// this -  hal hazirda olan obyekte pointer-dir
	
	// this parametri qeyri ashkar olaraq class-in ichinde olan
	// butun methodlara brinci parametr kimi gonderilir 

	Student student1("Ali", "Aliyev", 100);
	Student student2("Vali", "Valiyev", 150);
	/*cout << student1.getFirstName()<<endl;
	cout << student2.getFirstName()<<endl;*/
	student1.show();
	student2.show();
	

}