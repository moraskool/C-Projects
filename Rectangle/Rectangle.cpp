/** Implementation file for the class Rectangle. */
#include "Rectangle.h"
#include <iostream>


using namespace std;

/** Calculates the perimeter.
@param the rectangle object
@returns the product of 2 times the sum of length
and width of the rectangle object*/

float Rectangle::perimeter() {
	return 2 * (given_length + given_width);
}

/** Calculates the area.
@param the rectangle object
@returns the product of length and width of
the Rectangle object*/

float Rectangle::area()  {
	return given_length * given_width;
}

/** display the length and width.
@param the given length and the given width
@ displays the  length and width of the object*/

void Rectangle::show() {
	cout << "Length of the rectangle is " << given_length << endl;;
	cout << "Width of the rectangle is  " << given_width << endl;
}

bool Rectangle::sameArea(Rectangle& rect){
	return (area() == rect.area());
}