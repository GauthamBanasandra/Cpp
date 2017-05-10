#include "Twitterati.h"
#include <string>
#include <memory>

int main()
{
	Twitterati me("Jack", "@captain_jack", 12);
	// Calls GetName() of Twitterati - obvious.
	std::cout << "solid obj - name:\t" << me.GetName() << std::endl;
	
	// Polymorphism - assigning a sub-class reference to a super-class.
	Person *myself = new Twitterati("Jack", "@captain_jack", 12);
	// GetName() of super-class is marked as 'virtual'. Thus, it calls the GetName() of sub-class.
	// Remember - virtual works only if the calling object(e.g. myself) is a pointer/reference. It won't work if the calling object is a non pointer/reference.
	std::cout << "ptr - name:\t" << myself->GetName() << std::endl;
	delete myself;

	// Polymorphic reference.
	Person &myselfRef = me;
	std::cout << "ref - name:\t" << myselfRef.GetName() << std::endl;

	// Inheritence with shared_ptd.
	// LHS should have parent class and RHS should have the child class type.
	std::shared_ptr<Person> s_me = std::make_shared<Twitterati>("Jack", "@captain_jack", 12);
	// Since 'GetName()' function is marked as virutal, it will call GetName() of sub class.
	std::cout << "shared_ptr - name:\t" << s_me->GetName() << std::endl;

	return 0;
}
