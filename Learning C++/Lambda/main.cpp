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
	std::cout << std::endl << std::endl;

	// The capture clause in lambda [].
	// It specifies the variables in the calling scope that will be used in lambda.
	int x = 2, y = 10;
	numbers.clear();
	for (int i = 0; i < NUM; ++i)
	{
		numbers.push_back(i);
	}
	std::cout << "Numbers between " << x << " and " << y << ':' << std::endl;
	// Mention x, y in [] to be used in the lambda.
	std::for_each(numbers.begin(), numbers.end(), [x, y](int n)
	{
		if (n > x && n < y)
		{
			std::cout << n << " ";
		}
	});
	std::cout << std::endl << std::endl;

	// Use[=] to capture all the variables in the calling function stack.
	x = 5;
	y = 9;
	std::cout << "Numbers between " << x << " and " << y << ':' << std::endl;
	// Mention x, y in [] to be used in the lambda.
	std::for_each(numbers.begin(), numbers.end(), [=](int n)
	{
		if (n > x && n < y)
		{
			std::cout << n << " ";
		}
	});
	std::cout << std::endl << std::endl;

	std::cout << "Doubling the numbers:" << std::endl;
	// The parameter that is passed to lambda could be a reference too.
	std::for_each(numbers.begin(), numbers.end(), [](int &n)
	{
		n *= 2;
	});
	std::for_each(numbers.begin(), numbers.end(), [](int n)
	{
		std::cout << n << ' ';
	});
	std::cout << std::endl << std::endl;

	// Even the capture clause could be reference. e.g. [&x, &y]. Any change to x and y will be reflected in the calling scope.
	// To capture the references of all the variables in the stack, use [&] as the capture clause.
	return 0;
}
