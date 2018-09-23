#pragma once
#include <string>
#include "Persoon.h"

using namespace std;

class Docent : public Persoon {
private:
	int leeftijd;
	string naam;
	string titel;
public:
	Docent(int leeftijd, string naam, string titel);
	void getAge() override;
	void getName() override;
	void getTitle();
};