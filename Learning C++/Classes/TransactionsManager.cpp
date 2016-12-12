#include "TransactionsManager.h"

using namespace std;

TransactionsManager::TransactionsManager(int id) :account_id(id)
{
}

vector<string> TransactionsManager::Report()
{
	vector<string> report;
	report.push_back("Account number:\t" + to_string(account_id));
	for (auto transaction : transactions)
		report.push_back(transaction.GetTransaction());
	return report;
}

void TransactionsManager::AddTransaction(string type, int value)
{
	transactions.push_back(Transaction(type, value));
}

void TransactionsManager::AddTransaction(Transaction transaction)
{
	transactions.push_back(transaction);
}

TransactionsManager::~TransactionsManager()
{
}