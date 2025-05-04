#include<iostream>
#include<map>
#include<vector>

using namespace std;

template<class K, class V>
void show(map<K, V> mp)
{
	/*for (auto i : mp) {
		cout << "Key = " << i.first
			<< " Value = " << i.second << endl;
	}*/

	for (auto i = mp.begin(); i != mp.end(); i++)
	{
		cout << "Key = " << i->first
			<< " Value = " << i->second << endl;
	}
}

int main() {
	map<int, int> mp;
	vector<int> vec{2, 3};
	
	/*cout << vec.max_size() << endl;
	cout << mp.max_size() << endl;*/

	/*int key{}, value{};
	cout << "Enter key: ";
	cin >> key;
	cout << "Enter value: ";
	cin >> value;

	pair<int, int> element(key, value);
	mp.insert(element);*/
	/*mp.insert(make_pair(18, 13));
	mp[56] = 48;
	mp[13] = 541948;
	
	 cout << mp[1] << endl;*/
	
	/*cout << mp[key] << endl;
	cout << mp[18] << endl;*/

	/*show(mp);*/

	/*map<string, vector<float>> new_map;
	new_map["first"] = { 2.5f,6.f, .2f };
	new_map["second"] = { 132.533f, 562.014f};

	for (size_t i = 0; i < new_map["first"].size(); i++)
	{
		cout << new_map["first"][i] << '\t';
	}
	cout << '\n';*/

	/*map<vector<string>, int> other_map;

	vector<string> myVec{ "hi", "salam", "goodbye" };
	other_map[myVec] = 98;

	cout << other_map[{ "hi", "salam", "goodbye" }] << endl;*/
}
