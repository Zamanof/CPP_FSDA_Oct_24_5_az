#include<iostream>

using namespace std;

struct Date {
	unsigned short year : 12;
	unsigned short month : 4;
	unsigned short day : 5;
	unsigned short hour : 5;
	unsigned short minute : 6;
	unsigned short second : 6;
};

struct Languages {
	bool Azerbaijani : 1;
	bool English : 1;
	bool Russian : 1;
	bool Italian : 1;
	bool Spanish : 1;
	bool Chinese : 1;
	bool Corean : 1;
	bool Latin : 1;
};

struct CurriculumVitae
{
	char firstName[25];
	char lastName[25];
	Date bitrhFay;
	Languages languages;
};

void showCV(CurriculumVitae cv);

int main() {
	// Bit fields
	CurriculumVitae myCV = { "Nadir", "Zamanov", {1980, 10, 7}, {1, 0, 1} };
	showCV(myCV);


	cout << "CurriculumVitae = " << sizeof(CurriculumVitae) << " byte" << endl;
	cout << "Date            = " << sizeof(Date) << " byte" << endl;
	cout << "Languages       = " << sizeof(Languages) << " byte" << endl;

}

void showCV(CurriculumVitae cv) {
	cout << "Name:      " << cv.firstName << endl;
	cout << "Surname:   " << cv.lastName << endl;
	cout << "BirtDay:   " << cv.bitrhFay.day << '.'
		<< cv.bitrhFay.month << '.'
		<< cv.bitrhFay.year << endl;

	cout << '\n';
	cout << "Azerbaijani: " << (cv.languages.Azerbaijani ? "V" : "X") << endl;
	cout << "English:     " << (cv.languages.English ? "V" : "X") << endl;
	cout << "Russian:     " << (cv.languages.Russian ? "V" : "X") << endl;
	cout << '\n';
}