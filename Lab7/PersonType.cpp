//Implementation of the PersonType Class
#include <sstream>
#include "PersonType.h"

string PersonType::to_string() const{
	ostringstream os;
	os << "  NAME: " << firstName << "  " << lastName;
	return os.str();
}

ostream& operator<<(ostream& os, const PersonType& per) {
	return os << per.to_string();
}



