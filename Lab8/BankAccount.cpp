//Implementation of the BankAccount Class
#include <sstream>
#include "BankAccount.h"

string BankAccount::to_string() const{
	ostringstream os;
	os << "  **** ACCOUNT DETAILS **** \n "
		<< "ACCOUNT NUMBER :" << AccNumber << " \n "
		<< "ACCOUNT BALANCE:" << "$" << AccBalance  << " \n "
		<< "  " << endl;
	return os.str();
}

/*Deposits Money: increament the Balance by the deposit
@ no return value
*/
void BankAccount::DepositAmmount(double amnt)
{
	AccBalance += amnt;
}

/* decrement the Balance by the withdrawal amnt
@ no return value
*/
void BankAccount::WithdrawAmmount(BankAccount& acc)
{
	double ammount = 0; // variable to store the total balance
	ammount = ammount - acc.getAccBal(); // subtract the withdrawal ammt from the balance
	acc.setAccBal(ammount); //set the new balance to this.
}
ostream& operator<<(ostream& os, const BankAccount& acc) {
	return os << acc.to_string();
}
