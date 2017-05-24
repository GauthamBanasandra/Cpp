#include <cassert>	// include cassert

int main(int argc, char* argv[])
{
	// static_assert is a compile time assertion.
	static_assert(sizeof(double) == 8, "size of double must be 8");
	
	// assert is a macro, it takes an expression and evaluates it.
	assert(4 == 5);

	return 0;
}
