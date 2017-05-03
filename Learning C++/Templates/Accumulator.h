#pragma once
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