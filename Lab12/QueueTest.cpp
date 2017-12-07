// Programmer : Morayo Ogunsina
// Section    : #002
// Lab        : #12
// Date       : April 11, 2016
// Description: DynamicArray and Queues  .

/** QueueTest is an application that tests the classes indicated in the description. */

#include <iostream>
#include <sstream>
#include <iomanip>
#include <queue>
#include <stack>
#include "Queue.h"

using namespace std;

int main()
{
	Queue Q1; // create two Queue objects
	Q1.enqueue('M');
	Q1.enqueue('O');
	Q1.enqueue('R');
	Q1.enqueue('A');
	Q1.enqueue('Y');
	Q1.enqueue('O');

	cout << "The contents of the Queue are :";
	Q1.printQueue();
	cout << endl;

	cout << "The size of the Queue is : " << Q1.queueSize();
	cout << endl;

	Q1.dequeue();
	cout << "The contents of the Queue after dequeing once are :";
	Q1.printQueue();
	cout << endl;

	cout << "The first Item on the Queue is  " << Q1.front();
	cout << endl;

	if (Q1.isEmpty(Q1))
		cout << "The Queue is empty";
	else
		cout << "The queue is not empty and it has " << Q1.queueSize() << " items" << endl;

	Q1.dequeue();
	Q1.dequeue();
	Q1.dequeue();
	cout << "The contents of the Queue after dequeing 3 times are :";
	Q1.printQueue();
	cout << endl;
	
	Q1.dequeue();
	Q1.dequeue();
	if (Q1.isEmpty(Q1))
		cout << "After dequeing 2 more times the Queue is now empty with " << Q1.queueSize() << " items" << endl;
	else
		cout << "The queue is not empty and it has " << Q1.queueSize() << " items";

}