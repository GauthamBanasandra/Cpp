#include <iostream>
#include "Account.h"
#include "Param pass.h"

using namespace std;

int main()
{
	Account a1;
	int num_trans = 0, val = 0;
	string trans;

	cout << "Enter number of transactions:\t";
	cin >> num_trans;
	cout << "(d-deposit | w-withdraw) value:" << endl;

	for (int i = 0; i < num_trans; i++)
	{
		cin >> trans >> val;
		if (trans == "d")		
			a1.Deposit(val) ? cout << "Success" << endl : cout << "Failure" << endl;
		else if (trans == "w")
			a1.Withdraw(val) ? cout << "Success" << endl : cout << "Failure" << endl;
		else
			break;
	}

	cout << endl;
	for (auto line : a1.Report())
		cout << line << endl;
	cout << "Balance:\t" << a1.GetBalance() << endl;

	Transaction t("Deposit", 50);
	cout << "Doubling the value:" << endl;
	TryDoubling_val(t);
	cout << "By passing value:\t" << t.GetTransaction() << endl;
	TryDoubling_ref(t);
	cout << "By passing reference:\t" << t.GetTransaction() << endl;

	return 0;
}