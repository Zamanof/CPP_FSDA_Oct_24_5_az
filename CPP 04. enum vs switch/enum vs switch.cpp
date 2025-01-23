#include<iostream>

using namespace std;

int main() {
	// enum - const tam ededlerden ibaret choxluq
	enum weekDays
	{
		MOONDAY,
		TUESDAY,
		WEDNESDAY,
		THURSDAY,
		FRIDAY,
		SATURDAY,
		SUNDAY
	};
	
	/*cout << weekDays::MOONDAY << endl;
	cout << TUESDAY << endl;*/
	int day{};
	cout << "enter week day from 1 to 7: " << endl;
	cin >> day;
	switch (day)
	{
	case MOONDAY:
		break;
	case TUESDAY:
		break;
	case WEDNESDAY:
		break;
	case THURSDAY:
		break;
	case FRIDAY:
		break;
	case SATURDAY:
		break;
	case SUNDAY:
		break;
	default:
		break;
	}
	
}