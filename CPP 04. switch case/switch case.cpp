#include<iostream>

using namespace std;

int main() {
	// switch case



#pragma region if, else if, else weekDay
	/*int day{};
	cout << "Enter week day from 1 to 7: " << endl;
	cin >> day; */
	/*if (day == 1) cout << "Monday" << endl;
	else if (day == 2) cout << "Tuesday" << endl;
	else if (day == 3) cout << "Wednesday" << endl;
	else if (day == 4) cout << "Thursday" << endl;
	else if (day == 5) cout << "Friday" << endl;
	else if (day == 6) cout << "Saturday" << endl;
	else if (day == 7) cout << "Sunday" << endl;
	else  cout << "Incorrect data" << endl;*/
#pragma endregion

#pragma region switch weekDay example
		// yalniz tam ededlerle ishleyir
		// case-lerde olan deyerler unikal olmalidir
		// case-lerde olan deyerler const olmalidr
		/*int day{};
		cout << "enter week day from 1 to 7: " << endl;
		cin >> day;
		switch (day)
		{
		case 1:
			cout << "monday" << endl;
			break;
		case 2:
			cout << "tuesday" << endl;
			break;
		case 3:
			cout << "wednesday" << endl;
			break;
		case 4:
			cout << "thursday" << endl;
			break;
		case 5:
			cout << "friday" << endl;
			break;
		case 6:
			cout << "saturday" << endl;
			break;
		case 7:
			cout << "sunday" << endl;
			break;
		default:
			cout << "incorrect data" << endl;
			break;
		}*/
#pragma endregion

	char select{};

	cout << "Azerbaycan bayraqinda neche reng var?" << endl;
	cout << "a) 1" << endl;
	cout << "b) 2" << endl;
	cout << "c) 3" << endl;
	cout << "d) 4" << endl;
	cin >> select;

	switch (select)
	{
	case 'a': case 'A':	case 'b': case 'B': case 'c': case 'C':
		cout << "Sehv" << endl;
		break;
	case 'd':
	case 'D':
		cout << "Duz" << endl;
		break;
	default:
		cout << "Incorrect select" << endl;
		break;
	}
}