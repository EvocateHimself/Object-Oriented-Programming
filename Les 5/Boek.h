#pragma once

#include <string>

class Boek {
public:
	std::string naam = "onbekend";

	Boek();
	Boek(std::string type);
	~Boek();
};