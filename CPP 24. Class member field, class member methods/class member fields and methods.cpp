#include"Student.h"
// inner functions

inline int add(int a, int b) { return a + b; }
inline int subtract(int a, int b) { return a - b; }

int main() {
	Student student{
		"Nadir",
		"Zamanov",
		45,
		{2.5f, 3.f, 0.f, 11.0, 3.f} 
	};
    
	student.info();

	Student student1{
		"Salam",
		"Salamzade",
		25,
		{12.f, 12.f, 10.f, 11.0f, 7.0f}
	};

	student1.info();
}