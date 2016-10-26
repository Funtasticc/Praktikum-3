#include <iostream>
using namespace std;

int main()
{
	int t1, m1, j1, t2, m2, j2;

	// 1.01 Eingabe des Tages des ersten Datums
	cout << "Bitte geben Sie den Tag des ersten Datums ein: ";
	cin >> t1;

	// 1.02 Eingabe des Monats des ersten Datums
	cout << "Bitte geben Sie den Monat des ersten Datums ein: ";
	cin >> m1;

	// 1.03 Eingabe des Jahres des ersten Datums
	cout << "Bitte geben Sie das Jahr des ersten Datums ein: ";
	cin >> j1;

	// 1.11 Eingabe des Tages des zweiten Datums
	cout << "Bitte geben Sie den Tag des zweiten Datums ein: ";
	cin >> t2;

	// 1.12 Eingabe des Monats des zweiten Datums
	cout << "Bitte geben Sie den Monat des zweiten Datums ein: ";
	cin >> m2;

	// 1.13 Eingabe des Jahres des zweiten Datums
	cout << "Bitte geben Sie das Jahr des zweiten Datums ein: ";
	cin >> j2;

	// 2.1 Prüfen ob beide Datumsangaben gleich sind!
	{
		
			if ((t1 == t2) && (m1 == m2) && (j1 == j2))
				cout << "Beide Datumsangaben sind gleich." << endl;
		
			else if (j1 > j2)
				cout << "Das erste Datum liegt nach dem zweiten Datum." << endl;
		
			else if (j1 < j2)
				cout << "Das erste Datum liegt vor dem zweiten Datum." << endl;
		
			else if (j1 == j2 && m1 > m2)
				cout << "Das erste Datum liegt nach dem zweiten Datum." << endl;
		
			else if (j1 == j2 && m1 < m2)
				cout << "Das erste Datum liegt vor dem zweiten Datum." << endl;
		
			else if (j1 == j2 && m1 == m2 && t1 > t2)
				cout << "Das erste Datum liegt nach dem zweiten Datum." << endl;
		
			else if (j1 == j2 && m1 == m2 && t1 < t2)
				cout << "Das erste Datum liegt vor dem zweiten Datum." << endl;
		
	}

	system("PAUSE");

	return 0;
}