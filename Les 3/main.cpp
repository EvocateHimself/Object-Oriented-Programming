#include <iostream>
#include "Koffieautomaat.h"
#include "Munt.h"
#include "Koffiemunt.h"
#include "Euro.h"
#include "Cent.h"

int main() {

	Euro* eenEuro = new Euro();
	Cent* vijftigCent = new Cent();
	Koffiemunt* koffiemunt = new Koffiemunt();

	Koffieautomaat* koffieautomaat = new Koffieautomaat();

	koffieautomaat->kiesKoffie("Standaard", 0.5);
	koffieautomaat->kiesKoffie("Espresso", 1.0);
	koffieautomaat->kiesKoffie("Cappuccino", 1.5);

	cout << "Keuzemenu koffieautomaat:" << endl;
	cout << "Kies 1 om een 50 cent munt in te werpen." << endl;
	cout << "Kies 2 om een 1 euro munt in te werpen." << endl;
	cout << "Kies 3 om een koffie munt in te werpen." << endl;
	cout << "Kies 4 om je ingeworpen munten te bekijken." << endl;

	int keuze = 1;

	while (keuze != 0) {
		cin >> keuze;

		if (keuze == 1) {
			koffieautomaat->inworpMunt(vijftigCent);
		}
		else if (keuze == 2) {
			koffieautomaat->inworpMunt(eenEuro);
		}
		else if (keuze == 3) {
			koffieautomaat->inworpMunt(koffiemunt);
		}
		else if (keuze == 4) {
			cout << "Totaal aantal ingeworpen munten: " << koffieautomaat->aantalMunten() << endl;
			cout << "Je kunt de volgende koffie kopen: " << endl;

			if (koffieautomaat->aantalMunten() >= 0.5) {
				cout << "Standaard" << endl;
			}
			if (koffieautomaat->aantalMunten() >= 1.0) {
				cout << "Espresso" << endl;
			}
			if (koffieautomaat->aantalMunten() >= 1.5) {
				cout << "Cappuccino" << endl;
			}
		}
	}

	cin >> keuze;
	return 0;
}