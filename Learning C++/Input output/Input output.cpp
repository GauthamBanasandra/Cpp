#include <iostream>
using namespace std;

int main()
{
	int i = 0;
	// << is "read from".
	cout << "Enter a number: ";
	// >> is "push into".
	cin >> i;
	cout << "The factors of " << i << " are:" << endl;

	for (int j = 1; j < i; ++j)
		if (!(i%j))
			cout << j << " ";
	cout << endl;
	
	return 0;
}