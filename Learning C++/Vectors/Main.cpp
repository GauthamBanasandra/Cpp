#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include "String utils.h"
#include <iterator>

void vec_demo();

int main()
{
	// Demo of vectors.
	//vec_demo();

	// Vector is a data-structure for holding a collection of items.
	std::vector<int> integers;
	integers.push_back(2);
	integers.push_back(4);
	integers.push_back(5);
	integers.push_back(9);

	std::cout << "Forward:" << std::endl;
	// begin() returns a forward iterator. end() returns a pointer to the element that is just after the collections - it isn't the last element.
	for (auto item = integers.begin(); item != integers.end(); ++item)
	{
		// 'item' isn't actually a pointer. It has been overloaded with * and -> to be used like a pointer.
		std::cout << *item << " ";
	}
	std::cout << std::endl;

	std::cout << "Reverse:" << std::endl;
	// rbegin() returns a reverse iterator. end() returns a pointer to the element that is just before the collections - it isn't the first element.
	for (auto item = integers.rbegin(); item!=integers.rend(); ++item)
	{
		std::cout << *item << " ";
	}
	std::cout << std::endl;

	return 0;
}

void vec_demo()
{
	int m, n;
	std::cout << "Enter string length and number of strings to generate:\t";
	std::cin >> m;
	std::cin >> n;

	// vector is a list of elements;
	std::vector<std::string> rand_strings = generate_strings(m > 0 ? m : m*-1, n > 0 ? n : n*-1);
	sort(begin(rand_strings), end(rand_strings));

	for (auto str : rand_strings)
		std::cout << str << std::endl;
}