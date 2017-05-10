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
	virtual ~Person() {};
	virtual std::string GetName() const { return name; }
private:
	int age;
	std::string name;
public:
	int GetAge();
};

