#pragma once
int add(int left, int right) {
	return left + right;
}

int subtract(int left, int right) {
	return left - right;
}

int multiply(int left, int right) {
	return left * right;
}

int divide(int left, int right) {
	return left / right;
}

int calculator(int left, int right, int(*func)(int, int)) {
	return func(left, right);
}
