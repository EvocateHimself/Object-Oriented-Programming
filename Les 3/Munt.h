#pragma once
#include <string>

using namespace std;

class Munt {
private:
	float value;
	string name;
public:
	Munt();
	~Munt();
	virtual float getValue();
	virtual string getName();
};