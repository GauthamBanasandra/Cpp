#pragma once
#include <string>
#include <vector>

class Transaction
{
private:
	std::string type;
	int value;
public:
	Transaction(std::string, int);
	std::string GetTransaction();
	~Transaction();
};
