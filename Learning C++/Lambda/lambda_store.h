#pragma once
#include <functional>

// Class to demostrate how to pass and retrun lambda function.
class LambdaStore
{
private:
	// Need to use std::function < return_type (params_list) >
	std::function<bool(double)> stored_lambda;
public:
	// Example of a function returning a lambda.
	// Again, use std::function < return_type (params_list) > as the return type of this function.
	std::function<int(int)> GetAbs() const
	{
		return [](int i) {return abs(i); };
	}
	// Example of a function accepting a lambda.
	// Use std::function < return_type (params_list) > as the parameter type of this function.
	void SetLambda(std::function<bool(double)> lambda)
	{
		stored_lambda = lambda;
	}
};

// The usage of this class is demonstrated in lambda_store.cpp.