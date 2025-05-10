#include <iostream>
#include "BankAccount.h"
using namespace std;

BankAccount::BankAccount()
	:m_money(0)
	,m_accountNumber("N/A")
{

}
BankAccount::BankAccount(double money, string accountNumber)
	:m_money(money)
	,m_accountNumber(accountNumber)
{

}

BankAccount::~BankAccount()
{
	cout << "Bank Acount DESTROYED \n";
}

void BankAccount::Display()
{
	cout << "Money: " << m_money << "\n";
	cout << "Account Number: " << m_accountNumber << "\n";
}
void BankAccount::removeMoney(double money)
{
	m_money = m_money - money;
}
void BankAccount::addMoney(double money)
{
	m_money = m_money + money;
}