// Programmer : Morayo Ogunsina
// Section    : #002
// Lab        : #7
// Date       : Feb 29, 2016
// Description: DateType, PersonType ,PatientType and DoctorType classes (Inheritance and Overloading).

/** Test is an application that tests the classes indicated in the descrription. */


#include <iostream>
#include "DateType.h"
#include "DoctorType.h"
#include "PatientType.h"

using namespace std;

int main()
{
	PersonType *P1;
    P1 = new PersonType("Emily","Blunt");
	cout << " Person 1:" << endl;
	cout << *P1;
	cout << endl;
	PersonType PTy;

	DateType *D1;
	D1 = new DateType(15, 9, 1995);
	cout << " Date:" << endl;
    cout << *D1;
	cout << endl;

	DoctorType DC1("Andrew", "Don Pizza", "Ornithologist");
	cout << " Person 3: Doctor " << endl;
	cout << DC1.to_string() << endl;
	

	PatientType *Patient1;
	DateType  Patient1_D(21, 05, 1993);
	DateType  Patient1_Admit(15, 02, 2015);
	DateType  Patient1_Disch(06, 03, 2015);

	Patient1 = new PatientType("Clive","Holland", 115, 200, DC1, Patient1_D, Patient1_Admit, Patient1_Disch);
	cout << " Person 4:" << endl;
	cout << *Patient1;

}