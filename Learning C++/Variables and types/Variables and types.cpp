#include <iostream>
#include <vector>

// Declare the namespace being used to avoid qualifying each method call from this namespace.
using namespace std;

int main()
{
	std::vector<int> numbers1;
	// 'decltype' is used to identify the type of a given variable.
	// Here, we're declaring the variable 'numbers2' by determining the type of numbers1.
	// This is useful when dealing with templates, where we don't know the type during compile time.
	decltype(numbers1) numbers2;
	numbers2.push_back(1);
	std::cout << "Type of 'numbers2':\t" << typeid(decltype(numbers2)).name() << std::endl;

	// 'auto' is just like 'var' in C# and Javascript.
	auto i = 4;
	i++;
	cout << "The value of i is " << i << endl;

	int j = 0;
	/*
	* The value of j below will be 1.
	* Floating point numbers are computed in an efficient way and C++ will take that approach.
	* Thus, float doesn't fit into int.
	*/
	j = 1.4;
	cout << "The value of j is " << j << endl;

	/*
	* The value of k below will be 1.
	* In C++, even expressions have types.
	* Since all the terms in the expression have type 'int', the expression is evaluated to an int.
	* Ofcourse, int fits into a float, thus, 0.5 is truncated.
	*/
	float k = 9 / 5;
	cout << "The value of k is " << k << endl;

	// Use static_cast<type> to cast. Check out other casts that are available - dynamic_cast etc.
	// x is a constant (declared using the keyword 'const').
	const int x = static_cast<int>(12.1);
	cout << "The value of x is " << x << endl;

	return 0;
}