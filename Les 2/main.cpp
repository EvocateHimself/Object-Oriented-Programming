#include <iostream>
#include <string>
#include "Student.h"
#include "Docent.h"

using namespace std;

int main() {
	Student persoon1 = Student(20, "Gerrit");
	persoon1.getName();
	persoon1.getAge();
	cout << endl;

	Docent persoon2 = Docent(44, "Tim", "Docent");
	persoon2.getName();
	persoon2.getAge();
	persoon2.getTitle();

	cin.get();
	return 0;
}