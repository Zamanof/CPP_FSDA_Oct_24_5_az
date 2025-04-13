#pragma once
#include<iostream>

using namespace std;

template<class T>
struct Node
{
	T value;
	Node* next;
	Node(const T& value)
		: value{value}, next{nullptr}
	{}
	void print() const
	{ 
		cout << value;
	}
};

template<class T>
class LinkedList {
private:
	Node<T>* head;
public:
	LinkedList() 
		:head{nullptr}
	{}

	void add(const T&);
	void remove();
	Node<T>* find(const T&) const;
	Node<T>* addAfter(Node<T>*, const T&);
	Node<T>* removeAfter(Node<T>*);
	void clear();
	static void printNode(Node<T>* node) {
		node->print();
		cout << " -> ";
	}
	void print();
	void doForEach(void (*func)(Node<T>* node));
	~LinkedList();
};

template<class T>
void LinkedList<T>::add(const T& value){
	Node<T>* nodePtr = new Node<T>(value);
	nodePtr->next = head;
	head = nodePtr;
}

template<class T>
void LinkedList<T>::remove(){
	if (head != nullptr) {
		Node<T>* nodePtr = head;
		head = head->next;
		delete nodePtr;
	}
}

template<class T>
Node<T>* LinkedList<T>::find(const T& value) const{
	for (Node<T>* i = head; i != nullptr; i = i->next)
	{
		if (i->value == value) return i;
	}
	return nullptr;
}

template<class T>
Node<T>* LinkedList<T>::addAfter(Node<T>* node, const T& value){
	if (node == nullptr) return nullptr;
	Node<T>* nodePtr = new Node<T>(value);
	nodePtr->next = node->next;
	node->next = nodePtr;
	return node->next;
}

template<class T>
Node<T>* LinkedList<T>::removeAfter(Node<T>* node) {
	if (node == nullptr || node->next == nullptr) return nullptr;
	Node<T>* nodePtr = node->next;
	node->next = node->next->next;
	delete nodePtr;
}

template<class T>
void LinkedList<T>::clear() {
	while (head != nullptr) remove();
}

template<class T>
void LinkedList<T>::print() {
	doForEach(printNode);
	cout << '\n';
}

template<class T>
void LinkedList<T>::doForEach(void (*func)(Node<T>* node)){
	for (Node<T>* i = head; i != nullptr; i = i->next)
	{
		func(i);
	}
}

template<class T>
LinkedList<T>::~LinkedList() {
	clear();
}
