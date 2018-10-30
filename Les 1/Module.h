#pragma once
#include <string>

using namespace std;

class Module {
private:
	string naam; // Naam van de module
	int dag, maand, jaar; // Datum van de module
	int beginUur, beginMinuut, eindUur, eindMinuut; // Begin en eindtijd van de module
	string lokaal; // Naam van het lokaal
	string docent; // Naam van de docent
	string klas; // Welke klas heeft les?
public:
	Module();
};