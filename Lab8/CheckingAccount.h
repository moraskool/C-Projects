#pragma once
#include<iostream>
#include"BankAccount.h"
using namespace std;

/**CheckingAccount is derived from the BankAccount class**/
class CheckingAccount  : public BankAccount {
public:
	// Constructors
	/** Construct a CheckingAccount with given values.
	@param Num The Account number
	@param Bal The Account Balance
	*/
	CheckingAccount(int Num, double Bal,double intrstRte,double minBal,double charge) 
		: BankAccount(Num, Bal), intRate(intrstRte), MinBalance(minBal), ServCharge(charge){}

	/**Construct a default CheckingAccount**/
	CheckingAccount() : BankAccount(550223 ,1000.0), intRate(3.55), MinBalance(100.0) {}

	//Modifier functions

	/**sets the InterestRate Field
	@param given intrstRte
	**/
	void setInrstRate(const double& intrstRte){
		intRate = intrstRte;
	}
	/**sets the MinBalance field
	@param given minBal
	**/
	void setMinBal(const double& minBal){
		MinBalance = minBal;
	}
	/**sets the ServiceCharge field
	@param given charge
	**/
	void setSerChrg(const double& charge){
		ServCharge = charge;
	}

	//Accessor functions
	/*Gets the Interest Rate
	@return the Interest Rater as a double
	*/
	double getInrstRate() const{ return intRate; }

	/*Gets the Minimum Balance
	@return the minimum Balance as a double
	*/
	double getMinBal() const{ return MinBalance; }

	/*Gets the Service charge
	@return the service charge as a double
	*/
	double getSerChrg() const{ return ServCharge; }

	//Other functions

	/*Posts Interest: increament the Balance by the interest
	@ param acc CheckingAccount object
	*/
	void PostInterest(CheckingAccount& acc);

	/** Determines if balance is less than minBalance.
	@param acc CheckingAccount object
	@return true if the balacne is less than the minimum balance
	*/
	bool Bal_is_less(CheckingAccount& acc) const;

	/** Writes a check by .
	@ the account balance
	@no return value .
	*/
	void WriteCheck(double bal) ;

	/* decrement the Balance by the withdrawal amnt
	@ no return value
	*/
	void WithdrawAmmount(double bal);

	virtual string to_string() const;
	//string to_string() const;

   	

private:
	double intRate;
	double MinBalance;
	double ServCharge;
};