// Programmer : Morayo Ogunsina
// Section    : #002
// Lab        : #4
// Date       : Feb 08, 2016
// Description: Rectangle class.


/** Test_Person is an application that tests class Rectangle. */
#include <iostream>


#include "Rectangle.h"
using namespace std;

int main(){

	//Q3.  create two rectangle objects
	Rectangle r1(5, 2.5);
	Rectangle r2(5, 18.9);

	// display them on the console
	cout << "First Rectangle" << endl;
	r1.show();
	cout << "-----------------------------" << endl;

	cout << "Second Rectangle" << endl;
	r2.show();
	cout << "-----------------------------" << endl;

	cout << "The area of  the First Rectangle is :" << r1.area() << " and its perimeter is : " << r1.perimeter() << endl;
	cout << "The area of the Second Rectangle is :" << r2.area() << " and its perimeter is : " << r2.perimeter() << endl;
	cout << "------------------------------" << endl;
	// Q4. check if the two rectangles have the same area

	if (r1.sameArea(r2))
		cout << "Both rectangles have the same area" << endl;
	else
		cout << "Both rectangles have different areas" << endl;
	cout << "------------------------------" << endl;

	// Q5
	r1.setlength(15);
	r1.setwidth(6.3);

	// display them on the console
	// display them on the console
	cout << "First Rectangle" << endl;
	r1.show();
	cout << "-----------------------------" << endl;

	cout << "Second Rectangle" << endl;
	r2.show();
	cout << "-----------------------------" << endl;

	cout << "The area of the First Rectangle is :" << r1.area() << " and its perimeter is : " << r1.perimeter() << endl;
	cout << "The area of the Second Rectangle is :" << r2.area() << " and its perimeter is : " << r2.perimeter() << endl;
	cout << "------------------------------" << endl;

	if (r1.sameArea(r2))
		cout << "Both rectangles have the same area" << endl;
	else
		cout << "Both rectangles have different areas" << endl;
	cout << "------------------------------" << endl;
}
