#include<iostream>
#include<map>

using namespace std;

template<class Container>
void show(Container mp)
{
	/*for (auto i : mp) {
		cout << "Key = " << i.first
			<< " Value = " << i.second << endl;
	}*/

	for (auto i = mp.begin(); i != mp.end(); i++)
	{
		cout << "City : " << i->first
			<< " -> " << i->second << endl;
	}
}

int main() {
	map<string, int> cityIndexs;

	cityIndexs.insert(make_pair("Baki", 10));
	cityIndexs["Sumqayit"] = 50;
	cityIndexs["Bileasuvar"] = 12;
	cityIndexs["Goranboy"] = 22;
	cityIndexs["Gence"] = 20;
	cityIndexs["Aqsu"] = 6;
	cityIndexs["Masalli"] = 44;
	cityIndexs["Lenkaran"] = 42;
	cityIndexs["Naxcivan"] = 85;

	/*show(cityIndexs);*/

	multimap<string, int> multiCityIndexs;
	multiCityIndexs.insert(make_pair("Baki", 10));
	multiCityIndexs.insert(make_pair("Sumqayit", 50));
	multiCityIndexs.insert(make_pair("Goranboy", 22));
	multiCityIndexs.insert(make_pair("Gence", 20));
	multiCityIndexs.insert(make_pair("Bilesuvar", 12));
	multiCityIndexs.insert(make_pair("Baki", 90));
	multiCityIndexs.insert(make_pair("Baki", 99));
	multiCityIndexs.insert(make_pair("Naxcivan", 70));
	multiCityIndexs.insert(make_pair("Naxcivan", 85));
	multiCityIndexs.insert(make_pair("Baki", 77));
	
	/*show(multiCityIndexs);*/

	auto bakiLower = (multiCityIndexs.lower_bound("Baki"));
	auto bakiUpper = (multiCityIndexs.upper_bound("Baki"));


	/*for (auto i = bakiLower; i != bakiUpper; i++)
	{
		cout << "City : " << i->first
			<< " -> " << i->second << endl;
	}*/

	cout << multiCityIndexs.count("Baki") << endl;
}
