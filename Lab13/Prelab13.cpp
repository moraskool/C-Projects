/**
#include <iostream>
#include <sstream>
#include <iomanip>
#include <string>
#include <vector>

using namespace std;

bool isPalindrome(string str);
int linear_search(const vector<string>& items, string& target, size_t pos_last);
int test(int x, int y);

int main()
{
// test your function
	string x ;
	cout << "Enter a string to test: " ;
	getline(cin,x); 
	if (isPalindrome(x))
		cout << x << " is a palindrome." << endl;
	else
		cout << x << " is not a palimdrome." << endl;

	vector<string> names = { "Caryn", 
		                     "Debbie", 
							 "Dustin",
							 "Elliot",
		                     "Jacquie",
							 "Jonathan",
							 "Rich" };

	int position = linear_search(names, string("Elliot"), names.size());
	cout << "In the following vector of names :\n"
		"Caryn,Debbie,Dustin,Elliot,Jacquie,Jonathan,Rich" << endl;
	cout << "Elliot is at position " << position << endl;
	cout << test(3, 100) << endl;
	cout << test(15, 7) << endl;
 }



// 1. Recursive function isPalindrome .
check if a string is a palindrome.
@param str The string
return bool value


bool isPalindrome(string str) 
{
	// if string has 0 letters or just one letter
	// it is a palindrome
 if (str.length() == 0 || str.length() == 1) 
		return true;
else // else, compare first and last letters of the string and 
{
	 // if the first letter is not the same as the last,
	 // not a palindrome
	 if (str.at(0) != str.at(str.length() - 1))
	 {
		 return false;
	 }
	 // else, then they are the same.
	 else
		 // start from the next letter and the second last letter
		 // and continue this till the all the letters have been compared
		 isPalindrome(str.substr(1, str.length() - 1));
    }
}


// 2. Recursive linear search function (in linear_search.h).
//@param items The vector being searched
//@param target The item being searched for
//@param pos_first The position of the current first element
//@return The subscript of target if found; otherwise -1

int linear_search(const vector<string>& items, string& target, size_t pos_last) {
	if (pos_last == 0)
		return -1;
	else if (target == items[pos_last - 1])
		return pos_last - 1;
	else
		return linear_search(items, target, pos_last - 1);
}

int test(int x, int y){
	if (x <= y)
		return (y - x);
	else
		return test(x - 1, y + 1);

}
*/