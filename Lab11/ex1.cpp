//Given a string, print it backwards
/*

#include <string>
#include <stack>
#include <iostream>
#include <sstream>
using namespace std;

string reverse_words(const string& in)
{

	stack<string> the_stack;
	istringstream iss(in);
	string word;
	while (iss >> word) {
		the_stack.push(word);
	}
	string result;
	while (!the_stack.empty()) {
		result += the_stack.top();
		the_stack.pop();
		if (!the_stack.empty()) {
			result += " ";
		}
	}
	return result;
	
}

int main()
{
	string line;
	cout << "Enter a sentence please: " << endl;

	while (getline(cin, line)) {
		
			cout << reverse_words(line) << endl;
		
		return 0;
	}
}

*/
