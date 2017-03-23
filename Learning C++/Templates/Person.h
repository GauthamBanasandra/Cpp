#pragma once
#include <iostream>

class Person
{
public:
	Person();
	Person(int, std::string);
	// Invokes for "person1 < person2"
	bool operator<(Person &);
	// Invokes for "person1 < 200"
	bool operator<(int);
	~Person();
private:
	int age;
public:
	std::string name;
	int GetAge();
};

#pragma once
