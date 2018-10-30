#include "Bibliotheek.h"
#include <iostream>

Bibliotheek::Bibliotheek() {
	std::cout << "Bibliotheek: ctor" << std::endl;
	boeken = std::vector<Boek*>();
}

Bibliotheek::~Bibliotheek() {
	std::cout << "Bibliotheek: dtor" << std::endl;
	delete boek;
}

Bibliotheek::Bibliotheek(const Bibliotheek& bibliotheek) {
	std::cout << "Bibliotheek: copy-ctor" << std::endl;
	boek = new Boek();
	boek->naam = bibliotheek.boek->naam;
}

Bibliotheek& Bibliotheek::operator=(const Bibliotheek& andereBibliotheek) {
	std::cout << "Bibliotheek: assignment-oper" << std::endl;
	if (this != &andereBibliotheek) {
		if (boek) {
			delete boek;
		}
		boek = new Boek(andereBibliotheek.boek->naam);
	}
	return *this;
}

void Bibliotheek::nieuwBoek(std::string naam) {
	std::cout << "   Boek in bibliotheek: " << boek->naam << std::endl;
}

void Bibliotheek::leenBoek(std::string name) {

}