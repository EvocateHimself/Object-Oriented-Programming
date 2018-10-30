#include <string>
#include "Cent.h"

using namespace std;

Cent::Cent() {
	name = "50 cent";
	value = 0.50;
}

Cent::~Cent() {
}

float Cent::getValue() {
	return value;
}

string Cent::getName() {
	return name;
}