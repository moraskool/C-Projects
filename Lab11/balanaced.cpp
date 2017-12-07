/*
// Programmer : Morayo Ogunsina
// Section    : #002
// Lab        : #9
// Date       : April 6, 2016
// Description: Stacks and STL Libraries  .


#include <vector>
#include <ctime>
#include <iostream>
#include <sstream>
#include <iomanip>
#include <iterator>
#include <stack>
#include <list>
#include <algorithm>

using namespace std;

/// Boolean function to check if the length of a string is less than another 
bool isLesT(string i, string j);

/// Function to print header message for each set of names 
void printSetNum(int i);


int main()
{
	cout << "This program arranges input string in a symmetric order \n";

	string InputTemp[30];  //create an array of strings to store 30 elements
	stack <string> Input1; // create a stack of strings to store the Input.

	string Input[] = { "7",
		"Bo",
		"Jean",
		"Marybeth",
		"Kevin",
		"Claude",
		"William",
		"Pat",
		"6",
		"Jim",
		"Ben",
		"Annabelle",
		"Zoe",
		"Joey",
		"Frederick",
		"5",
		"John",
		"Billy",
		"Fran",
		"Stant",
		"Cece",
		"2",
		"Jones",
		"Bibi",
		"0"
	};


	int length = sizeof(Input) / sizeof(string);  // get the length of the array
	int numb = 1;     // use this to initialize the SET number

	// This loop handles the arrangement of the input string in non-decending order.
	for (int i = 0; i < length; i++)
	{
		int num;
		num = atoi(Input[i].c_str()); //assigns i to num if i points to a digit.

		printSetNum(numb); // Print out a heading for each set of names

		numb++;  // increment the set number.

		cout << num << endl; // Print out the number of names in the first set

		if (num != '0')  // do{}while() and while() do not work,so use if
		{
			// Loop through the digit assigned to num,copy these values to an array InputTemp 
			// for all the total values in the array.
			for (int j = 0; j < num; j++, i++)
				InputTemp[j] = Input[i + 1];  // assign starting from the next value in the set

			// sort the Inputset here
			sort(InputTemp, InputTemp + num, isLesT);

			//For loop to print out names at odd locations of data set
			for (int l = 0; l < num; l++)
			{
				if ((l % 2) == 0)
				{
					cout << InputTemp[l] << endl;  // print out the names at odd locations
					Input1.push(InputTemp[l + 1]); // push the names at even locations to the stack
				}
			}
			while (!Input1.empty())  // while the stack is not empty,
			{
				cout << Input1.top() << endl; // print out each top element
				Input1.pop();   // and pop the stack
			}
		}
	}
}


/// Boolean function to check if the length of a string is less than another 
bool isLesT(string i, string j)
{
	return(i.size() < j.size());
}

/// Function to print header message for each set of names 
void printSetNum(int i)
{
	cout << endl;
	cout << "******************************" << endl;
	cout << " SET" << i << endl;
}
*/