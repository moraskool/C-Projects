#pragma once

#include <iostream>
#include <sstream>
#include <iomanip>
#include <queue>

using namespace std;

class Queue
{
	public :
		 Queue():capacity(DEFAULT_CAPACITY),num_items(0),front_index(0),
			 rear_index(-1),the_data(new char[DEFAULT_CAPACITY]){}

		//Constructor and member function
		/** Constructs an empty queue*/

		/** Pushes an item unto the back of the queue*/
		void enqueue(const char item);

		/** removes the front item from the queue*/
		void dequeue();

		/** Returns a reference to the object at the front of the queue 
		    without removing it
			@return a reference to the object at thefront of the queue
		*/
		char& front();

		/** Returns a const reference to the object at the front of the queue
		without removing it
		@return a reference to the object at thefront of the queue
		*/
		const char& front() const;

		/** determines whether the queue is empty*/
		bool isEmpty(Queue Q) const;

		/** updates the new item to a new index*/
		void reallocate();

		/** returns the number of items in the queue*/
		size_t queueSize() const;

	   /** Prints out all the elements in the queue*/
		void printQueue();

   private:
	   char *the_data;
	   int capacity;
	   int num_items;
	   int front_index;
	   int rear_index;
	   const int DEFAULT_CAPACITY = 6;
};