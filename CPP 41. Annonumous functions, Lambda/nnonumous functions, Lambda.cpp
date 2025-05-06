#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

class Cat {
public:
	string name;
	int age;
	int life;
	Cat(string name, int age, int life = 9)
		:name{ name }, age{ age }, life{ life }
	{}

	void show() const {
		cout << "Name:\t" << name << endl;
		cout << "Age:\t" << age << endl;
		cout << "Life:\t" << life << endl;
		cout << "\n\n";
	}

	bool operator==(const Cat& other) {
		return (name == other.name && age == other.age && life == other.life);
	}

	bool operator!=(const Cat& other) {
		/*return !(*this == other);*/
		return !(operator==(other));
	}
	bool operator>(const Cat& other) {
		return name > other.name;
	}
	bool operator>=(const Cat& other) {
		return name > other.name;
	}
	bool operator<(const Cat& other) {
		return name < other.name;
	}
	bool operator<=(const Cat& other) {
		return name <= other.name;
	}
};

class randRange {
	int start;
	int end;
public:
	randRange(int start, int end)
		:start(start), end(end)
	{}
	int operator()() {
		return rand() % (end - start + 1) + start;
	}
};

//[](int a) {return a % 2 != 0; }

class IsEven {
	int a;
public:
	IsEven(int a) : a(a) {}
	bool operator()() { return a % 2 == 0; }
};

template<class T>
void show(const vector<T>& vec);

//bool isEven(int number) {
//	return number % 2 == 0;
//}

int main() {
	srand(time(NULL));
	vector<Cat> cats{
		Cat("Mestan", 5, 8),
		Cat("Qara", 13, 7),
		Cat("Agca", 9, 6),
		Cat("Sirin", 2, 9),
		Cat("Badi", 18, 5),
		Cat("Zuzu", 11, 4),
		Cat("Toplan", 6, 7),
		Cat("Pisik", 15, 3),
		Cat("Balaca", 3, 9),
		Cat("Zeytun", 7, 2),
		Cat("Mirtik", 19, 6),
		Cat("Yumru", 8, 5),
		Cat("Karamel", 1, 9),
		Cat("Baxis", 10, 4),
		Cat("Cirdtan", 4, 8),
		Cat("Qurd", 17, 7),
		Cat("Kepenek", 12, 3),
		Cat("Toppus", 14, 6),
		Cat("Rengli", 16, 2),
		Cat("Sarma", 20, 1)
	};

	//vector<int> numbers(20);
	///*generate_n(numbers.begin(), numbers.size(), randRange(-50, 50));*/
	///*generate_n(numbers.begin(), numbers.size(), []() {return rand() % 101 - 50; });*/
	//int start = -50, end = 50;
	//generate_n(numbers.begin(), numbers.size(), [start, end]() {return rand() % (end - start + 1) + start; });
	//show(numbers);

	//vector<int> evenNumbers;
	/*copy_if(numbers.begin(), numbers.end(), back_inserter(evenNumbers), isEven);
	show(evenNumbers);*/

	// Lambda expression ->  anonymous functions -> Functor
	// [](){}

	/*bool (*func)(int) = [](int a) {return a % 2 == 0; };
	cout << boolalpha << func(5) << endl;
	cout << boolalpha << func(8) << endl;*/

	/*copy_if(numbers.begin(), numbers.end(), back_inserter(evenNumbers), [](int a) {return a % 2 != 0; });
	show(evenNumbers);*/

	for_each(cats.begin(), cats.end(), [](const Cat& cat) {cat.show(); });
	// iterators - cats.begin(), cats.end()
	// containers - vector<Cat> cats
	// functor - [](const Cat& cat) {cat.show(); }
	// algorithm - for_each
}

template<class T>
void show(const vector<T>& vec) {
	for (auto i : vec) {
		cout << i << ' ';
	}
	cout << '\n';
}