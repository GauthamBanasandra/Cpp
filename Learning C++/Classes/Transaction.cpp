#include <string>
#include "Transaction.h"

using namespace std;

Transaction::Transaction(string type, int value) :type(type), value(value)
{
}

string Transaction::GetTransaction()
{
	return type + "\t" + to_string(value);
}


Transaction::~Transaction()
{
}
