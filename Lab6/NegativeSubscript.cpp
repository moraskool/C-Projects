
#include <stdexcept>
#include <string>
#include <iostream>
using namespace std;


class negativeSubscript{
public:
	negativeSubscript(string m) : message(m){};
	negativeSubscript() :message(""){}

	double check(double* array, int j){

		if (j < 0)
			throw negativeSubscript("Can't have negative Subscript");

		return array[j];
	}


	string what(){
		return message;
	}
private:
	string message;
};

void main(){
	double a[3] = { 2, 5, 6 };
	negativeSubscript neg;
	try{
		neg.check(a, -1);
	}
	catch (negativeSubscript& e){
		cerr << "You are trying to access an array with negative subscript" << endl;
		cerr << e.what() << endl;
		abort();
	}
}
