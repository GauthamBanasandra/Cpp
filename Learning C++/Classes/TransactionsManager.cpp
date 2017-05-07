#include "TransactionsManager.h"
#include <string>

using namespace std;

TransactionsManager::TransactionsManager(int id) :account_id(id)
{
}

// Constant function (const) is a function that doesn't alter any of the member variables.
vector<string> TransactionsManager::Report() const
{
	vector<string> report;
	// Use the to_string() method to convert to string.
	report.push_back("Account number:\t" + to_string(account_id));
	for (auto transaction : transactions)
		report.push_back(transaction.GetTransaction());
	return report;
}

void TransactionsManager::AddTransaction(string type, int value)
{
	// push_back() method is analogous to append() in python.
	// Note that you don't use the "new" keyword to create a new instance.
	transactions.push_back(Transaction(type, value));
	/*
	* Note - Instantiation for a class with attributes must be done like this -
	* Transaction t('Deposit', 100);
	* Don't do - Transaction t = Transaction('Deposit', 100);
	* The above line is valid but it's not usually done.
	*/
}

void TransactionsManager::AddTransaction(const Transaction& transaction)
{
	transactions.push_back(transaction);
}

TransactionsManager::~TransactionsManager()
{
}