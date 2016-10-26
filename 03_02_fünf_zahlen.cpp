#include <iostream>
using namespace std;

int main()
{
	int zahl1, zahl2, zahl3, zahl4, zahl5, min, max, pos_min, pos_max;

	cout << "Bitte geben Sie die 1. Zahl ein: ";
	cin >> zahl1;
	min = zahl1;
	max = zahl1;
	pos_min = 1;
	pos_max = 1;
///////////////////////////////////////////////////////////////////////
		cout << "Bitte geben Sie die 2. Zahl ein: ";
		cin >> zahl2;
	
		if (zahl2 < zahl1)
			{
			min = zahl2;
			pos_min = 2;
			}
		
		if (zahl2 > zahl2)
			{		
			zahl2 = max;
			pos_max = 2;
			}
//////////////////////////////////////////////////////////////////////////////////
		cout << "Bitte geben Sie die 3. Zahl ein: ";
		cin >> zahl3;

		if (zahl3 < zahl2 && zahl3 < zahl1)
			{	
				min = zahl3;
				pos_min = 3;
			}
	
		if (zahl3 > zahl2 && zahl3 < zahl1)
			{
				max = zahl3;
				pos_max = 3;
			}
///////////////////////////////////////////////////////////////////////////////
		cout << "Bitte geben Sie die 4. Zahl ein: ";
		cin >> zahl4;
	
		if (zahl4 < zahl3 && zahl4 < zahl2 && zahl4 < zahl1)
			{
			zahl4 = min;
			pos_min = 4;
			}

		if (zahl4 > zahl3 && zahl4 > zahl2 && zahl4 > zahl1)
			{
			zahl4 = max;
			pos_max = 4;
			}
/////////////////////////////////////////////////////////////////////////////////////	
		cout << "Bitte geben Sie die 5. Zahl ein: ";
		cin >> zahl5;
		
		if (zahl5 < zahl4 && zahl5 < zahl3 && zahl5 < zahl2 && zahl5 < zahl1)
			{
				min = zahl5;
				pos_min = 5;
			}

		if (zahl5 > zahl4 && zahl5 > zahl3 && zahl5 > zahl2 && zahl5 > zahl1)
				{
				max = zahl5;
				pos_max = 5;
				}
////////////////////////////////////////////////////////////////////////////////
	cout << "Die " << pos_min << ". Zahl war die kleinste der eingegebenen Zahlen und lautet: " << min << endl;
	cout << "Die " << pos_max << ". Zahl war die groesste der eingegebenen Zahlen und lautet: " << max << endl;
	system("PAUSE");
	return 0;
}