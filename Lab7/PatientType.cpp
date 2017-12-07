//Implementation of the PatientType class
#include "PatientType.h"
string PatientType::to_string() const{

	ostringstream os;
	os << "  ID:  " << ID << endl
		<< "  AGE: " << Age << " years " << endl
		<< "  ADMIT" << admit_date << endl
		<< "  DISCHARGE" << disch_date << endl
		<< "    DOCTOR'S DETAILS:" << endl
		<< doc_type << endl
		<< PersonType::to_string() << endl;
	return os.str();
}
