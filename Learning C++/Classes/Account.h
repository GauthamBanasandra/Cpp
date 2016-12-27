#pragma once
#include "TransactionsManager.h"
/*
* Declare the prototype (skeleton) of the class in the header file and then write its implementation in a .cpp file.
* Never do a 'using namespace' in the header files, as it might lead to conflicts in the .cpp file where this header file would be imported.
* Always use the fully qualified namespace in the header files.
*/
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
	// Inline function. Compiler optimizes these kind of functions.
	int GetBalance() { return balance; }
	std::vector<std::string> Report();
	~Account();
};
// Note that every class definition ends with a ';'