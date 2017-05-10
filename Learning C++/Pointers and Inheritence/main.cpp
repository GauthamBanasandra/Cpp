#include "Twitterati.h"
#include <string>
#include <memory>

int main()
{
	Twitterati me("Jack", "@captain_jack", 12);
	// Calls GetName() of Twitterati - obvious.
	std::cout << "name:\t" << me.GetName() << std::endl;
	
	Person myself = me;
	std::cout << "name:\t" << myself.GetName() << std::endl;

	// Inheritence with shared_ptd.
	// LHS should have parent class and RHS should have the child class type.
	std::shared_ptr<Person> s_me = std::make_shared<Twitterati>("Jack", "@captain_jack", 12);
	// Since 'GetName()' function is marked as virutal, it will call GetName() of sub class.
	std::cout << "name:\t" << s_me->GetName() << std::endl;

	return 0;
}
