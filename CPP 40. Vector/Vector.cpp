#include<iostream>
#include<vector>

using namespace std;

int randint(int start = 0, int end = 100) {
	return rand() % (end - start + 1) + start;
}

template<class T>
void show(const vector<T>& vec) {
	// at() metodu vasitesi ile 
	/*for (size_t i = 0; i < vec.size(); i++)
	{
		cout << vec.at(i) << ' ';
	}
	*/

	// [] - index operatoru vasitesi ile
	/*for (size_t i = 0; i < vec.size(); i++)
	{
		cout << vec[i] << ' ';
	}*/

	// iterator vasitesi ile
	/*for (auto i = vec.begin(); i < vec.end(); i++)
	{
		cout << *i << ' ';
	}*/


	for (auto i : vec) {
		cout << i << ' ';
	}

	cout << '\n';
}

template<class T>
void showSizeAndCapacity(const vector<T>& vec) {
	cout << "size:\t\t" << vec.size() << endl;
	cout << "capacity:\t" << vec.capacity() << endl;
	cout << '\n';
}

int main() {
	srand(time(NULL));
	vector<int> vec;
	/*showSizeAndCapacity(vec);*/
	for (size_t i = 0; i < 20; i++)
	{
		vec.push_back(randint());
		/*showSizeAndCapacity(vec);*/
	}

	show(vec);
	show(vec);
	/*vec.clear();*/
	/*vec.shrink_to_fit();*/
	/*showSizeAndCapacity(vec);*/

	//cout << *(vec.begin()) << endl;
	/*cout << *(vec.end()-1) << endl;*/

	/*cout << *(vec.rbegin()) << endl;
	cout << *(vec.rend() - 1) << endl;*/

	/*cout << vec.end() - vec.begin() << endl;*/

	vec.insert(vec.begin() + 2, 114);
	show(vec);



}