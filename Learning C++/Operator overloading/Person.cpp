#include "Person.h"



Person::Person()
{
	age = 0;
}

Person::Person(int _age, std::string _name) : age(_age), name(_name)
{
}

bool Person::operator<(Person &person)
{
	return age < person.age;
}

bool Person::operator<(int _age)
{
	return age < _age;
}

Person::~Person()
{
}


int Person::GetAge()
{
	return age;
}
