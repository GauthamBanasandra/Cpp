#include <iostream>
// Declare the namespace being used to avoing qualifying each method call from this namespace.
using namespace std;

int main()
{
	// 'auto' is just like 'var' in C# and Javascript.
	auto i = 4;
	i++;
	cout << "The value of i is " << i << endl;

	return 0;
}