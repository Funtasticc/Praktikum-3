#include <iostream>
using namespace std;

int main()
{
	int zahl1, zahl2, zahl3, zahl4, zahl5, maximum, minimum;

	cout << "Bitte geben Sie die 1. Zahl ein: ";
	cin >> zahl1;

	cout << "Bitte geben Sie die 2. Zahl ein: ";
	cin >> zahl2;

	cout << "Bitte geben Sie die 3. Zahl ein: ";
	cin >> zahl3;

	cout << "Bitte geben Sie die 4. Zahl ein: ";
	cin >> zahl4;

	cout << "Bitte geben Sie die 5. Zahl ein: ";
	cin >> zahl5;

	{
		if (zahl1 >= zahl2 && zahl1 >= zahl3 && zahl1 >= zahl4 && zahl1 >= zahl5)
				maximum = zahl1;
		else if (zahl2 >= zahl1 && zahl2 >= zahl3 && zahl2 >= zahl4 && zahl2 >= zahl5)
				maximum = zahl2;
		else if (zahl3 >= zahl1 && zahl3 >= zahl2 && zahl3 >= zahl4 && zahl3 >= zahl5)
				maximum = zahl3;
		else if (zahl4 >= zahl1 && zahl4 >= zahl2 && zahl4 >= zahl3 && zahl4 >= zahl5)
				maximum = zahl4;

		else maximum = zahl5;
	}
	{
		if (zahl1 <= zahl2 && zahl1 <= zahl3 && zahl1 <= zahl4 && zahl1 <= zahl5)
			minimum = zahl1;
		else if (zahl2 <= zahl1 && zahl2 <= zahl3 && zahl1 <= zahl4 && zahl2 <= zahl5)
			minimum = zahl2;
		else if (zahl3 <= zahl1 && zahl3 <= zahl2 && zahl3 <= zahl4 && zahl3 <= zahl5)
			minimum = zahl3;
		else if (zahl4 <= zahl1 && zahl4 <= zahl2 && zahl4 <= zahl3 && zahl4 <= zahl5)
			minimum = zahl4;
		else minimum = zahl5;
	}
				cout << "Die " << << "Zahl war die kleinste der eingegebenen Zahlen und lautet: " << minimum << endl;
				cout << "Die " << << "Zahl war die größte der eingegebenen Zahlen und lautet: " << maximum << endl;
 	
	system("PAUSE");
	return 0;
	
}