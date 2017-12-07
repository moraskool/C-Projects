#pragma once
#include<iostream>
#include"address.h"
using namespace std;

/**ticketOrder is derived from the address class**/
class ticketOrder  {
public:
	// Constructors
	/** Construct a ticket Order with given values.
	@param numTickets The number of tickets
	@param PerName the person name
	*/
	ticketOrder(string fname, string lname,int numTickets,address add )
		: fName(fname), lName(lname), NumOfTickets(numTickets),addr(add) {}

	/**Construct a default ticketOrder**/
	ticketOrder() : fName(" "), lName(" "), NumOfTickets(), addr() {}
	
	//Modifier functions

	/**sets the FirstName field
	@param given nme
	**/
	void setFName(const string& fname){
		fName = fname;
	}
	/**sets the LastName field
	@param given city
	**/
	void setLName(const string& lname){
		lName = lname;
	}
	/**sets the number of Tickets field
	@param given numTickets
	**/
	void setNumTick(const int& numTickets){
		NumOfTickets = numTickets;
	}

	//Accessor functions
	/*Gets the First Name
	@return the First Name as a string
	*/
	string getFName() const{ return fName; }

	/*Gets the Last Name
	@return the Last Name as a string
	*/
	string getLName() const{ return lName; }

	/*Gets the number of tickets bought
	@return the NumOfTickets as an int
	*/
	int getNumTict() const{ return NumOfTickets; }


	//Other functions

	/** Compares two ticket Objects objects for equality.
	@param per The second ticketOrder object
	@return true if the ticketObjects objects have same
	address and Names ; false if they don't
	*/
	bool operator==(const ticketOrder& ticOrder) const;

	virtual string to_string() const;

	friend ostream& operator<<(ostream& os, const ticketOrder& ticOrder);

	/** an input funtionof ticket order that 
	    prompts the user for the necessary data
	*/
	ticketOrder inputTicket();
    
public:
	int NumOfTickets;
	string fName;
	string lName;
	address addr;
};
