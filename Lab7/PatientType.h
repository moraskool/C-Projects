#pragma once
#include <iostream>
#include "PersonType.h"
#include "DoctorType.h"
#include "DateType.h"

class PatientType : public PersonType{
public:
	// Constructors
	/** Construct a PatientType with given values.
	@param PersonType lname,lname
	@param id , age ,dType
	@param birthDate, admitDate, dischDate
	*/
	PatientType(string fname, string lname, int id, int age,  DoctorType dType,
		 DateType birthDate,  DateType admitDate,  DateType dischDate) :
		PersonType(fname, lname),ID(id), Age(age), doc_type(dType),
		dob(birthDate), admit_date(admitDate), disch_date(dischDate){}

	/**Construct a default DateType*/
	PatientType() :PersonType("Dave ", "Johnson"), ID(), Age(), doc_type(),
		dob(), admit_date(), disch_date(){}

 //Modifier functions

	/**sets the patient's ID field
	@param id
	**/
	void setPId(const int& id){
		ID = id;
	}

	/**sets the patient's Age
	@param age
	**/
	void setPAge(const int& age){
		Age = age;
	}

	/**sets the patient's doctor field
	@param dType
	**/
	void setDocType(const DoctorType& dType){
		doc_type = dType;
	}

	/**sets the patient's dob
	@param birthDate
	**/
	void setDOB(const DateType& birthDate){
		dob = birthDate;
	}

	/**sets the patient's admit_date
	@param admitDate
	**/
	void setAdmitDate(const DateType& admitDate){
		admit_date = admitDate;
	}

	/**sets the patient's disch_date
	@param dischDate
	**/
	void setDischDate(const DateType& dischDate){
		disch_date = dischDate;
	}


 //Accessor functions

	/**Gets the area of Patient's ID number
	@return the ID  as an int
	*/
	int getP_ID() const{ return ID; }

	/*Gets the area of Patient's age
	@return the age as an int
	*/
	int getP_Age() const{ return Age; }

	/*Gets the area of Patient's Doctor specialty
	@return the doc_specialty as a string
	*/
	DoctorType getP_Doc() const{ return doc_type; }

	/*Gets the area of Patient's dob
	@return the dob as a DateType
	*/
	DateType getP_DOB() const{ return dob; }

	/*Gets the area of Patient's admission date
	@return the admit_date as a DateType
	*/
	DateType getP_AdmitDte() const{ return admit_date; }

	/*Gets the area of Patient's discharge date
	@return the disch_date as a DateType
	*/
	DateType getP_DischDte() const{ return disch_date; }

	virtual string to_string() const;

private:
	int ID;
	int Age;
	DoctorType doc_type;
	DateType dob;
	DateType admit_date;
	DateType disch_date;

};