#pragma once
#include <string>

class Martian
{
private:
	std::string name;
public:
	Martian()
	{
	}
	Martian(std::string _name) :name(_name) {}
	
	std::string GetName() const { return name; }
	virtual ~Martian()
	{
	}
};

