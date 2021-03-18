#include "classPlanet.hpp"


void Planet::setPlanetName(const char* other_name)
{
	strcpy(this->name, other_name);
}

void Planet::setPlanetSystem(const char* other_planetSystem)
{
	strcpy(this->planetSystem, other_planetSystem);
}

void Planet::setRepublic(const char* other_republic)
{
	strcpy(this->republic, other_republic);
}

char* Planet::getPlanetName() const
{
	return name;
}

char* Planet::getPlanetSystem() const
{
	return planetSystem;
}

char* Planet::getRepublic() const
{
	return republic;
}

Planet::Planet()
{
	name = 	NULL;
	planetSystem = NULL;
	republic = NULL;
}

Planet::Planet(char* _name, char* _planetSystem, char* _republic)
{
	this->name = new char[strlen(_name) + 1];
	strcpy(this->name, _name);
	
	this->planetSystem = new char[strlen(_planetSystem) + 1];
	strcpy(this->planetSystem, _planetSystem);
	
	this->republic = new char[strlen(_republic) + 1];
	strcpy(this->republic, _republic);
}

Planet::Planet(const Planet& other)
{
	name = new char[strlen(other.name) + 1];
	strcpy (name, other.name);
	
	planetSystem = new char[strlen(other.planetSystem) + 1];
	strcpy (planetSystem, other.planetSystem);
	
	republic = new char[strlen(other.republic) + 1];
	strcpy (name, other.republic);
}

Planet& Planet::operator=(const Planet& other)
{
	if(this != &other)
	{
		delete[] name;
		this->name = new char[strlen(other.name) + 1];
		strcpy(this->name, other.name);
			
		delete[] planetSystem;
		this->planetSystem = new char[strlen(other.planetSystem) + 1];
		strcpy (planetSystem, other.planetSystem);
		
		delete[] republic;
		this->republic = new char[strlen(other.republic) + 1];
		strcpy (name, other.republic);
	}
	return *this;
}

Planet::~Planet()
{
	delete[] name;
	name = NULL;
	delete[] planetSystem;
	planetSystem = NULL;
	delete[] republic;
	republic = NULL;
}



template<typename Pl>
ostream& operator<<(ostream& os, const Pl& planet)
{
	os << planet.name << endl;
	os << planet.planetSystem << endl;
	os << planet.republic << endl;
  
  return os;
}

template<typename Pl>
void Planet::printPlanet(const Pl& planet) const
{
	cout << planet << endl;						
}

