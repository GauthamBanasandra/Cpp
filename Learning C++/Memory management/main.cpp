#include "PersonTemplate.h"
#include "PersonTemplateSmartPtr.h"

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
	
	PersonTemplateSmartPtr p1shr("John", "Maverick", 1234);
	p1shr.AddResource();
	p1shr.SetFirstName("Jack");
	p1shr.AddResource();

	PersonTemplateSmartPtr p2shr = p1shr;
	p1shr = p2shr;

	// Accessing a shared pointer is just like accessing a normal pointer through * and ->.

	return 0;
}
