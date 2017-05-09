#pragma once
// This class is a copy of PersonTemplate, where the changes demonstrate the use of smart pointers.
// Smart pointers is a library for memory management. This helps in avoiding memory leaks and other problems 
// related to memory management.

#include <string>
#include "Resource.h"
#include <memory>

class PersonTemplateSmartPtr
{
private:
	std::string first_name;
	std::string last_name;
	int id;
	// Be cautious, here's a pointer member variable.
	// So, to handle it more robustly, we need a shared pointer.
	std::shared_ptr<Resource> resource;

public:
	// There's no need for Copy constructor or overloading '=' operator. shared_ptr takes care of that.
	PersonTemplateSmartPtr() :first_name(""), last_name(""), id(0), resource(nullptr) {}
	PersonTemplateSmartPtr(std::string, std::string, int);
	void SetFirstName(std::string _first_name) { first_name = _first_name; }
	void SetLastName(std::string _last_name) { last_name = _last_name; }
	void setId(int _id) { id = _id; }

	void AddResource();
	~PersonTemplateSmartPtr();
};

