//Implementation of Negative class
#include <stdexcept>
#include <string>
#include <iostream>
using namespace std;


class Negative{
public:
	//Constructors
	/** Construct an exception with given values.
	@param first The message to be printed out
	*/
	Negative(string m) : message(m){};

	/** Construct a default exception. */
	Negative() :message(""){}

	/**Check if number is negative or 0*/
	double check_Neg(int j){

		if (j <= 0)
			throw Negative("Can't have negative Subscript");
	}

	/**Print out message*/
	string what(){
		return message;
	}

private:
	/**message to return*/
	string message;

};
