#include <iostream>
#include <map>
#include <string>
#include "Person.h"

int main()
{
	// Map of int, Person.
	std::map<int, Person> peopleMap;
	peopleMap[123] = Person(123, "Jack");
	peopleMap[789] = Person(789, "Jill");
	peopleMap[1000] = Person(1000, "Jessie");

	// This is what happens internally.
	Person jane(456, "Jane");
	// Pair is a tuple, this is how a pair is instantiated.
	std::pair<int, Person> person(jane.GetAge(), jane);
	// Insert the pair into the map.
	peopleMap.insert(person);

	// A map is always kept sorted.
	// Iterating through a map.
	for (auto item = peopleMap.begin(); item != peopleMap.end(); ++item)
	{
		// Each item represents a tuple.
		std::cout << "Name:\t" << item->first << "\tAge:\t" << item->second.GetName() << std::endl;
	}

	// Using find() on map.
	auto found = peopleMap.find(123);
	// find() always returns an iterator - so that it is consister across other collection data-structures (like vector).
	std::cout << "Results of find()" << std::endl;
	std::cout << "Name:\t" << found->first << "\tAge:\t" << found->second.GetName() << std::endl;

	return 0;
}
