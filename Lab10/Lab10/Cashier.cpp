// Programmer : Morayo Ogunsina
// Section    : #002
// Lab        : #9
// Date       : March 28, 2016
// Description: More on STL Libraries .


#include <list>
#include <ctime>
#include <iostream>
#include <iterator>
#include <algorithm>
#include "ticketOrder.h"
#include "address.h"

using namespace std;

// return true if the number of the tickets is greater than 4
bool CheckNumTickets(ticketOrder t){ return (t.getNumTict() > 4); }

// return true if the first object is less than the second
bool oper(ticketOrder t1,ticketOrder t2){ return (t1.getFName() < t2.getFName()); }

int main()
{
	//create an list of ticket objects
	list<ticketOrder> Ticket;

	// create 4 ticket orders
	ticketOrder ticket1;
	ticketOrder ticket2;
	ticketOrder ticket3;

	cout << "TICKET 1 ORDER....." << endl;
	ticket1.inputTicket();

	Ticket.push_back(ticket1);

	cout << "TICKET 2 ORDER....." << endl;
	ticket2.inputTicket();
	Ticket.push_back(ticket2);

	cout << "TICKET 3 ORDER....." << endl;
	ticket3.inputTicket();
	Ticket.push_back(ticket3);

	
	// create an iterator
	list<ticketOrder> ::iterator iter;

	for ( iter = Ticket.begin(); iter != Ticket.end(); ++iter)
	{     
		 ticketOrder t = *iter;
		if (CheckNumTickets(*iter))
		{
			cout << "Warning ! You cannot buy more than 4 tickets!" << endl;
		}
		else //e if (t.operator==(*iter))
		{
			cout <<"*********************" << endl;
			cout << "Ticket Purchase OK!" << endl;
			cout << t.to_string();
		}
	}	

	// check if the same person is trying to order twice
	if (ticket1.operator==(ticket2) && ticket2.operator==(ticket3) && ticket3.operator==(ticket1))
		 cout << "You cannot order more than once!" << endl;


	// sort by first name basis
	Ticket.sort(oper);
	cout << "***********ORDERED TICKET SUMMARY***********" << endl;
	for (iter = Ticket.begin(); iter != Ticket.end(); ++iter)
	{   
		ticketOrder t = *iter;
		cout << t.to_string();
	}
}




