#pragma once
#include "TransactionsManager.h"

class Account
{
private:
	int balance;
	int account_id;
	TransactionsManager trans_manager;
public:
	Account();
	bool Deposit(int);
	bool Withdraw(int);
	int GetBalance();
	std::vector<std::string> Report();
	~Account();
};
