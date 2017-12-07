/** Implementation file for the class Prime. */
#include "Negative.h"
#include "Prime.h"
#include <iostream>
#include <stdexcept>
#include <string>
#include <cmath>
using namespace std;



	/** check if the number if it is valid*/
int Prime :: Check(){
		cin.exceptions(ios_base::failbit);
		int number = 0;
		Negative neg;

		while (true){ //loop until valid input
			try{
				cout << "Enter a number : ";
				cin  >> number;
				neg.check_Neg(number);
				return number;
			}
			catch (ios_base::failure& ex) { // catch if a character
				cout << "Number is a character----Try again :" << endl;
				// Reset the error flag
				cin.clear();
				// Skip current input line
				cin.ignore(numeric_limits<int>::max(), '\n');
			}
			catch (Negative& ex) { // catch if negative or zero
				cout << "Number is negative or Zero --Try again :" << endl;
				// Reset the error flag
				cin.clear();
				// Skip current input line
				cin.ignore(numeric_limits<int>::max(), '\n');
			}
			
		}
	}

/**  Bool Function to check if number entered is prime or not*/
bool Prime:: Calculate(int a){

		if (a < 1)
			return false;
		if (a == 2)
			return true;

		for (int i = 2; i<=sqrt(a); i++)
		   {
			   if (a % i == 0)
				   return false;
		   }
		  return true;
	}

/**Print out a mesasage indicating if Prime or not*/
void Prime :: Print(int a){
		 if (Calculate(a) )
			 cout << "The number you typed is a Prime number" << endl;
		 else
			 cout << "The number is not a Prime number" << endl;
	 }

