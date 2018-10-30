#pragma once
#include <string>
#include "Munt.h"

using namespace std;

class Koffiemunt : public Munt {
private:
	float value;
	string name;
public:
	Koffiemunt();
	~Koffiemunt();
	float getValue() override;
	string getName() override;
};