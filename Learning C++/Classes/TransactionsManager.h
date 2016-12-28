#pragma once
#include "Transaction.h"

class TransactionsManager
{
private:
	int account_id;
	std::vector<Transaction> transactions;
public:
	TransactionsManager(int);
	// Constant function (const) is a function that doesn't alter any of the member variables.
	std::vector<std::string> Report() const;
	void AddTransaction(std::string, int);
	void AddTransaction(Transaction);
	~TransactionsManager();
};