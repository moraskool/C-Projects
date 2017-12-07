//Implementation of the CheckingAccount class
#include <sstream>
#include "CheckingAccount.h"

string CheckingAccount::to_string() const{

	ostringstream os;
	os  << " INTERST RATE : " << intRate << "%\n"
		<< " SERVICE CHARGE : " << "$" <<ServCharge << "\n"
		<< " MINIMUM BALANCE :" << "$"<< MinBalance << endl
	    << BankAccount::to_string() << endl;

	return os.str();
}

/*Posts Interest: add the interest to the balance
@ param acc CheckingAccount object
*/
void CheckingAccount::PostInterest(CheckingAccount& acc)
{
    // variable to store the interest
	AccBalance += ((intRate / 100) * acc.getAccBal()); // get the interest amt from the interest rate
	acc.setAccBal(AccBalance); //set this to the balance
}

/** Determines if balance is less than minBalance.
@param acc CheckingAccount object
@return true if the balacne is less than the minimum balance
*/
bool CheckingAccount::Bal_is_less(CheckingAccount& acc) const
{  
	return acc.getAccBal() < acc.getMinBal(); //check if the Bal is les than the minimum Bal.
}

/** Writes a check by .
@ the account balance
@no return value .
*/
void CheckingAccount:: WriteCheck(double bal)  
{
	WithdrawAmmount(bal);
}

/* decrement the Balance by the withdrawal amnt
@ no return value
*/
void CheckingAccount ::WithdrawAmmount(double bal)
{
	bal -= AccBalance;
}