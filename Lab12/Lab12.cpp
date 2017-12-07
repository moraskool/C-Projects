/**#include <iostream>
#include <sstream>
#include <iomanip>
#include <queue>
#include <stack>

using namespace std;

template <class Type> 
void reverseStack(stack<Type>& someStack);

int main()
{
  // test your function

	stack<char> character;
	character.push('M');
	character.push('o');
	character.push('r');
	character.push('a');
	character.push('y');
	character.push('o');

// Uncomment this block of code to see what is originally in the stack
//	cout << "Before reversing the queue,the elements in the stack are:" << endl;
//	while (!(character.empty()))
//	{   
//		cout << " " << character.top() << endl;
//		character.pop();
//	}

	reverseStack(character);
	cout << "After reversing the queue,the elements in the stack are:" << endl;
	while (!character.empty())
	{
		cout << " " << character.top() << endl;
		character.pop();
	}
}


template <class Type>
void reverseStack(stack<Type>& someStack)
{
	queue <Type> QueueStack;  // create a queue object

	// unstack the elements in the stack and push them to the queue
	while (!someStack.empty())
	{  
		QueueStack.push(someStack.top());
		someStack.pop(); 
	}

	// then pop the elements from the queue and push them back into the stack
	while (!QueueStack.empty())
	{
		someStack.push(QueueStack.front());
		QueueStack.pop();
	}

}


*/