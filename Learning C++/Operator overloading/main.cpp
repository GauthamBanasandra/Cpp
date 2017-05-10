#include <iostream>
#include <string>
#include "Person.h"

int main()
{
	Person p1(10, "Tony");
	Person p2(2, "Stark");
	
	std::cout << "name: " << p1.GetName() << std::endl << "age: " << p1.GetAge() << std::endl;
	// Operator overloading - comparing person object (compares age).
	std::cout << "Tony's age less than Stark's? " << ((p1 < p2) ? "true" : "false") << std::endl;
	// Operator overloading - comparing person object with int (compares age).
	std::cout << "Tony's age less than 200? " << ((p1 < 200)?"true":"false") << std::endl;
	return 0;
}