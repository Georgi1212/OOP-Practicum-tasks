#pragma once
#include <iostream>
#include <cstring>
#include "classPlanet.hpp"

using namespace std;

enum StormtrooperRank{ Cadet, Private, Sergeant, Major, General, Commander};
class Stormtrooper{
	
private:
	char* id;
	StormtrooperRank rank;
	char* type;
	Planet planet;
	
public:
//	void printStormtrooper() const;
	
	void setStormtrooperId(const char* other_id);
	void setStormtrooperRank(StormtrooperRank other_stormtrooperRank);
	void setStormtrooperType(const char* other_stormtrooperType);
	void setStormtrooperPlanet(const Planet& other_stormtrooperPlanet);
	
	char* getStormtrooperId() const;
	StormtrooperRank getStormtrooperRank() const;
	char* getStormtrooperType() const;
	Planet getStormtrooperPlanet() const;
	
	Stormtrooper();
	Stormtrooper(const char* _id, const StormtrooperRank _rank, const Planet _planet, const char* _type);
	Stormtrooper(const Stormtrooper& other);
	Stormtrooper& operator=(const Stormtrooper& other);
	~Stormtrooper();
	
	friend ostream& operator<<(ostream& os, const Stormtrooper& strooper);
	friend istream& operator>>(istream& is, Stormtrooper& strooper);
};

void printStormtrooper(Stormtrooper& strooper)
{
	cout << strooper << endl;
}
