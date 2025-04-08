#include<iostream>

using namespace std;

class Date {
private:
	int day;
	int month{4};
	int year{2025};
public:
	// void setDay(this, int day)
	void setDay(int day) {
		this->day = day;
	}

	// int getDay(const this)
	int getDay() const {
		// day++; error
		return day;
	}

	// void show(const this)
	void show() const {
		// year = 2635; error
		cout << day << '/' << month << '/' << year << endl;
	}
};


int main() {
	// const methods
	Date date;
	date.setDay(8);
	cout << date.getDay() << endl;
	date.show();
	
}