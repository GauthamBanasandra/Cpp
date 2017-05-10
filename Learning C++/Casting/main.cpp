#include "Person.h"
#include "Twitterati.h"
#include "Martian.h"
#include <string>

int main()
{
	Twitterati t1("Jack", "@captain_jack", 12);
	// static_cast a sub-class (Twitterati) to super-class (Person). It is done at compile time.
	Person *p1 = static_cast<Person*>(&t1);
	std::cout << "Static cast - name:\t" << p1->GetName() << std::endl;

	Martian m1("John");
	// dynamic_cast is done at runtime. Thus, it has some overhead. 
	// It's useful when the casting types are not known to be compatible.
	Person *p2 = dynamic_cast<Person*>(&m1);
	// For dynamic_cast to work, the casting object (e.g. m1) must have atleast one virtual function.
	// dynamic_cast returns nullptr if the casting is not successful, this it can be checked at runtime.
	if (p2)
	{
		std::cout << "Successfully casted Martian to Person" << std::endl;
	}
	else
	{
		std::cout << "Unable to cast Martian to Person" << std::endl;
	}

	return 0;
}
