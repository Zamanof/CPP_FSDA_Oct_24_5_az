#include"Queue.h"


int main() {
	Queue<float> mathQueue(3);
	cout << boolalpha << mathQueue.full() << endl;
	cout << boolalpha << mathQueue.empty() << endl;
	cout <<  mathQueue.size() << endl;
	mathQueue.enqueue(3.14f);
	mathQueue.enqueue(2.7182f);
	cout << boolalpha << mathQueue.full() << endl;
	cout << boolalpha << mathQueue.empty() << endl;
	cout << mathQueue.size() << endl;
	cout <<"front = "<< mathQueue.front() << endl;
	cout <<"back = "<< mathQueue.back() << endl;
	mathQueue.enqueue(6.2831f);
	cout << boolalpha << mathQueue.full() << endl;
	cout << boolalpha << mathQueue.empty() << endl;
	cout << mathQueue.size() << endl;
	cout << "front = " << mathQueue.front() << endl;
	cout << "back = " << mathQueue.back() << endl;

	cout << mathQueue.dequeue() << endl;
	cout << mathQueue.size() << endl;
	cout << "front = " << mathQueue.front() << endl;
	cout << mathQueue.size() << endl;
	cout << "back = " << mathQueue.back() << endl;
	cout << mathQueue.dequeue() << endl;
	cout << mathQueue.size() << endl;
	mathQueue.enqueue(56.68f);
	cout << mathQueue.size() << endl;

	
}