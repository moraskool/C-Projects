#ifndef PERSON_H_
#define PERSON_H_
#include <string>

using namespace std;
/** Person is a class that represents a human being. */
class Person {
public:
	// Constructors
	/** Construct a person with given values.
	@param first The given name
	@param family The family name
	@param mother_maiden_name The mother's maiden name
	@param ID The ID number
	@param birth The birth year
	*/
	Person(string first, string family, string maiden_name, string ID, int birth) :
		given_name(first), family_name(family), mother_maiden_name(maiden_name),
		ID_number(ID),birth_year(birth) {}

	/** Construct a default person. */
	Person() : given_name(""), family_name(""),mother_maiden_name(""), ID_number(""),
		birth_year(1900) {}


	// Modifier Functions
	/** Sets the given_name field.
	@param given The given name
	*/
	void set_given_name(const string& given) {
		given_name = given;
	}

	/** Sets the family_name field.
	@param family The family name
	*/
	void set_family_name(const string& family) {
		family_name = family;
	}

	/** Sets the mother_maiden_name field.
	@param mother_maiden_name The mother's maiden name
	*/
	void set_maiden_name(const string& maiden_name) {
		mother_maiden_name = maiden_name;
	}

	/** Sets the birth_year field.
	@param birth The year of birth
	*/
	void set_birth_year(int new_birth_year) {
		birth_year = new_birth_year;
	}


	// Accessor Functions
	/** Gets the person's given name.
	@return the given name as a string
	*/
	string get_given_name() const { return given_name; }

	/** Gets the person's family name.
	@return the family name as a string
	*/
	string get_family_name() const { return family_name; }

	/** Gets the person's mother's maiden name.
	@return the mother's maiden name as a string
	*/
	string get_maiden_name() const { return mother_maiden_name; }

	/** Gets the person's ID number.
	@return the ID number as a string
	*/
	string get_ID_number() const { return ID_number; }

	/** Gets the person's year of birth.
	@return the year of birth as an int value
	*/
	int get_birth_year() const { return birth_year; }


	// Other Functions
	/** Calculates a person's age at this year's birthday.
	@param year The current year
	@return the year minus the birth year
	*/
	int age(int year) const;

	/** Switches the given name and the family names.
	@return the names as a string
	*/
	void exchange(Person& per);

	/** Determines whether a person can vote.
	@param year The current year
	@return true if the person's age is greater than or
	equal to the voting age
	*/
	bool can_vote(int year) const;

	/** Determines whether a person is a senior citizen.
	@param year the current year
	@return true if person's age is greater than or
	equal to the age at which a person is
	considered to be a senior citizen
	*/
	bool is_senior(int year) const;

	/** Compares two Person objects for equality.
	@param per The second Person object
	@return true if the Person objects have the same
	ID number; false if they don't
	*/
	bool operator==(const Person& per) const;

	/** Compares two Person objects for inequality.
	@param per The second Person object
	@return the negation of the equals operator
	*/
	bool operator!=(const Person& per) const;

	/** Compares two Person objects for lesser.
	@param per The second Person object
	@return true if the ID number of operator object
	is less than the ID number of Person object;
	false if greater than
	*/
	bool operator<(const Person& per) const;

	/** Compares two Person objects for the greater.
	@param per The second Person object
	@return true if the ID number of operator object 
	is greater than the ID number of Person object; 
	false if less than
	*/
	bool operator>(const Person& per) const;

	/** Compares two Person objects if greater and equal.
	@param per The second Person object
	@return true if the ID number of operator object
	is less than the ID number of Person object;
	false if either less than or not equal to
	*/
	bool operator>=(const Person& per) const;

	/** Declaration of the stream insertion operator for Person.
	@param os The target ostream
	@param per The Person object being output
	@return The updated output stream
	*/
	friend ostream& operator << (ostream& os, const Person& per);

	/** Gets the person's initials.
	@return the initials as a string with period after each initial
	*/
	string get_initials(const Person& per) const;

		

private:
	// Data Fields
	/** The given name. */
	string given_name;
	/** The family name. */
	string family_name;
	/*The mother's maiden name*/
	string mother_maiden_name;
	/** The ID number. */
	string ID_number;
	/** The birth year. */
	int birth_year;


	// Constants
	/** The age at which a person can vote. */
	static const int VOTE_AGE = 18;
	/** The age at which a person is considered a senior citizen. */
	static const int SENIOR_AGE = 65;
};

#endif
