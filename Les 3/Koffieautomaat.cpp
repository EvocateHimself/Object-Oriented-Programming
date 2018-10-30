#include <string>
#include <iostream>
#include "Koffieautomaat.h"

using namespace std;

Koffieautomaat::Koffieautomaat() {}

Koffieautomaat::~Koffieautomaat() {}

float Koffieautomaat::aantalMunten() {
	return munten;
}

float Koffieautomaat::getPrice() {
	return prijs;
}

string Koffieautomaat::getName() {
	return naam;
}

void Koffieautomaat::inworpMunt(Munt* munt) {
	munten += munt->getValue();
	cout << "Je hebt " << munt->getName() << " ingeworpen." << endl;
}

void Koffieautomaat::kiesKoffie(string n, float p) {
	n = naam;
	p = prijs;
}


