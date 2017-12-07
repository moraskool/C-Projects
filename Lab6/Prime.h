
#ifndef PRIME_H_
#define PRIME_H_

using namespace std;

class Prime{
public:
	//Constructors
	/** Construct a Prime with given values.
	@param first The entered number
	*/
	Prime(int n) : a(n){};

	/** Construct a default Prime. */
	Prime() :a(){}


	// Other Functions
	/** check if the number if it is valid*/
	int Check();

	/** Function to check if number is prime or not*/
	bool Calculate(int a);

	/**Print out a mesasage indicating if Prime or not*/
	void Print(int a);

private:
	// number typed
	int a;
};
#endif