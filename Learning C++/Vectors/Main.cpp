#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include "String utils.h"

using namespace std;

int main()
{
	int m, n;
	cout << "Enter string length and number of strings to generate:\t";
	cin >> m;
	cin >> n;

	// vector is a list of elements;
	vector<string> rand_strings = generate_strings(m > 0 ? m : m*-1, n > 0 ? n : n*-1);
	sort(begin(rand_strings), end(rand_strings));

	for (auto str : rand_strings)
		cout << str << endl;

	return 0;
}