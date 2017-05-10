#include "Twitterati.h"

std::string Twitterati::GetName() const
{
	return Person::GetName() + "\t" + handle;
}

Twitterati::~Twitterati()
{
}
