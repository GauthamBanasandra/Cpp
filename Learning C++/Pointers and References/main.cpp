#include <iostream>
#include <string>
#include "Person.h"

int main(int argc, char* argv[])
{
	int num = 4;
	// Pointer to num.
	int *numptr = &num;
	*numptr = 6;
	std::cout << "numptr value:\t" << *numptr << std::endl;

	// Reference to num.
	// A reference is like an alias. Just use it as you would use the variable.
	int &numref = num;
	numref = 5;
	std::cout << "numref value:\t" << numref << std::endl;

	Person p1(20, "Jack");
	// Pointer to Person.
	Person *person_ptr = &p1;
	// Access the pointer to a class using the arrow operator ->
	std::cout << "name:\t" << person_ptr->name << std::endl;

	// Reference to Person.
	Person &person_ref = p1;
	// Access the reference to instance in the normal way since the reference is just an alias to the Person instance.
	std::cout << "name:\t" << person_ref.name << std::endl;

	return 0;
}
