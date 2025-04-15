#include"Stack.h"

class Falan {
public:
	int bahmen;
	int qalan;
};

int main() {
	/*Stack<char> stack(50);
	cout << boolalpha << stack.empty() << endl;
	stack.push('a');
	stack.push('w');
	stack.push('e');
	stack.push('y');
	cout << stack.top() << endl;
	cout << stack.size() << endl;
	stack.pop();
	cout << stack.top() << endl;
	cout << stack.size() << endl;*/

	Stack<Falan> falanStack;
	falanStack.push(Falan{ 5, 7 });
	falanStack.push(Falan{ 78, 236 });
	cout << falanStack.top().bahmen << endl;
	cout << falanStack.top().qalan << endl;
	falanStack.pop();
	cout << falanStack.top().bahmen << endl;
	cout << falanStack.top().qalan << endl;
}