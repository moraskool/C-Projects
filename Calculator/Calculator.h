#ifndef CALCULATOR_H_
#define CALCULATOR_H_

/** The class Calculator does simple arithmetic operation. */
class Calculator
{
public:
	// The interface is defined here

	/** returns a value */
	int getValue() const; 

	/** set the valueb */
	void setValue(int value);

	/** add a value and returns the new value */
	int Add(int value);

	/** subtract a value and returns the new value */
	int Subtract(int value);

	/** multiply by a value and returns the new value */
	int Multiply(int value);

	/** divide by a vlaue and returns the new value */
	double DivideBy(double value);

	/** clear the value */
	void clear();

private: 
	// The implementation details are defined here
	/*the number to perform the arithmetic operation on */
	int pValue;
};


#endif

