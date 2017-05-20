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
	/*
	* The parameter represents a reference to a Transaction object which is constant.
	* In C++, parameters are passed by value. Any change made to the parameter in the called fuction isn't reflected to that in the calling function. 
	* Also, the object contents are physically copied when they are passed as parameters to functions.
	* You can pass just the reference by suffixing an &. All changes to object in called function are reflected in the calling function.
	* But making it a const will ensure that the function doesn't alter its contents.
	* In short, a constant refrence avoids copying of parameters also protects it against unintended data manipulation.
	* Parameters are passed without any special qualifications. e.g. tm.AddTransaction(t);
	*/
	void AddTransaction(const Transaction&);
	~TransactionsManager();
};