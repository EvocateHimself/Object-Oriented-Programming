#include <string>
#include "Euro.h"

using namespace std;

Euro::Euro() {
	name = "1 euro";
	value = 1.0;
}

Euro::~Euro() {
}

float Euro::getValue() {
	return value;
}

string Euro::getName() {
	return name;
}