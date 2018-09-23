#pragma once
#include <string>
#include "Persoon.h"

using namespace std;

class Student : public Persoon {
private:
	int leeftijd;
	string naam;
public:
	Student(int leeftijd, string naam);
	void getAge() override;
	void getName() override;
};