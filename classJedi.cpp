#include "classJedi.hpp"

void Jedi::printJedi() const
{
	cout << "Name of the Jedi: " << name << endl;
	cout << "JediRank: " << rank << endl;
	cout << "Midi-chlorian: " << midi_chlorian << endl;
 //	planet.printPlanet(const Pl& planet);
	cout << "Spicies: " << spicies << endl;
	cout << "Military rank: " << militaryRank << endl;						
}

void Jedi::setJediName(const char* other_jediName)
{
	strcpy(this->name, other_jediName);
}

void Jedi::setJediRank(JediRank other_jediRank)
{
	this->rank = other_jediRank;
}

void Jedi::setMidiChlorian(float other_midi_chlorian)
{
	this->midi_chlorian = other_midi_chlorian;
}

void Jedi::setJediPlanet(const Planet& other_jediPlanet)
{
	this->planet = other_jediPlanet;
}

void Jedi::setJediSpicies(const char* other_jedispicies)
{
	strcpy(this->spicies, other_jedispicies);
}

void Jedi::setJediMilitaryRank(const char* other_militaryRank)
{
	strcpy(this->militaryRank, other_militaryRank);
}

char* Jedi::getJediName()
{
	return name;
}

JediRank Jedi::getJediRank()
{
	return rank;
}

float Jedi::getMidiChlorian()
{
	return midi_chlorian;
}

Planet Jedi::getJediPlanet() const
{
	return this->planet;
}

char* Jedi::getJediSpicies() const
{
	return this->spicies;
}

char* Jedi::getJediMilitaryRank() const
{
	return this->militaryRank;
}

Jedi::Jedi()
{
	name = 	NULL;
 	rank = Youngling;
	midi_chlorian = 0.0;
	
	spicies = NULL;
	militaryRank = NULL;
}

Jedi::Jedi(const char* _name, const JediRank _rank, const float _midi_chlorian, const Planet _planet, const char* _spicies, const char* _militaryRank)
{
	this->name = new char[strlen(_name) + 1];
	strcpy(this->name, _name);
	
	this->rank = _rank;
	this->midi_chlorian = _midi_chlorian;
	this->planet = _planet;
	
	this->spicies = new char[strlen(_spicies) + 1];
	strcpy(this->spicies, _spicies);
	
	this->militaryRank = new char[strlen(_militaryRank) + 1];
	strcpy(this->militaryRank, _militaryRank);
}

Jedi::Jedi(const Jedi& other)
{
	name = new char[strlen(other.name) + 1];
	strcpy (name, other.name);
	
	rank = other.rank;
	
	midi_chlorian = other.midi_chlorian;
	
	planet = other.planet;
	
	spicies = new char[strlen(other.spicies) + 1];
	strcpy(spicies, other.spicies);
	
	militaryRank = new char[strlen(other.militaryRank) + 1];
	strcpy(militaryRank, other.militaryRank);
	
}

Jedi& Jedi::operator=(const Jedi& other)
{
	if(this != &other)
	{
		delete[] name;
		this->name = new char[strlen(other.name) + 1];
		strcpy(this->name, other.name);
			
		this->rank = other.rank;
		
		this->planet = other.planet;
		
		this->midi_chlorian = other.midi_chlorian;
		
		
		delete[] spicies;
		this->spicies = new char[strlen(other.spicies) + 1];
		strcpy(this->spicies, other.spicies);
		
		
		delete[] militaryRank;
		this->militaryRank = new char[strlen(other.militaryRank) + 1];
		strcpy (this->militaryRank, other.militaryRank);
	}
	return *this;
}

Jedi::~Jedi()
{
	delete[] name;
	name = NULL;
	midi_chlorian = 0;
	delete[] spicies;
	spicies = NULL;
	delete[] militaryRank;
	militaryRank = NULL;
}

