#include <iostream>
using namespace std;

int main()
{
	int summe = 0;
	int zahl1 = 0, zahl2 = 0;
	char buchstabe1 = 0, buchstabe2 = 0;

	cout << "Bitte geben Sie die erste Ziffer ein: ? ";
	cin >> buchstabe1;


	cout << "Bitte geben Sie die zweite Ziffer ein : ? ";
	cin >> buchstabe2;


	if (buchstabe1 == 'q' || buchstabe2 == 'q')
	{

		cout << "Der erste eingegebene Buchstabe lautet: " << buchstabe1 << endl;
		cout << "Der zweite eingegebene Buchstabe lautet: " << buchstabe2 << endl;

		cout << "Das Programm wurde durch Eingabe von q beendet." << endl;

		system("PAUSE");

		return 1;
	}
	else if(zahl1 != 'q' && zahl2 != 'q')
	{
		zahl1 = buchstabe1 - 48;
		zahl2 = buchstabe2 - 48;

		summe = zahl1 + zahl2;

		cout << "" << zahl1 << " + " << zahl2 << " = " << summe << endl;

		system("PAUSE");
		return 0;
	}


}