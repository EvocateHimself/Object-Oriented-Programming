#include <iostream>
#include "Bibliotheek.h"

int main() {
	Bibliotheek bibliotheek = Bibliotheek();

	bibliotheek.nieuwBoek("Boek 1");
	bibliotheek.nieuwBoek("Boek 2");
	bibliotheek.nieuwBoek("Boek 3");
	bibliotheek.nieuwBoek("Boek 4");
	bibliotheek.nieuwBoek("Boek 5");

	int c;
	std::cin >> c;

	return 0;
}