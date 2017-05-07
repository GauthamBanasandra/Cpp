#include "PersonTemplate.h"

int main()
{
	PersonTemplate p1("John", "Maverick", 1234);
	p1.AddResource();
	p1.SetFirstName("Jack");
	p1.AddResource();
	// Here's where the copy constructor gets invoked.
	// The attributes of p1 are copied one-by-one to p2, but a new resource is created for 'resource'. Check out the implementation.
	PersonTemplate p2 = p1;

	// Overload for '=' gets called.
	p1 = p2;
	
	return 0;
}