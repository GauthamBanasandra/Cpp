#include "lambda_store.h"
#include <iostream>

void lambda_store()
{
	LambdaStore lambda_store;
	// Passing a lambda.
	lambda_store.SetLambda([](double num) {
		if (num > 10)
		{
			return true;
		}
	});
	auto abs = lambda_store.GetAbs();
	// Calling the lambda function returned by GetAbs().
	std::cout << "Absolute value of -2:\t" << abs(-2) << std::endl;
}