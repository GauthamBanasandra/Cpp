#include "Person.h"
#include <iostream>
#include <vector>

void exception_throw();
void custom_exception();

int main(int argc, char* argv[])
{
	exception_throw();
	custom_exception();

	return 0;
}

void exception_throw()
{
	try
	{
		std::vector<int> numbers;
		numbers.push_back(1);

		int number = numbers.at(99);
	}
	catch (std::out_of_range &e) // Catching an 'out of range' exception.
	{
		// e.what() contains the message.
		std::cout << e.what() << std::endl;
	}
}

void custom_exception()
{
	try
	{
		Person p(0, "Jack");
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}