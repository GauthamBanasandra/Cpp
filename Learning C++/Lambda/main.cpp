#include <vector>
#include <time.h>
#include <stdlib.h>
#include <algorithm>
#include <iostream>
#include <math.h>

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
	
	std::cout << "Odd/even:" << std::endl;
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
	std::cout << std::endl;

	// Squaring the numbers.
	std::vector<double> squares;
	// Using transform from STL. back_inserter inserts at the end of the collection.
	// The return type of a lambda is specified using the '->' operator.
	std::transform(numbers.begin(), numbers.end(), std::back_inserter(squares), [](int n)->double {return sqrt(n); });
	std::cout << "Square root:" << std::endl;
	std::for_each(squares.begin(), squares.end(), [](double n)->void {std::cout << n << " "; });
	std::cout << std::endl;

	return 0;
}
