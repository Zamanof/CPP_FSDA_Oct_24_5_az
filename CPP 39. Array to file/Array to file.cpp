#include<iostream>
#include<iomanip>
#include<fstream>

using namespace std;

enum
{
	CHOICE = 3,
	INPUT_FILENAME,
	INPUT_DIMENSION,
	INPUT_ELEMENTS,
	FILE_ERROR
};

int main() {
	char answer;
	const int MENU_COUNT = 8;
	string Menu[MENU_COUNT]{
		"1. Read data from file\n",
		"2. Write data to file\n",
		"3. Exit\n",
		"Your choice\n",
		"Enter file name\n",
		"Enter Array size\n",
		"Enter Array element\n",
		"File can not open\n",

	};

	do
	{
		for (size_t i = 0; i < 4; i++)
		{
			cout << Menu[i];
		}
		cin >> answer;
		system("cls");
	} while (answer < '1' || answer >'3');

	if (answer == '3') exit(0);

	string FileName;

	int M{}, N{};

	int number;
	cout << "\n" << Menu[INPUT_FILENAME];
	cin >> FileName;
	ifstream inFile(FileName, ios::in | ios::_Nocreate);
	switch (answer)
	{
	case '1':
		if (!inFile) {
			cout << Menu[FILE_ERROR];
			exit(0);
		}
		inFile >> M;
		inFile >> N;

		for (size_t i = 0; i < M; i++)
		{
			for (size_t i = 0; i < N; i++)
			{
				inFile >> number;
				cout << setw(6) << number;
			}
			cout << '\n';
		}
		inFile.close();
		break;
	case '2':
		ofstream outFile(FileName, ios::out);
		if (!outFile) {
			cout << Menu[FILE_ERROR];
			exit(0);
		}
		cout << Menu[INPUT_DIMENSION];
		cout << "Enter size M: ";
		cin >> M;
		cout << "Enter size N: ";
		cin >> N;
		outFile << M << ' ' << N << '\n';
		cout << Menu[INPUT_ELEMENTS];

		for (size_t i = 0; i < M; i++)
		{
			for (size_t i = 0; i < N; i++)
			{
				cin >> number;
				outFile << number<<' ';
			}
			outFile << '\n';
		}
		outFile.close();
		break;
	}

	
}