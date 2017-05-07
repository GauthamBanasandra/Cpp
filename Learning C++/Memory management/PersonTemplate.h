#pragma once
#include <string>
#include "Resource.h"

class PersonTemplate
{
private:
	std::string first_name;
	std::string last_name;
	int id;
	// Be cautious, here's a pointer member variable.
	// So, to handle it more robustly, we need to implement - a copy constructor, overload '=' operator.
	Resource *resource;

public:
	PersonTemplate() :first_name(""), last_name(""), id(0), resource(nullptr) {}
	PersonTemplate(std::string, std::string, int);
	// Copy constructor.
	PersonTemplate(const PersonTemplate &);

	// Overloading '=' operator.
	PersonTemplate& operator=(const PersonTemplate &p);
	void SetFirstName(std::string _first_name) { first_name = _first_name; }
	void SetLastName(std::string _last_name) { last_name = _last_name; }
	void setId(int _id) { id = _id; }

	void AddResource();
	~PersonTemplate();
};

