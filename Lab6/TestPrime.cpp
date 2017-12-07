// Programmer : Morayo Ogunsina
// Section    : #002
// Lab        : #6
// Date       : Feb 22, 2016
// Description: Negative class and Prime class (Exception Handling).

/** TestPrime is an application that tests classes Negative and Prime. */
#include <iostream>

#include "Negative.h"
#include "Prime.h"
using namespace std;


int main(){
	int num = 0;
	// create an object of Prime and do the following 
	Prime P1;
	num = P1.Check();
	num = P1.Calculate(num);
	P1.Print(num);
}