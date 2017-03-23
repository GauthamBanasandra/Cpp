#include <iostream>
#include <string>
#include "Person.h"

// Declare a template.
// 'T' is the placeholder for any kind of class (including primitive types).
template <class T>
T max(T &t1, T &t2)
{
	return t1 < t2 ? t2 : t1;
}

int main()
{
	Person p1(10, "Tom");
	Person p2(20, "Jack");

	std::cout << "max(Tom, Jack) is " << max(p1, p2).name << std::endl;

	return 0;
}