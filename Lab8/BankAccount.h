#pragma once
#include<iostream>
#include<string>
#include<ios>
#include <sstream>
using namespace std;

/**BankAccount is a base class for other classes**/
class BankAccount {
public :
	// Constructors
	/** Construct a BankAccount with given values.
	@param Num The Account number
	@param Bal The Account Balance
	*/
	BankAccount(int Num, double Bal) : AccNumber(Num), AccBalance(Bal){}
	/**Construct a default BankAccount**/
	BankAccount() :AccNumber(), AccBalance(){}

	//Modifier functions

	/**sets the AccNumber field
	@param given Num
	**/
	void setAccNum(const int& Num){
		AccNumber = Num;
	}
	/**sets the AccBalance field
	@param given Bal
	**/
	void setAccBal(const double& Bal){
		AccBalance = Bal;
	}

	//Accessor functions
	/*Gets the Account Number
	@return the AccNumber as an int
	*/
	int getAccNum() const{ return AccNumber; }

	/*Gets the Account's Balance
	@return the AccBal as a double
	*/
	double getAccBal() const{ return AccBalance; }

	//Other functions

	/*Deposits Money: increament the Balance by the deposit
	@ no return value
	*/
	void DepositAmmount(double amnt) ;

	/* decrement the Balance by the withdrawal amnt
	@ no return value
	*/
	void WithdrawAmmount(BankAccount& acc);

	virtual string to_string() const;
	//string to_string() const;

	friend ostream& operator<<(ostream& os, const BankAccount& acc);

protected:
	int AccNumber;
	double AccBalance;
};