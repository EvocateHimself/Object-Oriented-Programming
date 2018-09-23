#include <iostream>
#include <string>
#include "Docent.h"

using namespace std;

Docent::Docent(int leeftijd, string naam, string titel) : leeftijd(leeftijd), naam(naam), titel(titel) {
}

void Docent::getAge() {
	cout << "Leeftijd: " << leeftijd << endl;
}

void Docent::getName() {
	cout << "Naam: " << naam << endl;
}

void Docent::getTitle() {
	cout << "Beroep: " << titel << endl;
}