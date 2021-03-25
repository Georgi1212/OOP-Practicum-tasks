#include <iostream>
#include <cstring>
#include "classPlanet.hpp"
#include "classJedi.hpp"
#include "classStormtrooper.hpp"

using namespace std;

int main ()
{
	/*Jedi jedi;
	Planet planetJedi;
	
	planetJedi.setPlanetName("Dagobah");
	planetJedi.setPlanetSystem("Dagobah system");
	planetJedi.setRepublic("The Galactic");
	
	jedi.setJediName("Yoda");
	jedi.setJediPlanet(planetJedi);
	jedi.setMidiChlorian(18000);
	jedi.setJediSpicies("Yoda's spicies");
	jedi.setJediMilitaryRank("General");
	jedi.setJediRank(GrandMaster);
	jedi.printJedi();
	
	Stormtrooper strooper;
	Planet planetStormtrooper;
	
	planetStormtrooper.setPlanetName("The Empire");
	planetStormtrooper.setPlanetSystem("Åmpire");
	planetStormtrooper.setRepublic("The Galactic");
	
	strooper.setStormtrooperId("TK-421");
	strooper.setStormtrooperPlanet(planetStormtrooper);
	strooper.setStormtrooperRank(Cadet);
	strooper.setStormtrooperType("Death trooper");
	strooper.printStormtrooper(); */
	
	Planet planet = Planet();
	cin >> planet;
	printPlanet(planet);
	cout << endl;
	
	Jedi jedi = Jedi();
	cin >> jedi;
	printJedi(jedi);
	cout << endl;
	
	Stormtrooper strooper = Stormtrooper();
	cin >> strooper;
	printStormtrooper(strooper);
	cout << endl;
	
	
	return 0;
}
