#pragma once

#include<iostream>

using namespace std;

template<class T>
class Queue {
private:
	T* queuePtr;
	const int maxSize;
	int first;
	int last;
	bool over;
public:
	Queue(int maxSize = 10);
	~Queue();
	void enqueue(const T&);
	T dequeue();
	T& front() const;
	T& back() const;
	bool empty() const;
	bool full() const;
	int size() const;
};


template<class T>
Queue<T>::Queue(int maxSize)
	:maxSize{ maxSize }, queuePtr{ new T[maxSize]{} },
	first{}, last{}, over{}
{}

template<class T>
Queue<T>::~Queue() {
	delete[] queuePtr;
}

template<class T>
void Queue<T>::enqueue(const T& value) {
	if (full()) throw exception("Queue is full");
	queuePtr[last++] = value;
	if (last == maxSize) {
		over = true;
		last = 0;
	}
}

template<class T>
T Queue<T>::dequeue() {
	if (empty()) throw exception("Queue is empty");
	T current = queuePtr[first++];
	if (first == maxSize) {
		over = false;
		first = 0;
	}
}

template<class T>
T& Queue<T>::front() const {
	if (empty()) throw exception("Queue is empty");
	return queuePtr[first];
}

template<class T>
T& Queue<T>::back() const {
	if (empty()) throw exception("Queue is empty");
	if (last == 0 && over) return queuePtr[maxSize - 1];
	return queuePtr[last - 1];
}

template<class T>
bool Queue<T>::empty() const {
	return size() == 0;
}

template<class T>
bool Queue<T>::full() const {
	return size() == maxSize;
}

template<class T>
int Queue<T>::size() const {
	if (last > first) return last - first;
	else if (last < first) return maxSize - (first - last);
	else if (over) return maxSize;
	else return 0;
}
