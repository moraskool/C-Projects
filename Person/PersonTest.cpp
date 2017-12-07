/** Test_Person is an application that tests class Person. */
#include <iostream>


#include "Person.h"
using namespace std;

int main()
{
	string i, j;

	Person p1("Sam", "Jones","Johanna", "1234", 1930);
	cout << "p1: " << p1 << endl;
	Person p2("Jane", "Jones","Martha", "5678", 1990);
	cout << "p2: " << p2 << endl;

	cout << "Age of " << p1.get_given_name()
		<< " is " << p1.age(2004) << endl;
	if (p1.is_senior(2004))
		cout << p1.get_given_name() << " can ride the subway for free\n";
	else
		cout << p1.get_given_name() << " must pay to ride the subway\n";
	if (p2.can_vote(2004))
		cout << p2.get_given_name() << " can vote\n";
	else
		cout << p2.get_given_name() << " can't vote\n"; 

	p1.set_birth_year(1950);

	// Now see whether he has to pay to ride the subway.
	cout << "Age of " << p1.get_given_name()
		<< " is " << p1.age(2004) << endl;
	if (p1.is_senior(2004))
		cout << p1.get_given_name() << " can ride the subway for free\n";
	else
		cout << p1.get_given_name() << " must pay to ride the subway\n";

	cout << "------------"<< endl;
	// Q1
	   cout <<" Q1.Initials : " << p1.get_initials(p1) << endl;

    // Q2
	   cout <<" Q2.Mother's maiden name : "<< p1.get_maiden_name() << endl;

	// Q3
	   if (p1.operator==(p1))
		   cout <<" Q3.p1's ID number is equal to p1's ID number." << endl;
	// Q4 
		   if (p1.operator<(p2))
			   cout << " Q4.p1's ID number is less than p2's ID number." << endl;
		   if (p2.operator>(p1))
			   cout << " Q4.p2's ID number is greater than p1's ID number." << endl;
		   if (p1.operator>=(p2))
			   cout << " Q4.p1's ID number is either greater than or equal to p2's ID number." << endl;
		   else if (!(p2.operator>=(p2)))
			   cout << " It is none of these" << endl;
	 
	// Q5
	   cout <<" Q5.Switched Names : " << p1.get_family_name() <<" "<< p1.get_given_name() << endl;

	return 0;
}
