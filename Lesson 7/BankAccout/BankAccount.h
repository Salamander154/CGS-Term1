#pragma once
#include <string>
using namespace std;

class BankAccount
{
	double m_money;
	string m_accountNumber;
public:
	BankAccount();
	BankAccount(double money, string accountNumber);

	~BankAccount();

	void Display();
	void removeMoney(double money);
	void addMoney(double money);

};