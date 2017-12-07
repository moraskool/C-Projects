// implementation of the Calculator class
#include "Calculator.h"
#include <iostream>
#include <iomanip>
using namespace std;

  /** returns a value */
  int Calculator::getValue() const
{
	return pValue;
}

  /** set the value */
  void Calculator::setValue(int value)
{
	pValue = value;
}

  /** add a value and returns the new value */
  int Calculator::Add(int value)
{
    return pValue + value;
}

  /** subtract a value and returns the new value */
  int Calculator::Subtract(int value)
{
	return pValue - value;
}

  /** multiply by a value and returns the new value */
  int Calculator::Multiply(int value)
{
	return pValue * value;
}

  /** divide by a vlaue and returns the new value */
  double Calculator::DivideBy(double value)
{
	return pValue / value;
}

  /** clear the value */
  void Calculator::clear()
{
	pValue = 0;
}


