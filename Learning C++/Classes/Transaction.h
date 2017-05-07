#pragma once
#include <vector>

class Transaction
{
private:
	std::string type;
	int value;
public:
	Transaction(std::string, int);
	void DoubleValue() { value *= 2; };
	std::string GetTransaction() const;
	~Transaction();
};
