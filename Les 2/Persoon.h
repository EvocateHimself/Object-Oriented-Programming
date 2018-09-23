#pragma once
#include <string>

using namespace std;

class Persoon {
private:
	int leeftijd;
	string naam;
public:
	Persoon();
	virtual void getAge();
	virtual void getName();
};