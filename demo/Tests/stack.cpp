#include "libgame.h"

int main () {

	cout << "File: lgStack test" << endl;

	float i =0;

	// Int
	lgStack<int> stack(5);

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

	// Float
	cout << endl << endl << "Float tests" << endl;
	lgStack<float> stackf(5);

	for (i=0; i<5; i++)
	{
		stackf.push(i+0.5);
		cout << "Pushed: " << i+0.5 << endl;
	}

	stackf.print();
	cout << "Full: " << stackf.full() << endl;

	for (i=4; i>=0; i--)
		cout << "Poped: " << stackf.pop() << endl;
	
	stackf.print();

	cout << "Empty: " << stackf.empty() << endl;
	cout << "Size: "  << stackf.size() << endl;


	// String
	cout << endl << endl << "String tests" << endl;
	lgStack<string> stacks(5);

	stacks.push("Ola1");
	stacks.push("Ola2");
	stacks.push("Ola3");
	stacks.push("Ola4");
	stacks.push("Ola5");

	stacks.print();
	cout << "Full: " << stacks.full() << endl;

	for (i=4; i>=0; i--)
		cout << "Poped: " << stacks.pop() << endl;
	
	stacks.print();

	cout << "Empty: " << stacks.empty() << endl;
	cout << "Size: "  << stacks.size() << endl;

}