//Implementation of the ticketOrder class
#include <sstream>
#include "ticketOrder.h"


/** Compares two ticket Objects objects for equality.
@param per The second ticketOrder object
@return true if the ticketObjects objects have same
address and Names ; false if they don't
*/
bool ticketOrder::operator==(const ticketOrder& ticOrder) const {
	return
		(lName == ticOrder.lName) && (fName == ticOrder.fName) && (addr == ticOrder.addr);
}

string ticketOrder::to_string() const{
	
	ostringstream os;
	 os << " FIRST NAME : " << fName << "\n"
		<< " LAST NAME: " << lName << "\n"
		<< " NUMBER OF TICKETS BOUGHT : " << NumOfTickets << "\n"
		<< addr << endl;
	return os.str();
}

ostream& operator<<(ostream& os, const ticketOrder& ticOrder) {
	return os << ticOrder.to_string();
}

/** an input funtionof ticket order that
prompts the user for the necessary data
*/
ticketOrder ticketOrder::inputTicket()
{
	address addr;
	ticketOrder tic;
	int ticNum;
	string First, Last;

	cout << "Enter the First Name : ";
	cin >> First;
	tic.setFName(First);

	cout << "Enter the Last Name : ";
	cin  >> Last;
	tic.setLName(Last);


	cout << "Enter the Number of tickets you want to buy : ";
	cin  >> NumOfTickets;
	tic.setNumTick(ticNum);
	
	cout << endl;
	addr.inputAddress();

	return tic;
}


