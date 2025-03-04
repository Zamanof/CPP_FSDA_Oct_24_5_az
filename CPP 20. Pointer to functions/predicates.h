#pragma once

bool isOdd(int numb) {
	return numb % 2 != 0;
}

bool isEven(int numb) {
	return numb % 2 == 0;
}

bool isNegative(int numb) {
	return numb < 0;
}

bool isPrime(int numb) {
	if (numb <= 1) return false;
	for (size_t i = 2; i <= numb/2; i++)
	{
		if (numb % i == 0) return false;
	}
	return true;
}