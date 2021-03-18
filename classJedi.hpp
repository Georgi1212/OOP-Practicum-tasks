#include <iostream>
#include <cstring>
#include "classPlanet.hpp"

using namespace std;

enum JediRank { Youngling, Padawan, JediKnight, JediGuardian, JediMaster, GrandMaster};

class Jedi{
	
private:
	char* name;
	JediRank rank;
	float midi_chlorian;
	Planet planet;
	char* spicies;
	char* militaryRank;

public:
	void printJedi() const;
	
	void setJediName(const char* other_jediName);
	void setJediRank(JediRank other_jediRank);
	void setMidiChlorian(float other_midi_chlorian);
	
	void setJediPlanet(const Planet& other_jediPlanet);
	void setJediSpicies(const char* other_jedispicies);
	void setJediMilitaryRank(const char* other_militaryRank);
	
	char* getJediName();
	JediRank getJediRank();
	float getMidiChlorian();
	
	Planet getJediPlanet() const;
	char* getJediSpicies() const;
	char* getJediMilitaryRank() const;

	
	Jedi();
	Jedi(const char* _name, const JediRank _rank, const float _midi_chlorian, const Planet _planet, const char* _spicies, const char* _militaryRank);
	Jedi(const Jedi& other);
	Jedi& operator=(const Jedi& other);
	~Jedi();
	
};
