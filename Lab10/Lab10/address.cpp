//Implementation of the address Class
#include <sstream>
#include "address.h"

string address::to_string() const{
	ostringstream os;
	 os << "  **** BUYER DETAILS **** \n "
		<< "STREET NAME :" << StreetName << " \n "
		<< "STREET NUMBER :" << StreetNumber << " \n "
		<< "CITY NAME :" << CityName << " \n "
		<< "ZIP CODE:"  << ZipCode << " \n "
		<< "  " << endl;
	return os.str();
}


/** Compares two address objects for equality.
@param per The second address object
@return true if all data variables are equal;
false if they don't
*/
bool address::operator==(const address& add) const {

	return
		(StreetName == add.StreetName) && (CityName == add.CityName)
		 && (ZipCode == add.ZipCode) && (StreetNumber == add.StreetNumber) ;
}


ostream& operator<<(ostream& os, const address& add) {
	return os << add.to_string();
}

 address address :: inputAddress()
{
	address addr;
	int SNum,Zcde;
	string SName,CtyNme;

	cout << "Enter the Street Name : ";
	cin >> SName;
	addr.setStreetName(SName);

	cout << "Enter the Street Number : ";
	cin >> SNum;
	addr.setStreetNumber(SNum);

	cout << "Enter the City Name : ";
	cin >> CtyNme;
	addr.setCityName(CtyNme);

	cout << "Enter the ZipCode : ";
	cin >> Zcde;
	addr.setZipCode(Zcde);

	return addr;
}