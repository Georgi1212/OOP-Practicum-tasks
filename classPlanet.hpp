#pragma once
#include <iostream>
#include <cstring>

using namespace std;


enum KindOfPlanet { 
	ChthonianPlanet, CarbonPlanet, CorelessPlanet, DesertPlanet, GasDwarfPlanet, GasGiantPlanet, HeliumPlanet, IceGiantPlanet, IcePlanet,
	IronPlanet, LavaPlanet, OceanPlanet, ProtoPlanet, PuffyPlanet, SilicatePlanet, TerrestrialPlanet};
	
class Planet{
	
private:
	
	char* name;
	char* planetSystem;
	char* republic;
	KindOfPlanet kindPlanet;
	
public:
	
	void setPlanetName(const char* other_name);
	void setPlanetSystem(const char* other_planetSystem);
	void setRepublic(const char* other_republic);
	void setKindOfPlanet(const KindOfPlanet _kindPlanet);
	
	char* getPlanetName() const;
	char* getPlanetSystem() const;
	char* getRepublic() const;
	KindOfPlanet getKindOfPlanet() const;
		
	Planet();
	Planet(const char* _name, const char* _planetSystem, const char* _republic, const KindOfPlanet _kindPlanet);
	Planet(const Planet& other);
	Planet& operator=(const Planet& other);
	bool operator==(const Planet& other) const;
	bool operator!=(const Planet& other) const;
	~Planet();
	
	friend ostream& operator<<(ostream& os, const Planet& planet);
	friend istream& operator>>(istream& is, Planet& planet);

	
};

template<typename PrintPlanet>
void printPlanet(PrintPlanet& planet)
{
	cout << planet << endl;
}
