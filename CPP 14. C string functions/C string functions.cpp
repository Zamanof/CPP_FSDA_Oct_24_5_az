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
	// strlen(str) - metnin uzunluqunu qaytarir
	/*char word[50] = "Salam Azerbaijan";*/
	/*cin >> word;

	cout << word << endl;*/

	/*cout << strlen(word) << endl;
	cout << my_strlen(word) << endl;*/
#pragma endregion

#pragma region concatenation
	//char word1[50];
	//char word2[50];
	//cin >> word1 >> word2;
	
	// strcat_s(str1, size, str2) - str2 setrini str1 setrine birleshdirir (konketnasiya edir)
	
	///*strcat_s(word1, 50, word2);
	//cout << word1 << endl;*/

	//strncat_s(word1, 50, word2, 3);
	//cout << word1 << endl;
#pragma endregion

#pragma region copy
	//char word1[50] = "Salam";
	//char word2[50] = "Antananrivu";

	//cout << word1 << ' ' << word2 << endl;

	// strcpy_s(str1, 50, str2) - str2 metnini str1 metnine kopyalayir

	///*strcpy_s(word1, 50, word2);*/

	// strncpy_s(str1, 50, str2, count) - str2 metnininden 
	// ilk count sayda simvolu str1 metnine kopyalayir
	
	//strncpy_s(word1, 50, word2, 5);
	//cout << word1 << ' ' << word2 << endl;

#pragma endregion

#pragma region compare
	char word1[50] = "salam";
	char word2[50] = "Salamatliq";
	// strcmp(str1, str2) - str1 ve str2 metnlerini muqayise edir
	// eger beraberdirse 0, str1 boyukdurse 1, str2 boyukdurse -1 qaytarir

	/*cout << strcmp(word1, word2) << endl;*/

	// _strcmpi(str1, str2), _stricmp(str1, str2)
	// iki metni case(boyuk kichik herfler)  nezere alinmadan
	// muqayise edir. Beraberlik halinda 0,
	// eks halda ilk ferqli simvollar arasindaki ferqi qaytarir

	/*cout << _strcmpi(word1, word2) << endl;*/
	/*cout << _stricmp(word1, word2) << endl;*/

	// strncmp(str1, str2, count)
	// str1 ve str2 metnlerinin ilk count sayda simvolunu muqayise edir
	// eger beraberdirse 0, str1 boyukdurse 1, str2 boyukdurse -1 qaytarir

	/*cout << strncmp(word1, word2, 3) << endl;*/
	/*cout << _strnicmp(word1, word2, 3) << endl;*/
#pragma endregion

#pragma region find
	char word[] = "Antanarivu";

	// strchr(str, symbol) - symbol char simvolunu 
	// str metninde axtarir ve bu simvolun 
	// ilk rast gelindiyi unvani qaytrir
	cout << strchr(word, 'a') << endl;

	// strstr(str, sub_str) - sub_str alt metnini 
	// str metninde axtarir ve bu salt metninin  
	// ilk rast gelindiyi unvani qaytrir
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
	_itoa_s(n, str, 50, 10);
	cout << str << endl;*/
#pragma endregion



}