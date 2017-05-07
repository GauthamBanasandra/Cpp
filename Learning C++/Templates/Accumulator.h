#pragma once
#include "Person.h"

// This is an example of a template class.
template <class T>	// Add the template declaration before class.
class Accumulator	
{
private:
	T total;	// Use 'T' as a usual type.
public:
	Accumulator(T initial_value) :total(initial_value) {}
	T GetTotal() { return total; }
	// For operator overloading of primitive types (like int, double etc.), the argument must be a constant pointer.
	void operator+=(const T &t) { total += t; }
	virtual ~Accumulator() {}
};

// This is an example of a template specialization.
template <>	// Empty angle brackets indicate template specialization.
class Accumulator<Person> // Name of the class that we want to specialize
{
private:
	int total;	// Notice that there's no generic variable in this class.
public:
	Accumulator(int initial_value) :total(initial_value) {}
	int GetTotal() const { return total; }	
	void operator+=(Person &t) { total += t.GetAge(); }
	virtual ~Accumulator() {}
};