
// Programmer : Morayo Ogunsina
// Section    : #002
// Lab        : #2
// Date       : Jan 25, 2016
// Description: Introduction to Classes and Objects.


/** Program to test the Calculator class. */
#include "Calculator.h"
#include <iostream>
#include <iomanip>
using namespace std;

int main() {

	// a. cal is an object/instance of Calculator
	Calculator calc;

	// b. set the value to 10
	calc.setValue(10);

	// c. print out the value
	cout << setw(2) << calc.getValue() << endl;

	// d. add 100 to the value and print it out
	cout << setw(2) << calc.Add(100) << endl;

	// e. subtract 20 from the value and print out the result
	cout << setw(2) << calc.Subtract(20) << endl;

	// f. multiply the value by -132 and print out the result
	cout << setw(2) << calc.Multiply(-132) << endl;

	// g. divide the value by -100 and print out the result
	cout << setw(2) << calc.DivideBy(100) << endl;
	
	// h.clear the value
	 calc.clear();

    // i. print out the cleared value
	   cout << calc.getValue() << endl;

	return 0;
}