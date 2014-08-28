#include "libgame.h"

int main () {

	cout << "File: lgStack.cpp test" << endl;

	int i =0;
	lgStack stack(5);

	for (i=0; i<5; i++)
	{
		stack.push(i);
		cout << "Pushed: " << i << endl;
	}

	stack.print();
	cout << "Full: " << stack.full() << endl;

	for (i=4; i>=0; i--)
		cout << "Poped: " << stack.pop() << endl;
	
	stack.print();

	cout << "Empty: " << stack.empty() << endl;
	cout << "Size: "  << stack.size() << endl;

}