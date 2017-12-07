// Programmer : Morayo Ogunsina
// Section    : #002
// Lab        : #8
// Date       : March 14, 2016
// Description: BankAccount, CheckingAccount and SavingsAccount  .

/** TestBack is an application that tests the classes indicated in the description. */


#include <iostream>
#
#include "BankAccount.h"
#include "SavingsAccount.h"
#include "CheckingAccount.h"

using namespace std;

int main()
{
	BankAccount B1(55008, 1590);
	BankAccount B2(66633, 10);
	cout << "BankAccount 1:" << endl;
	cout << B1;
	B1.DepositAmmount(1500);
	cout << "BankAccount 1:" << endl;
	cout << B1;
	
	CheckingAccount C1(11500, 1200, 2.09, 1000, 5.00);
	cout << "CheckingAccount 1:" << endl;
	cout << C1;
	C1.setAccNum(550022);
	cout << "New Account Number of C1 : " << C1.getAccNum() << endl;
	C1.setInrstRate(5.41);
	C1.PostInterest(C1);
	cout << "New account Balance with Interest of " << C1.getInrstRate() << "%: $" << C1.getAccBal() << endl;
	cout << "**********" << endl;
	C1.setMinBal(1500);
	if (C1.Bal_is_less(C1))
	{
		cout << "Your Balance is less than the minimum balance.\n"
			 << "You have been charged a sevice charge of $" << C1.getSerChrg() << endl;
		
	}
	cout << "*********" << endl;
	SavingsAccount S1(55008, 550.77, 9.5, 2000);
	cout << "SavingsAccount 1:" << endl;
	cout << S1;

}