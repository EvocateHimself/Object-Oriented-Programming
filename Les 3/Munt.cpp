#include <string>
#include "Munt.h"

using namespace std;

Munt::Munt() {}

Munt::~Munt() {}

float Munt::getValue() {
	return value;
}

string Munt::getName() {
	return name;
}