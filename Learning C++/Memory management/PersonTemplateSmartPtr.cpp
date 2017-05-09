#include "PersonTemplateSmartPtr.h"

PersonTemplateSmartPtr::PersonTemplateSmartPtr(std::string _first_name, std::string _last_name, int _id)
{
	first_name = _first_name;
	last_name = _last_name;
	id = _id;

	// shared_ptr is by default initiazed by nullptr, so no need to write it explicitly.
}

void PersonTemplateSmartPtr::AddResource()
{
	// Calling reset() on a shared_ptr will release the resource. It is similar to calling 'delete resource', had 'resource' been
	// a normal pointer.
	resource.reset();
	// This is how we need to initialize a shared_ptr - this is analogous to AddResource in PersonTemplate.cpp
	resource = std::make_shared<Resource>(first_name);
}

PersonTemplateSmartPtr::~PersonTemplateSmartPtr()
{
}
