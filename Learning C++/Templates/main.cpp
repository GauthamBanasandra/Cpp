#include <iostream>
#include <string>
#include "Person.h"
#include "Accumulator.h"

// Declare a template.
// 'T' is the placeholder for any kind of class (including primitive types).
template <class T>
T max(T &t1, T &t2)
{
	return t1 < t2 ? t2 : t1;
}

int main()
{
	Person p1(10, "Tom");
	Person p2(20, "Jack");

	std::cout << "max(Tom, Jack) is " << max(p1, p2).name << std::endl;
	// Doesn't work for primitive types. Find out why
	 //std::cout << "max of 1, 2 is " << max(1, 2) << std::endl;

	// Accumulator for int.
	Accumulator<int> integer_acc(0);
	integer_acc += 1;
	integer_acc += 5;
	std::cout << "integer accumulator total:\t" << integer_acc.GetTotal() << std::endl;

	// Accumulator for string.
	Accumulator<std::string> string_acc("");
	string_acc += "hello ";
	string_acc += "world";
	std::cout << "string accumulator concantenation:\t" << string_acc.GetTotal() << std::endl;

	// Accumulator for Person - through template specialization.
	Accumulator<Person> people(0);
	people += p1;
	people += p2;
	std::cout << "sum of ages of Tom and Jack:\t" << people.GetTotal() << std::endl;

	return 0;
}