#ifndef DATE_H_
#define DATE_H_
#include <iostream>

using namespace std;
/**Class Date representes the date of the year*/

class Date
{
public :
	//Constructors 
	/** Construct a date with given values.
	@param day the given day
	@param month the given month
	@param year  the given year
	*/
	Date(int day, int month, int year) :
		given_day(day), given_month(month), given_year(year){}

	/**Construct a default date**/
	Date() : given_day(1), given_month(1), given_year(1990){}

// Modifier Functions
	/**sets the given_day field
	@param given the given day
	**/
	void set_day(const int& day){
		given_day = day;
	}

	/**sets the given_month field
	@param given the given month
	**/
	void set_month(const int& month){
		given_month = month;
	}

	/**sets the given_year field
	@param given the given year
	**/
	void set_year(const int& year){
		given_day = year;
	}


//Accessor Funtions
	/*Gets the Date's day
	@return the given day as an int
	*/
	int get_day() const{ return given_day; }

	/*Gets the Date's month
	@return the given month as an int
	*/
	int get_month() const{ return given_month; }

	/*Gets the Date's year
	@return the given year as an int
	*/
	int get_year() const{ return given_year; }

//Other functions

	 /**Returns the next day*/
	int nextDay(Date& date);

	/**Exception Handler*/
	int errorCatch(Date& date);

	/** Declaration of the stream insertion operator for Person.
	@param os The target ostream
	@param per The Person object being output
	@return The updated output stream
	*/
	friend ostream& operator<<(ostream& os, const Date& date);
  

private :
	//Data fields
	/**The given day field*/
	int given_day;
	/**The given month field*/
	int given_month;
	/**The given year field*/
	int given_year;
};

#endif