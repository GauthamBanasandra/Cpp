#pragma once
#include <iostream>
#include <string>
class Resource
{
private:
	std::string name;

public:
	Resource() :name("")
	{
	}

	Resource(std::string _resource) :name(_resource)
	{
		std::cout << "Allocating resource for: " << name << std::endl;
	}

	std::string GetResource() const { return name; }

	~Resource()
	{
		std::cout << "De-allocating resource for: " << name << std::endl;
	}
};

