//Implementation of the Date class
#include "Date.h"
#include <iostream>

using namespace std;

 int Date::nextDay(Date& date){
	if ((date.get_month() == 12) & (date.get_day() == 31))
	{
	 date.set_day(1);
	 date.set_month(1);
	 given_year++;
    }

	else if (given_month == 1 || given_month == 3 || given_month == 5 || given_month == 7
		|| given_month == 8 || given_month == 10 || given_month == 12)
	{
		if ((given_day < 31) && (given_day > 0))
			given_day++;
		if
			(given_day == 31){
			  given_day = 1;
			  given_month++;
		}
	}

	else 
		if ((given_day < 30) && (given_day > 0))
			given_day++;
	    if
		 (given_day == 30){
		  given_day = 1;
		  given_month++;
	 }
		return date.given_day,date.given_month,date.given_year;
}


 /**Exception Handler*/
 int Date::errorCatch(Date& date){
	 if (date.given_day <= 0 || date.given_month <= 0 || date.given_year <= 0)
	 {  
		 throw std::out_of_range("value set to 0 exception occured");
	 }

	 if ((date.given_month > 13) || (date.given_day > 31))
	 {
		 throw std::out_of_range("value out of range exception occured");
	 }
	 return given_day, given_month, given_year;
 }


/** Retrieves the information in a Person object
and formats it for output. The result is
then inserted into the target ostream.
@param os The target ostream
@param per The source Person
@return The modified ostream after the data has
been inserted.
*/
 ostream& operator<<(ostream& os, const Date& date) {
	 os << "The date is " << date.get_day() << "/" << date.get_month() << "/" << date.get_year() << endl;
	 return os;
 }
