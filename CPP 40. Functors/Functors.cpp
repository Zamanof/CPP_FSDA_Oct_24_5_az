#include<iostream>
#include<list>
#include<algorithm>

using namespace std;

// Functor ozunu funksiya kimi aparan class-dir
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

int randInt(int start, int end) {
	return rand() % (end - start + 1) + start;
}

int main() {
	srand(time(NULL));
	list<int> lst(10);

	/*for (size_t i = 0; i < 10; i++)
	{
		lst.push_back(randInt(25, 65));
	}

	for (int item : lst) {
		cout << item << ' ';
	}
	cout << '\n';*/

	/*generate_n(lst.begin(), lst.size(), rand);*/
	/*generate_n(lst.begin(), lst.size(), randInt(50, 99));*/
	generate_n(lst.begin(), lst.size(), randRange(30, 55));

	copy(lst.begin(), lst.end(), ostream_iterator<int>(cout, " "));
	cout << '\n';

}