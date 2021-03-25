#include "classPlanet.hpp"
#include "classStormtrooper.hpp"

/*void Stormtrooper::printStormtrooper() const
{
	cout << "id: " << id << endl;
	cout << "StormtrooperRank: " << rank << endl;
	cout << "Type: " << type << endl;
	printPlanet(planet);					
}*/

void Stormtrooper::setStormtrooperId(const char* other_id)
{
	strcpy(this->id, other_id);
}

void Stormtrooper::setStormtrooperRank(StormtrooperRank other_stormtrooperRank)
{
	this->rank = other_stormtrooperRank;
}

void Stormtrooper::setStormtrooperType(const char* other_stormtrooperType)
{
	strcpy(this->type, other_stormtrooperType);
}

void Stormtrooper::setStormtrooperPlanet(const Planet& other_stormtrooperPlanet)
{
	this->planet = other_stormtrooperPlanet;
}

char* Stormtrooper::getStormtrooperId() const
{
	return id;
}

StormtrooperRank Stormtrooper::getStormtrooperRank() const
{
	return rank;
}

char* Stormtrooper::getStormtrooperType() const
{
	return this->type;
}

Planet Stormtrooper::getStormtrooperPlanet() const
{
	return this->planet;
}

Stormtrooper::Stormtrooper()
{
	id = NULL;
 	rank = Cadet;
	type = NULL;
}

Stormtrooper::Stormtrooper(const char* _id, const StormtrooperRank _rank, const Planet _planet, const char* _type)
{
	this->id = new char[strlen(_id) + 1];
	strcpy(this->id, _id);
	
	this->rank = _rank;

	this->planet = _planet;
	
	this->type = new char[strlen(_type) + 1];
	strcpy(this->type, _type);
}

Stormtrooper::Stormtrooper(const Stormtrooper& other)
{
	id = new char[strlen(other.id) + 1];
	strcpy (id, other.id);
	
	rank = other.rank;
	
	planet = other.planet;
	
	type = new char[strlen(other.type) + 1];
	strcpy(type, other.type);
}

Stormtrooper& Stormtrooper::operator=(const Stormtrooper& other)
{
	if(this != &other)
	{
		delete[] id;
		this->id = new char[strlen(other.id) + 1];
		strcpy(this->id, other.id);
			
		this->rank = other.rank;
		
		this->planet = other.planet;
			
		delete[] type;
		this->type = new char[strlen(other.type) + 1];
		strcpy(this->type, other.type);
	}
	return *this;
}

Stormtrooper::~Stormtrooper()
{
	delete[] id;
	id = NULL;
	delete[] type;
	type = NULL;
}

// Поправи го на всички да е за стормтроопер !!!!!!!!!!

ostream& operator<<(ostream& os, const Stormtrooper& strooper)
{
	os << strooper.id << endl;
	os << strooper.type << endl;
	os << strooper.planet.getPlanetName() << endl;
	
	switch (strooper.rank)
	{
		case(StormtrooperRank)0: os << "Cadet" << endl; break;
		case(StormtrooperRank)1: os << "Private" << endl; break;
		case(StormtrooperRank)2: os << "Sergeant" << endl; break;
		case(StormtrooperRank)3: os << "Major" << endl; break;
		case(StormtrooperRank)4: os << "General" << endl; break;
		case(StormtrooperRank)5: os << "Commander" << endl; break;
	
		default: os << "There's no such planet" << endl; break;
	}
  
  return os;
}

istream& operator>>(istream& is, Stormtrooper& strooper)
{
	delete[] strooper.id;
	delete[] strooper.type;
	
	char* buffer = new char[100];
	int temp;
	
	//cout << "Stormtrooper's id:";
	is.getline(buffer, 100);
	strooper.id = new char[strlen(buffer) + 1];
	strcpy(strooper.id, buffer);
	
	//cout << "Stormtrooper's rank:";
	is >> temp;
	strooper.rank = (StormtrooperRank)temp;
	
	//Planet;
	is >> strooper.planet;
	
	//cout << "Stormtrooper's type:";
	is.getline(buffer, 100);
	strooper.type = new char[strlen(buffer) + 1];
	strcpy(strooper.type, buffer);
	
	is.ignore();
	
	delete[] buffer;
	
	return is;
}
