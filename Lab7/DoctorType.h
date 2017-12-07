#pragma once
#include<iostream>
#include"PersonType.h"

class DoctorType : public PersonType{
public:
	// Constructors
	/** Construct a DoctorType with given values.
	@param PersonType lname,lname
	@param given_specialty
	*/
	DoctorType(string fname, string lname, string given_specialty) :
		PersonType(fname, lname), doc_specialty(given_specialty){}

	/**Construct a default DateType*/
	DoctorType() :PersonType("", " "), doc_specialty("Gynecologist"){}

	//Modifier functions

	/**sets the doc_specialty field
	@param given_specialty
	**/
	void setSpecialty(const string& given_specialty){
		doc_specialty = given_specialty;
	}

	//Accessor functions
	/*Gets the  area of specialization of the doctor
	@return the doc_specialty as a string
	*/
	string getSpecailty() const{ return doc_specialty; }

	virtual string to_string() const;

private:
	string doc_specialty;
};

