#pragma once
#include <string>
#include "Munt.h"

using namespace std;

class Koffieautomaat {
private:
	string naam = "";
	float prijs = 0;
	float munten = 0;
public:
	Koffieautomaat();
	~Koffieautomaat();
	float aantalMunten();
	float getPrice();
	string getName();
	void inworpMunt(Munt* munt);
	void kiesKoffie(string n, float p);
};