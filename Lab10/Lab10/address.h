#pragma once
#include<iostream>
#include<string>
#include <sstream>
using namespace std;

/**address is a base class for other classes**/
class address {
public:
	// Constructors
	/** Construct an address with given values.
	@param Num The Account number
	@param Bal The Account Balance
	*/
	address(string nme, string city, int strtNum, int zpCode) 
		: StreetName(nme), CityName(city), StreetNumber(strtNum), ZipCode(zpCode){}
	/**Construct a default address**/
	address() :StreetName(" "), CityName(" "), StreetNumber(), ZipCode(){}

	//Modifier functions

	/**sets the GivenName field
	@param given nme
	**/
	void setStreetName(const string& nme){
		StreetName = nme;
	}
	/**sets the CityName field
	@param given city
	**/
	void setCityName(const string& city){
		CityName = city;
	}

	/**sets the StreetNumber field
	@param given strtNum
	**/
	void setStreetNumber(const int& strtNum){
		StreetNumber = strtNum;
	}

	/**sets the ZipCode field
	@param given zpCode
	**/
	void setZipCode(const int& zpCode){
		ZipCode = zpCode;
	}


	//Accessor functions
	/*Gets the Given Name
	@return the Given Name as a string
	*/
	string getStreetName() const{ return StreetName; }

	/*Gets the City's Name
	@return the CityName as a string
	*/
	string getCityName() const{ return CityName; }

	/*Gets the Street's number
	@return the streetNumber as an int
	*/
	int getStreetNumber() const{ return StreetNumber; }

	/*Gets the Zip Code
	@return the ZipCode as an int
	*/
	int getZipCode() const{ return ZipCode; }

	//Other functions

	/** Compares two address objects for equality.
	@param per The second address object
	@return true if all the data variables of the objects
	 are the same; false if they aren't
	*/
	bool operator==(const address& add) const;

	virtual string to_string() const;

	/** Declaration of the stream insertion operator for address.
	@param os The target ostream
	@param per The address object being output
	@return The updated output stream
	*/
	friend ostream& operator<<(ostream& os, const address& add);

	address inputAddress();

protected:
	string StreetName;
	string CityName;
	int ZipCode;
	int StreetNumber;
	
};