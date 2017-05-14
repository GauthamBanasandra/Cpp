#include <vector>
#include <time.h>
#include <stdlib.h>
#include <algorithm>
#include <iostream>

int main(int argc, char* argv[])
{
	srand(static_cast<unsigned>(time(nullptr)));
	const int NUM = 10;

	std::vector<int> numbers;
	// Populating a Vector of random numbers.
	for (int i = 0; i < NUM; ++i)
	{
		numbers.push_back(rand());
	}

	std::cout << NUM << " random numbers:" << std::endl;
	// Printing the numbers using lambda.
	std::for_each(numbers.begin(), numbers.end(), [](int i) {std::cout << i << " "; });
	std::cout << std::endl << std::endl;

	// Printing odd/even using lambda.
	std::for_each(numbers.begin(), numbers.end(), [](int num)
	{
		if (num % 2)
		{
			std::cout << "Odd:\t" << num << std::endl;
		}
		else
		{
			std::cout << "Even:\t" << num << std::endl;
		}
	});

	return 0;
}
