//Implementation of the DoctorType class
#include "DoctorType.h"

string DoctorType::to_string() const{

	ostringstream os;
	os << "  DOCTOR'S SPECIALTY: " << doc_specialty << endl
		<< PersonType::to_string() << endl;

	return os.str();
}