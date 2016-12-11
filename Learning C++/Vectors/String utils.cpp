#include <string>
#include <vector>
#include <algorithm>
#include <time.h>
#include <stdlib.h>
#include "String utils.h"

using namespace std;

vector<string> generate_strings(unsigned int m, unsigned int n)
{
	// Initializing the seed.
	srand((unsigned)time(NULL));
	vector<string> str_vec;
	
	// Use push_back() to append to the list.
	for (register unsigned int i = 0; i < n; str_vec.push_back(rand_string(m)), i++);
	
	return str_vec;
}

string rand_string(unsigned int m)
{	
	string rand_str;
	// Using rand() to generate random numbers.
	for (register unsigned int j = 0; j < m; rand_str += rand() % 25 + 65, j++);
	
	return rand_str;
}

// TODO: sort doesn't work across functions. Figure out why.
void sort_strings(vector<string> str_vec)
{
	sort(begin(str_vec), end(str_vec));
}