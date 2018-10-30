#pragma once
#include <string>
#include "Munt.h"

using namespace std;

class Cent : public Munt {
private:
	float value;
	string name;
public:
	Cent();
	~Cent();
	float getValue() override;
	string getName() override;
};