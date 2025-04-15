#pragma once
#include<iostream>

using namespace std;

template<class T>
class Stack {
private:
	T* stackPointer;
	const int maxSize;
	int current;
public:
	Stack(int size = 10);
	~Stack();
	void push(const T&);
	void pop();
	T& top();
	bool empty() const;
	int size() const;
};
template <class T>
Stack<T>::Stack(int size)
	:maxSize{ size }, stackPointer{ new T[size]{} }, current{ -1 }
{}

template <class T>
Stack<T>::~Stack() {
	delete[] stackPointer;
}

template <class T>
void Stack<T>::push(const T& value) {
	if (current >= maxSize - 1)
		throw exception("Stack is overflow");
	stackPointer[++current] = value;
}

template <class T>
void Stack<T>::pop() {
	if (empty())
		throw exception("Stack is empty");
	current--;
}

template <class T>
T& Stack<T>::top() {
	if (empty())
		throw exception("Stack is empty");
	return stackPointer[current];
}

template <class T>
bool Stack<T>::empty() const {
	return current < 0;
}

template <class T>
int  Stack<T>::size() const {
	return current + 1;
}