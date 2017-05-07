#include "PersonTemplate.h"

PersonTemplate::PersonTemplate(std::string _first_name, std::string _last_name, int _id)
{
	first_name = _first_name;
	last_name = _last_name;
	id = _id;
	resource = nullptr;
}

PersonTemplate::PersonTemplate(const PersonTemplate &p)
{
	first_name = p.first_name;
	last_name = p.last_name;
	id = p.id;
	// Create a new resource.
	resource = new Resource(p.resource->GetResource());
}

PersonTemplate& PersonTemplate::operator=(const PersonTemplate& p)
{
	first_name = p.first_name;
	last_name = p.last_name;
	id = p.id;

	// Always keep in mind to delete the pointer before allocating a new one.
	delete resource;
	resource = new Resource(p.resource->GetResource());

	// '=' must return a reference to *this;
	return *this;
}

void PersonTemplate::AddResource()
{
	// Always keep in mind to delete the pointer before allocating a new one.
	// 'resource' is initialized to nullptr. So, it's ok to delete a nullptr - happens on the first call to AddResource.
	delete resource;
	resource = new Resource(first_name);
}

PersonTemplate::~PersonTemplate()
{
	// Clear up the allocated resource in the destructor.
	delete resource;
}
