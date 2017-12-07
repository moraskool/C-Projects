//Implementation of the Queue Class
#include <sstream>
#include "Queue.h"

using namespace std;

/** Pushes an item unto the back of the queue*/
void Queue::enqueue(const char item)
{
	if (num_items == capacity)
		reallocate();
	num_items++;  // add 1 to the number of items
	rear_index++;
	the_data[rear_index] = item;
}

/** removes the front item from the queue*/
void Queue::dequeue()
{
	for (int i = 0; i < num_items; i++)
	{
		the_data[i] = the_data[i + 1];
	}
	num_items--;
	rear_index = num_items - 1;
	front_index = 0;
}

/** Returns a reference to the object at the front of the queue
without removing it
@return a reference to the object at thefront of the queue
*/
char& Queue::front() 
{
	return the_data[front_index];
}

/** determines whether the queue is empty*/
bool Queue::isEmpty(Queue Q) const
{
	return (Q.num_items == 0);
}

/** updates the new item to a new index*/
void Queue::reallocate()
{
	size_t new_capacity = 2 * capacity;
	char* new_data = new char[new_capacity];
	size_t j = front_index;
	for (size_t i = 0; i < num_items; i++)
	{
		new_data[i] = the_data[j];
		j = (j + 1) % capacity;
	}
	front_index = 0;
	rear_index = num_items - 1;
	capacity = new_capacity;
	swap(the_data, new_data);
	delete[] new_data;
}

/** returns the number of items in the queue*/
size_t Queue::queueSize() const
{
	return num_items;
}


/** Prints out all the elements in the queue*/
void Queue::printQueue() 
{
	for (int i = 0; i < num_items; i++)
	{
		cout << the_data[i] << "  ";
	}
}



