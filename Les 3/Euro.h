#pragma once
#include <string>
#include "Munt.h"

using namespace std;

class Euro : public Munt {
private:
	float value;
	string name;
public:
	Euro();
	~Euro();
	float getValue() override;
	string getName() override;
};