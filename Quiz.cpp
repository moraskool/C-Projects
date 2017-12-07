
// Programmer : Morayo Ogunsina
// Section    : #002
// Lab        : #9
// Date       : April 6, 2016

#include <iostream>
#include <sstream>
#include <iomanip>
#include <string>
#include <vector>
#include <stack>


using namespace std;

/** Boolean function to check if the length of a string is less than another */
void reverse(vector<int> vec, vector<int> &res, int low, int high, int index1, int index2);

void removeNegative(stack <int> stak);

int main()
{
	vector <int> vec1, vec2;
	stack<int> vec3;
	vec1.push_back(1);
	vec1.push_back(2);
	vec1.push_back(4);
	vec1.push_back(6);
	vec1.push_back(5);

	vec2 = vec1;
	reverse(vec1, vec2, 1, 3, 1, 3);

	for (int i = 0; i < vec2.size(); i++)
	{
		cout << vec2[i] << endl;
	}
	
	vec3.push(30);
	vec3.push(16);
	vec3.push(-18);
	vec3.push(8);
	vec3.push(-3);

	removeNegative(vec3);
	
}



void reverse(vector<int> vec, vector<int> &res, int low, int high, int index1, int index2)
{   

	if (index1 == high+1)
	{
		return;
	}
	else
	{
		res[index1] = vec[index2];
	}
	reverse(vec, res, low, high, index1+1, index2-1);
	
}

void removeNegative(stack<int> stk)
{
   //for (int i = 0; i < stk.size(); i++)
	while (!stk.empty())
    {
	   if (stk.top() < 0)
		   stk.pop();
	   else
		   cout << stk.top() << endl;
	}
}