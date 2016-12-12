#include "Account.h"
#include <random>

using namespace std;

Account::Account() :balance(0), account_id(rand()), trans_manager(TransactionsManager(account_id))
{
}

bool Account::Deposit(int amount)
{
	if (amount > 0)
	{
		balance += amount;
		trans_manager.AddTransaction("Deposit", amount);

		return true;
	}
	return false;
}

bool Account::Withdraw(int amount)
{
	if (amount > 0)
		if (balance > amount)
		{
			balance -= amount;
			trans_manager.AddTransaction("Withdraw", amount);

			return true;
		}
	return false;
}

int Account::GetBalance()
{
	return balance;
}

vector<string> Account::Report()
{
	return trans_manager.Report();
}


Account::~Account()
{
}
