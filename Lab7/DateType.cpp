// Implementation of the DateType class
#include "DateType.h"
#include <sstream>

string DateType::to_string() const{

	ostringstream os;
	os << "  DATE: " << given_day << "/" << given_month << "/" << given_year;
	return os.str();
}

ostream& operator<<(ostream& os, const DateType& per) {
	return os << per.to_string();
}