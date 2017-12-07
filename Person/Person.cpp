/** Implementation file for the class Person. */
#include "Person.h"
#include <ostream>

using namespace std;
/** Calculates a person's age at this year's birthday.
@param year The current year
@return the year minus the birth year
*/
int Person::age(int year) const {
	return year - birth_year;
}

/** Switches the given name and the family names.
@return the names as a string
*/
void exchange(Person& per)
{
	string temp;
	temp = per.get_given_name(); //temp = a
	per.set_given_name(per.get_family_name()); // a = b
	per.set_family_name(temp); // b = temp

}

/** Determines whether a person can vote.
@param year The current year
@return true if the person's age is greater than or
equal to the voting age
*/
bool Person::can_vote(int year) const {
	//int the_age = age(year);
	return age(year) >= VOTE_AGE;
}

/** Determines whether a person is a senior citizen.
@param year the current year
@return true if person's age is greater than or
equal to the age at which a person is
considered to be a senior citizen
*/
bool Person::is_senior(int year) const {
	return age(year) >= SENIOR_AGE;
}

/** Compares two Person objects for equality.
@param per The second Person object
@return true if the Person objects have same
ID number; false if they don't
*/
bool Person::operator==(const Person& per) const {

	return (ID_number == per.ID_number) && (mother_maiden_name == per.mother_maiden_name);

}

/** Compares two Person objects for inequality.
@param per The second Person object
@return The opposite of the equality operator
*/
bool Person::operator!=(const Person& per) const {
	return !( );
}

/** Compares two Person objects for lesser.
@param per The second Person object
@return true if the ID number of operator object
is less than the ID number of Person object;
false if greater than.
*/
bool Person::operator <(const Person& per) const
{
	return (ID_number < per.ID_number);
}

/** Compares two Person objects for the greater.
@param per The second Person object
@return true if the ID number of operator object
is greater than the ID number of Person object;
false if less than.
*/
bool Person:: operator>(const Person& per) const
{
	return (ID_number > per.ID_number);
}

/** Compares two Person objects for greater than or equal to.
@param per The second Person object
@return true if the ID number of operator object
is greater than or equal to the ID number of Person object;
false if either less than or not equal to.
*/
bool Person::operator>=(const Person& per) const
{
	return (ID_number >= per.ID_number);
}

/** Retrieves the information in a Person object
and formats it for output. The result is
then inserted into the target ostream.
@param os The target ostream
@param per The source Person
@return The modified ostream after the data has
been inserted.
*/
ostream& operator<<(ostream& os, const Person& per) {
	 os << "Given name: " << per.given_name << '\n'
		<< "Family name: " << per.family_name << '\n'
		<< "Mother's maiden name :" << per.mother_maiden_name << '\n'
		<< "ID number: " << per.ID_number << '\n'
		<< "Year of birth: " << per.birth_year << '\n';

	return os;
}

/** Gets the person's initials.
@return the initials as a string with period after each initial
*/
string Person::get_initials(const Person& per) const
{
	// put the names into variables
	string f_name = per.get_family_name(); 
	string g_name = per.get_given_name();

	// then get the first letter of each 
	string ini = f_name.substr(0,1) + '.' + g_name.substr(0,1) + '.';
	return ini; 
}




