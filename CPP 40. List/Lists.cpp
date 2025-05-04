#include<iostream>
#include<list>

using namespace std;

template<class T>
void showList(list<T> lst) {
	cout << "List: " << endl;
	for (T i: lst)
	{
		cout << i << ' ';
	}
	cout << '\n';

	cout << "list front: " << lst.front() << endl;
	cout << "list back: " << lst.back() << endl;
}

int main() {
	list<int> lst;

	lst.push_back(5);
	lst.push_back(213);
	lst.push_back(41);
	lst.push_back(63);
	lst.push_back(3665);
	lst.push_back(7);
	lst.push_back(96);
	lst.push_back(34);
	lst.push_back(34);
	lst.push_back(522);
	lst.push_back(522);
	lst.push_back(34);
	lst.push_back(168);
	lst.push_back(125);
	lst.push_back(125);
	lst.push_back(125);
	lst.push_back(54);
	lst.push_back(97);
	lst.push_back(87);

	showList(lst);
	/*cout << lst.size();
	lst.push_front(487);
	showList(lst);*/
	
	/*list<int>::iterator itera = lst.begin();
	cout << *itera << endl;
	++itera;
	++itera;
	lst.insert(itera, 987);
	showList(lst);*/

	lst.unique();
	showList(lst);
	lst.sort();
	showList(lst);
}
