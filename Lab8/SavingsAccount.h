#pragma once
#include<iostream>
#include"BankAccount.h"
using namespace std;

/**SavingsAccoun is derived from the BankAccount class**/
class SavingsAccount : public BankAccount {
public:
	// Constructors
	/** Construct a SavingsAccount with given values.
	@param Num The Account number
	@param Bal The Account Balance
	@param annIntRte The given annual interest rate
	@param deposit The given deposit
	*/
	SavingsAccount(int Num, double Bal, double annIntRte, double deposit)
		: BankAccount(Num, Bal), given_intRate(annIntRte), given_Deposit(deposit){}

	/**Construct a default SavingsAccount**/
	SavingsAccount() : BankAccount(990117, 1500.0), given_intRate(10.55), given_Deposit(100.0) {}

	//Modifier functions

	/**sets the InterestRate Field
	@param given intrstRte
	**/
	void setAnnInrstRate(const double& annIntRte){
		given_intRate = annIntRte;
	}
	/**sets the MinBalance field
	@param given minBal
	**/
	void setDeposit(const double& deposit){
		given_Deposit = deposit;
	}

	//Other functions

	/*Calculate the monthly interest rate.
	@ param annintRte
	*/
	void CalcMontInRte(double annIntRte);

	/* decrement the Balance by the withdrawal amnt,decrement the Balance by the withdrawal amnt. Override the WithdrawAmmount in the base class
	@ no return value
	*/
	void WithdrawAmmount(double bal);

	virtual string to_string() const;

private:
	double given_intRate;
	double given_Deposit;
};