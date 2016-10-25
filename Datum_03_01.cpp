#include <iostream>
using namespace std;

int main()
{ 
	int tag_1, monat_1, jahr_1, tag_2, monat_2, jahr_2 = 0;

	// 1.01 Eingabe des Tages des ersten Datums
	cout << "Bitte geben Sie den Tag des ersten Datums ein: ";
	cin >> tag_1;

	// 1.02 Eingabe des Monats des ersten Datums
	cout << "Bitte geben Sie den Monat des ersten Datums ein: ";
	cin >> monat_1;

	// 1.03 Eingabe des Jahres des ersten Datums
	cout << "Bitte geben Sie das Jahr des ersten Datums ein: ";
	cin >> jahr_1;

	// 1.11 Eingabe des Tages des zweiten Datums
	cout << "Bitte geben Sie den Tag des zweiten Datums ein: ";
	cin >> tag_2;

	// 1.12 Eingabe des Monats des zweiten Datums
	cout << "Bitte geben Sie den Monat des zweiten Datums ein: ";
	cin >> monat_2;

	// 1.13 Eingabe des Jahres des zweiten Datums
	cout << "Bitte geben Sie das Jahr des zweiten Datums ein: ";
	cin >> jahr_2;

	// 2.1 Prüfen ob beide Datumsangaben gleich sind!
	{
	
		if ((tag_1 == tag_2) && (monat_1 == monat_2) && (jahr_1 == jahr_2))
			cout << "Beide Datumsangaben sind gleich." << endl;

		else if ((tag_1 < tag_2) && (monat_1 < monat_2) && (jahr_1 < jahr_2))
			cout << "Das erste Datum liegt vor dem zweiten Datum." << endl;

		else cout << "Das erste Datum liegt nach dem zweiten Datum." << endl;
		
	}

	system("PAUSE");

	return 0;
}