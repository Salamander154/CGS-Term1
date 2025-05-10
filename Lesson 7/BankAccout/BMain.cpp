#include <iostream>
#include <string>
#include "BankAccount.h"
using namespace std;

int main()
{
	string number;
	double money;
	BankAccount* fAccount = new BankAccount;
	fAccount->Display();
	delete fAccount;

	cout << "Please make your account number.  \n";
	cin >> number;
	cout << "How much money do you have? \n";
	cin >> money;
	BankAccount* yourAccount = new BankAccount(money, number);
	yourAccount->Display();
	delete yourAccount;

}