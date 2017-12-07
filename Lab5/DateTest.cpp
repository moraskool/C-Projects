// Programmer : Morayo Ogunsina
// Section    : #002
// Lab        : #5
// Date       : Feb 15, 2016
// Description: Date class.


/** DateTest is an application that tests class Date. */
#include <iostream>
#include "Date.h"
using namespace std;

int main(){
	//create two objects of date
	Date d1;
	Date d2(8,12,2001);
	

	// print it out
	cout << "The first date is "  << d1;
	// get the next day's date of d1
	d1.nextDay(d1);
	// print it out.
	cout << "The next Day's date is : " << d1;
	cout << "xxxxxxxxxxxxxxxxxxxxxxxxxxxx"<<endl;
	cout << "The second date is " << d2;
	d2.nextDay(d2);
	cout << "The next day's date is " << d2;
	cout << "xxxxxxxxxxxxxxxxxxxxxxxxxxxx" << endl;

	d2.set_day(29);
	d2.set_month(4);

	cout << "Checking Third date for exception...." << endl;
	Date d3(34, 0, -292);

	try {
		d3.errorCatch(d3);
		cout << d3;
	}
	catch (std::out_of_range& ex) {
	std::cerr << "Out of range exception occurred\n";
	std::cerr << ex.what() << endl;
	}

}
