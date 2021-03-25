#pragma once
#include <iostream>
#include <cstring>

using namespace std;

enum HyperJump { off, on };

template <typename Pilot> // "Pilot" can be a jedi or a stormtrooper
class BattleShip {
	
private:
	float speed;
	unsigned int numberCannons;
	HyperJump jump;
	float size;
	Pilot pilot;
	
public:
	void setSpeedShip(float other_speed);
	void setNumberCannons(unsigned int other_numberCannons);
	void setHyperJump(HyperJump other_jump);
	void setSizeOfShip(float other_size);
	void setPilot(const Pilot& other_pilot);
		
	float getSpeedShip();
	unsigned int getNumberCannons();
	HyperJump getHyperJump();
	float getSizeOfShip();
	Pilot getPilot() const;

	
	BattleShip();
	BattleShip(const float _speed, const unsigned int _numberCannons, HyperJump _jump, const float _size, const Pilot _pilot);
	BattleShip(const BattleShip& other);
	BattleShip& operator=(const BattleShip& other);
	bool operator==(const BattleShip& other) const;
	bool operator!=(const BattleShip& other) const;
	~BattleShip();
	
	friend ostream& operator<<(ostream& os, const BattleShip& ship);
	friend istream& operator>>(istream& is, BattleShip& ship);
};

