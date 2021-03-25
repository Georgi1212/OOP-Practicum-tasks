#include "classPlanet.hpp"

// Setters
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

void Planet::setKindOfPlanet(KindOfPlanet other_kindPlanet)
{
	this->kindPlanet = other_kindPlanet;
}

// Getters
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

KindOfPlanet Planet::getKindOfPlanet() const
{
	return kindPlanet;
}

// 4
Planet::Planet()
{
	name = 	NULL;
	planetSystem = NULL;
	republic = NULL;
}

Planet::Planet(const char* _name, const char* _planetSystem, const char* _republic, const KindOfPlanet _kindPlanet)
{
	this->name = new char[strlen(_name) + 1];
	strcpy(this->name, _name);
	
	this->planetSystem = new char[strlen(_planetSystem) + 1];
	strcpy(this->planetSystem, _planetSystem);
	
	this->republic = new char[strlen(_republic) + 1];
	strcpy(this->republic, _republic);
	
	this->kindPlanet = _kindPlanet; 
}

Planet::Planet(const Planet& other)
{
	name = new char[strlen(other.name) + 1];
	strcpy (name, other.name);
	
	planetSystem = new char[strlen(other.planetSystem) + 1];
	strcpy (planetSystem, other.planetSystem);
	
	republic = new char[strlen(other.republic) + 1];
	strcpy (name, other.republic);
	
	kindPlanet = other.kindPlanet;
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
		
		this->kindPlanet = other.kindPlanet;
	}
	return *this;
}

// operators
bool Planet:: operator==(const Planet& other) const
{ 
	return !strcmp(this->name, other.name) && 
			!strcmp(this->planetSystem, other.planetSystem) && 
			!strcmp(this->republic, other.republic);
}

bool Planet:: operator!=(const Planet& other) const
{
	return !(*this == other);
}

//destructor
Planet::~Planet()
{
	delete[] name;
	name = NULL;
	delete[] planetSystem;
	planetSystem = NULL;
	delete[] republic;
	republic = NULL;
}


ostream& operator<<(ostream& os, const Planet& planet)
{
	os << planet.name << endl;
	os << planet.planetSystem << endl;
	os << planet.republic << endl;
	
	switch (planet.kindPlanet)
	{
		case(KindOfPlanet)0: os << "ChthonianPlanet" << endl; break;
		case(KindOfPlanet)1: os << "CarbonPlanet" << endl; break;
		case(KindOfPlanet)2: os << "CorelessPlanet" << endl; break;
		case(KindOfPlanet)3: os << "DesertPlanet" << endl; break;
		case(KindOfPlanet)4: os << "GasDwarfPlanet" << endl; break;
		case(KindOfPlanet)5: os << "GasGiantPlanet" << endl; break;
		case(KindOfPlanet)6: os << "HeliumPlanet" << endl; break;
		case(KindOfPlanet)7: os << "IceGiantPlanet" << endl; break;
		case(KindOfPlanet)8: os << "IcePlanet" << endl; break;
		case(KindOfPlanet)9: os << "IronPlanet" << endl; break;
		case(KindOfPlanet)10: os << "LavaPlanet" << endl; break;
		case(KindOfPlanet)11: os << "OceanPlanet" << endl; break;
		case(KindOfPlanet)12: os << "ProtoPlanet" << endl; break;
		case(KindOfPlanet)13: os << "PuffyPlanet" << endl; break;
		case(KindOfPlanet)14: os << "SilicatePlanet" << endl; break;
		case(KindOfPlanet)15: os << "TerrestrialPlanet" << endl; break;
		
		default: os << "There's no such planet" << endl; break;
	}
  
  return os;
}

istream& operator>>(istream& is, Planet& planet)
{
	delete[] planet.name;
	delete[] planet.planetSystem;
	delete[] planet.republic;
	
	char* buffer = new char[100];
	int temp;
	
	//cout << "Planet name:";
	is.getline(buffer, 100);
	planet.name = new char[strlen(buffer) + 1];
	strcpy(planet.name, buffer);
	
	//cout << "Planet System:";
	is.getline(buffer, 100);
	planet.planetSystem = new char[strlen(buffer) + 1];
	strcpy(planet.planetSystem, buffer);
	
	//cout << "Planet Republic:";
	is.getline(buffer, 100);
	planet.republic = new char[strlen(buffer) + 1];
	strcpy(planet.republic, buffer);
	
	//cout << "Kind of Planet:";
	is >> temp;
	planet.kindPlanet = (KindOfPlanet)temp;
	is.ignore();
	
	delete[] buffer;
	
	return is;
	
}
