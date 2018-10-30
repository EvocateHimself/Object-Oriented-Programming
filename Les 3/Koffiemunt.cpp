#include <string>
#include "Koffiemunt.h"

using namespace std;

Koffiemunt::Koffiemunt() {
	name = "koffiemunt";
	value = 0.0;
}

Koffiemunt::~Koffiemunt() {
}

float Koffiemunt::getValue() {
	return value;
}

string Koffiemunt::getName() {
	return name;
}