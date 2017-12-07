#pragma once
#include<iostream>
#include<string>
#include<ios>
#include <sstream>
using namespace std;

class DateType
{
public:
	// Constructors
	/** Construct a dateType with given values.
	@param day, month, year
	*/
	DateType(int day, int month, int year) : given_day(day), given_month(month), given_year(year) {};

	/**Construct a default DateType*/
	DateType() : given_day(12), given_month(6), given_year(2001){}

  //Modifier functions

	/**sets the firstName field
    @param given fname
	**/
	void setDate(const int& day,const int& month,const int& year){
	    given_day = day;
		given_month = month;
		given_year = year;
	}

	//Accessor functions
	/*Gets the birth day of the person
	@return the given_day as an int
	*/
	int getDay() const{ return given_day; }

	/*Gets the birth month of the person
	@return the given_month as an int
	*/
	int getMonth() const{ return given_month; }

	/*Gets the birth year of the person
	@return the given_year as an int
	*/
	int getYear() const{ return given_year; }

	virtual string to_string() const;
	//string to_string() const;

	friend ostream& operator<<(ostream& os, const DateType& per);
private:
	int given_day;
	int given_month;
	int given_year;
};

