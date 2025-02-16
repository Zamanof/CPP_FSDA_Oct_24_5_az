#include<iostream>

using namespace std;
int my_strlen(const char* str) {
	int count{};
	while (str[count++] != '\0');
	return count - 1;
}
int main() {
	// C string functions
#pragma region strlen
	char word[50] = "Salam Azerbaijan";
	/*cin >> word;

	cout << word << endl;*/

	cout << strlen(word) << endl;
	cout << my_strlen(word) << endl;
#pragma endregion

#pragma region concatenation
	//char word1[50];
	//char word2[50];
	//cin >> word1 >> word2;

	///*strcat_s(word1, 50, word2);
	//cout << word1 << endl;*/

	//strncat_s(word1, 50, word2, 3);
	//cout << word1 << endl;
#pragma endregion

#pragma region copy
	//char word1[50] = "Salam";
	//char word2[50] = "Antananrivu";

	//cout << word1 << ' ' << word2 << endl;
	///*strcpy_s(word1, 50, word2);*/
	//strncpy_s(word1, 50, word2, 5);
	//cout << word1 << ' ' << word2 << endl;

#pragma endregion

#pragma region compare
	char word1[50] = "salam";
	char word2[50] = "Salamatliq";
	/*cout << strcmp(word1, word2) << endl;*/
	/*cout << _strcmpi(word1, word2) << endl;*/
	/*cout << _stricmp(word1, word2) << endl;*/
	/*cout << strncmp(word1, word2, 3) << endl;*/
	/*cout << _strnicmp(word1, word2, 3) << endl;*/
#pragma endregion

#pragma region find
	/*char word[] = "Antanarivu";*/
	/*cout << strchr(word, 'a') << endl;*/
	/*cout << strstr(word, "tan") << endl;*/
#pragma endregion

#pragma region lower, upper
	/*char word[] = "Antanarivu";
	_strlwr_s(word);
	cout << word << endl;
	_strupr_s(word);
	cout << word << endl;*/
#pragma endregion

#pragma region casting
	//char number[] = "56";
	//int numb = atoi(number);
	//cout << numb + 3 << endl;
	//double numb1 = atof(number);
	//cout << numb1 + 3 << endl;
	//// atol(number);
	//// atoll(number);
	/*int n = 78945;
	char str[50];
	_itoa_s(n, str, 50, 16);
	cout << str << endl;*/
#pragma endregion



}