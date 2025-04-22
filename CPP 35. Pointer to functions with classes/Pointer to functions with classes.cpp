#include<iostream>
#include<format>

using namespace std;

class Student {
public:
	string name;
	string surname;
	int age;
	Student(string name, string surname, int age)
		:name{ name }, surname{ surname }, age{ age }
	{}

	void studentInfo() {
		cout << format("{} {} - {}\n", name, surname, age) << endl;
	}

	friend bool operator>(const Student& left, const Student& right);
};
bool operator > (const Student& left, const Student& right) {
	return left.age > right.age;
}


template<class T>
void bubbleSorting(T* arr, int length, bool(*predicate)(const T&, const T&));

void showStudents(Student* students, int length) {
	for (size_t i = 0; i < length; i++)
	{
		students[i].studentInfo();
	}
}

bool asc(const int& a, const int& b) {
	return a > b;
}

bool desc(const int& a, const int& b) {
	return a < b;
}

bool ascName(const Student& left, const Student& right) {
	return left.name > right.name;
}

bool ascSurame(const Student& left, const Student& right) {
	return left.surname > right.surname;
}

int main() {
	int arr[5]{ 56,-7,11,-23,1564 };
	/*bubbleSorting(arr, 5, desc);
	for (size_t i = 0; i < 5; i++)
	{
		cout << arr[i] << ' ';
	}
	cout << endl;*/

	/*double arr2[5]{ 0.56,-7.31,11,-0.23,1564 };
	bubbleSorting(arr2, 5);
	for (size_t i = 0; i < 5; i++)
	{
		cout << arr2[i] << ' ';
	}
	cout << endl;*/

	Student students[13]{
		Student("Nadir", "Zamanov", 45),
		Student("Roman", "Dadasov", 22),
		Student("Ibadulla", "Huseynzade", 19),
		Student("Sufiye", "Huseynzade", 24),
		Student("Firidun", "Hesenli", 21),
		Student("Terane", "Kemalzade", 20),
		Student("Islam", "Mehtiyev", 17),
		Student("Tariyel", "Mirzeyev", 23),
		Student("Elsen", "Memmedov", 18),
		Student("Tuqay", "Nesibli", 25),
		Student("Gulay", "Yusifli", 16),
		Student("Huseyn", "Efsari", 19),
		Student("Rza", "Eliyev", 21)
	};

	bubbleSorting(students, 13, ascSurame);
	showStudents(students, 13);
}

template<class T>
void bubbleSorting(T* arr, int length, bool(*predicate)(const T&, const T&)) {
	bool swapped{};
	int pos{};
	do {
		swapped = false;
		for (int i = 0; i < length - pos - 1; i++) {
			if (predicate(arr[i], arr[i+1])) {
				swap(arr[i], arr[i + 1]);
				swapped = true;
			}
		}
		pos++;
	} while (swapped);
}