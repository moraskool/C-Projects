#pragma once
#include<iostream>
#include<string>
#include<ios>
#include <sstream>
using namespace std;

/**PersonType is a base class for other classes**/
class PersonType{
public:
	// Constructors
	/** Construct a rectangle with given values.
	@param fname The given first name
	@param fname The family last name
	*/
	PersonType(string fname, string lname) : firstName(fname), lastName(lname){}
	/**Construct a default rectangel**/
	PersonType() :firstName(""), lastName(""){}

	//Modifier functions

	/**sets the firstName field
	@param given fname
	**/
	void setFirst(const string& fname){
		firstName = fname;
	}
	/**sets the lastName field
	@param given lname
	**/
	void setLast(const string& lname){
		lastName = lname;
	}

	//Accessor functions
	/*Gets the person's first name
	@return the firstName as string
	*/
	string getFirst() const{ return firstName; }

	/*Gets the person's last name
	@return the lastName as string
	*/
	string getLast() const{ return lastName; }

	virtual string to_string() const;
	//string to_string() const;

	friend ostream& operator<<(ostream& os, const PersonType& per);

protected:
	string firstName;
	string lastName;
};