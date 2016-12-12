#pragma once
#include "Transaction.h"

class TransactionsManager
{
private:
	int account_id;
	std::vector<Transaction> transactions;
public:
	TransactionsManager(int);
	std::vector<std::string> Report();
	void AddTransaction(std::string, int);
	void AddTransaction(Transaction);
	~TransactionsManager();
};