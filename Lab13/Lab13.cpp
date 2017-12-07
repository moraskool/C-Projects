
// Programmer : Morayo Ogunsina
// Section    : #002
// Lab        : #12
// Date       : April 18, 2016
// Description: NumberSystem Conversion using recursion  .

// Lab13 is a program that runs binaryto decimal and decimal to binary conversion. */


#include <iostream>
#include <sstream>
#include <iomanip>
#include <string>
#include <vector>
#include <cmath>

using namespace std;

/** DecimalToBinary converts an decimal integer 
its equivalent binary string*/
string DecimalToBinary(int num);


/** BinaryToDecimal converts a binary string
to its equivalent decimal integer*/
int BinaryToDecimal(string binNum, int i = 0)
{
	int total = 0;

    // if i is less than the total lenth of the string
	if (i < binNum.length())
	{ 
       // only add all values that are 1 starting from the ith position backwards
		if (binNum[binNum.length() - 1 - i] == '1')
			 total = pow(2, i);
		    return total + BinaryToDecimal(binNum, ++i);
	}
	return total;
}

int main()
{ 

	cout << "Enter a decimal Number you want to convert to binary :";
	int input;
	cin >> input;
	cout << "The decimal value of " << input << " is: " <<  DecimalToBinary(input);
    cout << endl;

	cout << "Enter a binary Number you want to convert to decimal :";
	string bin;
	cin >> bin;
	cout << "The decimal value of " << bin << " is: " << BinaryToDecimal(bin);
	cout << endl;
}


/** DecimalToBinary converts an decimal integer
its equivalent binary string*/
string DecimalToBinary(int num)
{   
   //get the remainder
	int remainder = num % 2; 
	//num = num / 2;
	if (num == 0)
	{
		return to_string(int(num));
	}
	else if (num > 0)
	{   
       // recursinvely call the funtion and concatenate the results with the remainder 
		return DecimalToBinary(num / 2) + to_string(int(remainder));
	}
	
}



