//Implementation of the SavingsAccount class
#include <sstream>
#include "SavingsAccount.h"

string SavingsAccount::to_string() const{

	ostringstream os;
	os << " ANNUAL INTERST RATE : " << given_intRate << "%\n" 
	   << " DEPOSIT AMMOUNT : " << given_Deposit  << endl
		<< BankAccount::to_string() << endl;

	return os.str();
}

/*Calculate the monthly interest rate.
@ param annintRte
*/
void SavingsAccount::CalcMontInRte(double annIntRte)
{
	double monthIntrate; // variable to store the interest
	monthIntrate = (annIntRte / 12.0);
}

/* decrement the Balance by the withdrawal amnt. Override the WithdrawAmmount in the base class
@ no return value
*/
void SavingsAccount:: WithdrawAmmount(double bal)
{
	bal -= AccBalance;
}