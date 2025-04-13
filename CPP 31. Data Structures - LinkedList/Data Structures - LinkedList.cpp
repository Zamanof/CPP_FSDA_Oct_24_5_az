#include"LinkedList.h"
int main() {
	/*
		Dynamic data structures:
			- List(Linked List, Double Linked List, Circular Linked List)
			- Stack - LIFO
			- Queue (Queue, Prority Queue, Circular Queue) - FIFO
			- Trees
			- Graphs
			- Hash Table
	*/
	LinkedList<int> lst;
	lst.add(7);
	lst.add(30);
	lst.add(25);
	lst.add(51);
	lst.add(112);
	lst.add(89);
	lst.add(70);
	lst.add(5);
	lst.print();

	Node<int>* node = lst.find(112);
	/*LinkedList<int>::printNode(node);
	cout << '\n';
	node->value = 78;*/

	lst.addAfter(node, 56);
	lst.print();
	lst.removeAfter(lst.find(70));
	lst.print();
	lst.print();
	lst.clear();

}