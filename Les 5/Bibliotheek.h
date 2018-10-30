#pragma once

#include "Boek.h"
#include <vector>

class Bibliotheek {
public:
	Bibliotheek();
	~Bibliotheek();

	Bibliotheek(const Bibliotheek& bibliotheek);
	Bibliotheek& operator=(const Bibliotheek&);

	std::vector<Boek*> boeken;
	void nieuwBoek(std::string naam);
	void leenBoek(std::string naam);

private:
	Boek* boek = new Boek();
};
