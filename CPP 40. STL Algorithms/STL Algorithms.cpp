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

template<class T>
void show(const vector<T>& vec);

bool isPrime(int number);
bool isNegative(int number);
bool ageCompare(const Cat& left, const Cat& right);
void makeNegative(int& number);
void pow2(int& number);
void cat_show(const Cat& cat);

int main() {
	// STL Algorithms

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

	vector<int> numbers{ 44, -482, 4, 39, -26, 483, 957, 0, -98, 809 };
	auto start = numbers.begin();
	auto end = numbers.end();

	show(numbers);

#pragma region find
	/*int numb{};
	cout << "Enter any number for search in vector: ";
	cin >> numb;

	auto result = find(start, end, numb);

	if (result != end) {
		cout << *result << " in this vector" << endl;
	}
	else {
		cout << numb << " is not found!" << endl;
	}*/
#pragma endregion

#pragma region find_if
	//for (size_t i = 1; i < 1000; i++)
	//{
	//	if (isPrime(i)) cout << i << ' ';
	//}
	//cout << '\n';

	/*auto result = find_if(start, end, isPrime);

	if (result != end) cout << "One or more prime numbers in this vector" << endl;
	else cout << "Prime numbers are not found in this vector" << endl;*/

#pragma endregion

#pragma region copy
	/*vector<int> new_numbers;
	copy(start + 3, end - 2, back_inserter(new_numbers));
	show(new_numbers);*/

#pragma endregion

#pragma region copy_if
	/*vector<int> prime_numbers;
	vector<int> negative_numbers;
	copy_if(start, end, back_inserter(prime_numbers), isPrime);
	copy_if(start, end, back_inserter(negative_numbers), isNegative);
	show(prime_numbers);
	show(negative_numbers);*/
#pragma endregion

#pragma region max_element, min_element
	/*cout << *(max_element(start, end)) << endl;
	cout << *(min_element(start, end)) << endl;*/
#pragma endregion

#pragma region Algorithms with own class
	/*for (auto cat : cats)
	{
		cat.show();
	}*/
	
	/*auto max_cat = max_element(cats.begin(), cats.end());
	auto min_cat = min_element(cats.begin(), cats.end());

	max_cat->show();
	min_cat->show();*/

	/*auto max_age = max_element(cats.begin(), cats.end(), ageCompare);
	auto min_age = min_element(cats.begin(), cats.end(), ageCompare);
	max_age->show();
	min_age->show();*/

	/*sort(cats.begin(), cats.end());
	for (auto cat : cats)
	{
		cat.show();
	}*/

#pragma endregion

#pragma region for_each
	/*for_each(start, end, makeNegative);
	show(numbers);
	for_each(start, end, pow2);
	show(numbers);*/

	/*for_each(cats.begin(), cats.end(), cat_show);*/
#pragma endregion





}

template<class T>
void show(const vector<T>& vec) {
	for (auto i : vec) {
		cout << i << ' ';
	}
	cout << '\n';
}
bool isPrime(int number) {
	if (number == 2) return true;
	if (number <= 1) return false;
	for (size_t i = 2; i <= number / 2; i++)
	{
		if (number % i == 0) return false;
	}
	return true;
}

bool isNegative(int number) {
	return number < 0;
}

bool ageCompare(const Cat& left, const Cat& right) {
	return left.age < right.age;
}

void makeNegative(int& number) {
	if (number > 0) number = -number;
}

void pow2(int& number) {
	 number *= number;
}

void cat_show(const Cat& cat) {
	cat.show();
}