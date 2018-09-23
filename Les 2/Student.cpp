#include <iostream>
#include <string>
#include "Student.h"

using namespace std;

Student::Student(int leeftijd, string naam) : leeftijd(leeftijd), naam(naam) {
}

void Student::getAge() {
	cout << "Leeftijd: " << leeftijd << endl;
}

void Student::getName() {
	cout << "Naam: " << naam << endl;
}