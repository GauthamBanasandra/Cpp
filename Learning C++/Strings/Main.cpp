#include <iostream>
#include <string>	// Library for handling strings.
#include "String utils.h"

using namespace std;	// std namespace defines the type for strings.

int main()
{
	string s1, s2;

	cout << "Enter string 1:\t";
	cin >> s1;
	/*
	* To read a line of string as input, use
	* getline(cin, s1);
	*/
	cout << "Enter string 2:\t";
	cin >> s2;
	// Functions "compare" and "lexicographic_compare" are definced in another file.
	cout << "Result(length):\t" << compare(s1, s2) << endl << "Result(lexicographic):\t" << lexicographic_comparison(s1, s2) << endl;

	return 0;
}