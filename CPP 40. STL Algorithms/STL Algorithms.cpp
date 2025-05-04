#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
template<class T>
void show(const vector<T>& vec) {
	for (auto i : vec) {
		cout << i << ' ';
	}
	cout << '\n';
}

int main() {
	// STL Algorithms

	vector<int> numbers{ 44, -482, 4, 39, -26, 483, 957, 0, -98 };
	auto start = numbers.begin();
	auto end = numbers.end();

	show(numbers);

#pragma region find
	int numb{};
	cout << "Enter any number for search in vector: ";
	cin >> numb;

	auto result = find(start, end, numb);

	if (result != end) {
		cout << *result << " in this vector" << endl;
	}
	else {
		cout << numb << " is not found!" << endl;
	}


#pragma endregion


}
