#include <iostream>
#include <cstring>

using namespace std;


class Planet{

/*enum KindOfPlanet { 
	ChthonianPlanet, CarbonPlanet, CorelessPlanet, DesertPlanet, GasDwarfPlanet, GasGiantPlanet, HeliumPlanet, IceGiantPlanet, IcePlanet,
	IronPlanet, LavaPlanet, OceanPlanet, ProtoPlanet, PuffyPlanet, SilicatePlanet, TerrestrialPlanet};
};*/

private:
	
	char* name;
	char* planetSystem;
	char* republic;
	
	enum KindOfPlanet { 
	ChthonianPlanet, CarbonPlanet, CorelessPlanet, DesertPlanet, GasDwarfPlanet, GasGiantPlanet, HeliumPlanet, IceGiantPlanet, IcePlanet,
	IronPlanet, LavaPlanet, OceanPlanet, ProtoPlanet, PuffyPlanet, SilicatePlanet, TerrestrialPlanet};
	
public:
	
	void setPlanetName(const char* other_name);
	void setPlanetSystem(const char* other_planetSystem);
	void setRepublic(const char* other_republic);
	
	char* getPlanetName() const;
	char* getPlanetSystem() const;
	char* getRepublic() const;
		
	Planet();
	Planet(char* _name, char* _planetSystem, char* _republic);
	Planet(const Planet& other);
	Planet& operator=(const Planet& other);
	~Planet();
	
	friend ostream& operator<<(ostream& os, const Planet& planet);
	
	template<typename Pl>
	void printPlanet(const Pl& planet) const;
	
};
