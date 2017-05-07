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
	Person *person_ptr = nullptr;	// Always initialize pointers with something - nullptr.
	person_ptr = &p1;

	// Access the pointer to a class using the arrow operator ->
	std::cout << "name:\t" << person_ptr->name << std::endl;

	// Reference to Person.
	Person &person_ref = p1;
	// Access the reference to instance in the normal way since the reference is just an alias to the Person instance.
	std::cout << "name:\t" << person_ref.name << std::endl;


	// Pointer to a constant - can't dereference and change the value that 'ci' points to.
	const int *ci = &num;
	// Not allowed.
	//*ci = 4;
	ci = &numref;	// However, we can change what 'ci' points to.

	// Constant pointer - can't change what 'cI' points to.
	int *const cI = &num;
	int i = 10;
	// Not allowed.
	//cI = &i;
	*cI = 4;	// However, we can dereference and change the value that 'cI' points to.

	// Const pointer to a const int.
	const int *const crazy = ci; // Can be used only to get the value but can't set.
	// Not allowed.
	//crazy = 12;
	return 0;
}
