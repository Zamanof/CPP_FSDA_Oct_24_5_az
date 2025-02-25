#include<iostream>
using namespace std;

struct Date {
	unsigned short day;
	unsigned short month;
	unsigned short year;
};

struct User {
	// fields
	// member field
	char name[50];
	char surname[50];
	Date birthDay;
	char login[50];
	char password[50];
};

unsigned short calculateAge(unsigned short, unsigned short);

void showInfo(User);

void showUsersArray(User*, int);


int main() {
	// Structs
	/*char name[50]{};
	char surname[50]{};
	unsigned short age{};*/
#pragma region structs
	//// instance
	//	User user1{};
	//	strcpy_s(user1.name, 50, "Nadir");
	//	strcpy_s(user1.surname, 50, "Zamanov");
	//	user1.birthDay.year = 1980;
	//	user1.birthDay.month = 10;
	//	user1.birthDay.day = 7;
	//	strcpy_s(user1.login, 50, "mr.13");
	//	strcpy_s(user1.password, 50, "P@ss123456");
	//
	//	/*cout << user1.name << ' '
	//		 << user1.surname << " - "
	//		 << 2025 - user1.birthDay.year << endl;*/
	//
	//		 /*showInfo(user1);*/
	//
	//	User user2{};
	//	strcpy_s(user2.name, 50, "Salam");
	//	strcpy_s(user2.surname, 50, "Salamzade");
	//	user2.birthDay = { 15, 8, 2000 };
	//	strcpy_s(user2.login, 50, "Saalaam");
	//	strcpy_s(user2.password, 50, "qwerty123456");
	//
	//	/*cout << user2.name << ' '
	//		 << user2.surname << " - "
	//		 << 2025 - user2.birthDay.year << endl;*/
	//		 /*showInfo(user2);*/
	//
	//	Date date = { 23, 2, 1990 };
	//	User user3 = { "Ali", "Aliyev", date, "Ali123", "Ali123456" };
	//	User users[]{ user1, user2, user3 };
	//	/*cout << user3.birthDay.year << endl;*/
	//	/*cout << users[0].name << endl;
	//	cout << users[1].name << endl;*/
	//	showUsersArray(users, 3);
#pragma endregion

#pragma region struct pointers
	User user = { "Nadir", "Zamanov", {7, 10, 1980} , "mr.13", "P@ss123456"};
	User* userPtr = &user;
	/*cout << sizeof(userPtr) << endl;
	cout << userPtr << endl;*/
	cout <<"user.name = "<< user.name << endl;
	cout <<"userPtr->name = "<< userPtr->name << endl;
	cout <<"(*userPtr).name = "<< (*userPtr).name << endl;
	User& userRef = user;
	cout <<"userRef.name = "<< userRef.name << endl;
	/*User* dynUser = new User();
	strcpy_s(dynUser->name, 50, "Salam");
	cout << dynUser->name << endl;*/


#pragma endregion




}

unsigned short calculateAge(unsigned short bornYear, unsigned short currenYear) {
	return currenYear - bornYear;
}

void showInfo(User user) {
	cout << "Name:\t\t" << user.name << '\n'
		<< "Surname:\t" << user.surname << '\n'
		<< "Age:\t\t" << calculateAge(user.birthDay.year, 2025)
		<< "\n\n";
}

void showUsersArray(User* users, int length) {
	for (int i = 0; i < length; i++)
	{
		showInfo(users[i]);
	}
}