#include<iostream>

using namespace std;

int main() {

#pragma region if else
	//// if else
	//	int number{ -5 };
	//
	//	if (number > 0) {
	//		cout << "Salam" << endl;
	//		cout << "Salam1" << endl;
	//		cout << "Salam2" << endl;		
	//	} 
	//	else {
	//		cout << "Saqol" << endl;
	//		cout << "Saqol1" << endl;
	//		cout << "Saqol2" << endl;
	//	}
		//cout << "End of Code" << endl;
#pragma endregion

#pragma region multiple if
	/*int numb{ 15 };

	if (numb > 0)
	{
		cout << "Hi" << endl;
	}
	else
	{
		cout << "Bye" << endl;
	}
	if (numb == 15)
	{
		cout << "Hello" << endl;
	}
	else{
		cout << "Mello" << endl;
	}

	if (numb != 0)
	{
		cout << "Salam" << endl;
	}
	else {
		cout << "Saqol" << endl;
	}

	if (numb < 0)
	{
		cout << "Ola" << endl;
	}
	else {
		cout << "Bola" << endl;
	}*/

#pragma endregion

#pragma region else if
	int numb{ 15 };

	if (numb == 0)
	{
		cout << "Hi" << endl;
	}
	else if (numb == 15)
	{
		cout << "Hello" << endl;
	}
	else if (numb != 0)
	{
		cout << "Salam" << endl;
	}
	else if (numb < 0)
	{
		cout << "Ola" << endl;
	}
	else {
		cout << "Boombastic" << endl;
	}



#pragma endregion
}