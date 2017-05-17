#include "Person.h"


Person::Person()
{
	age = 0;
}

Person::Person(int _age, std::string _name) : age(_age), name(_name)
{
	if (_age == 0)
	{
		// Throwing an exception with message.
		throw std::invalid_argument("age can not be 0");
	}
}

bool Person::operator<(Person &person)
{
	return age < person.age;
}

bool Person::operator<(int _age)
{
	return age < _age;
}


int Person::GetAge()
{
	return age;
}
