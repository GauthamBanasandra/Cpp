#pragma once
#include "Person.h"

class Twitterati : public Person
{
private:
	std::string handle;
public:
	Twitterati(std::string name, std::string _handle, int age) :Person(age, name), handle(_handle) {};
	std::string GetName() const;
	~Twitterati();
};

