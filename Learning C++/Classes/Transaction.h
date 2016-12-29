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
	void DoubleValue();
	std::string GetTransaction();
	~Transaction();
};
