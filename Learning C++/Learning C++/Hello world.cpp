#include <iostream>
int main()
{
	std::cout << "Hello world";
	// Adding an end-of-line character.
	std::cout << std::endl << "2+2=";
	std::cout << 2 + 2;

	// Or everything could be just aggregated into one line as shown.
	std::cout << std::endl << "Everything is being printed on just one line. Now what is 2+2?" <<
		std::endl << "It's " << 2 + 2 << " isn't it?" << std::endl;

	return 0;
}