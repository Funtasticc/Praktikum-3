#include <iostream>
using namespace std;

int main()
{
	int z1 = 0, z2 = 0, z3 = 0, z4 = 0, z5 = 0;
	int kleinste = 0, groesste = 0;
	int kleinsteZ = 0, groessteZ = 0;
	cout << "Bitte geben sie die 1. Zahl ein: ";
	cin >> z1;
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	cout << "Bitte geben sie die 2. Zahl ein: ";
	cin >> z2;
	if (z1 < z2) 
	{ 
		kleinste = z1; kleinsteZ = 1; groesste = z2; groessteZ = 2; 
	}
	else if (z1 == z2) 
	{ 
		kleinste = z1; groesste = z1; groessteZ = 1; kleinsteZ = 1; 
	}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	cout << "Bitte geben sie die 3. Zahl ein: ";
	cin >> z3;
	if (z3 < kleinste) 
	{
		kleinste = z3; kleinsteZ = 3; 
	}
	else if (z3 > groesste) 
	{ 
		groesste = z3; groessteZ = 3; 
	}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	cout << "Bitte geben sie die 4. Zahl ein: ";
	cin >> z4;
	if (z4 < kleinste) 
	{
		kleinste = z4; kleinsteZ = 4;
	}
	else if (z4 > groesste) 
	{ 
		groesste = z4; groessteZ = 4;
	}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	cout << "Bitte geben sie die 5. Zahl ein: ";
	cin >> z5;
	if (z5 < kleinste) 
	{ kleinste = z5; kleinsteZ = 5; }
	else if (z5 > groesste) 
	{ 
		groesste = z5; groessteZ = 5;
	}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	cout << "Die " << kleinsteZ << ". Zahl war die kleinste der eingegebenen Zahlen und lautet: " << kleinste << endl;
	cout << "Die " << groessteZ << ". Zahl war die groesste der eingegebenen Zahlen und lautet: " << groesste << endl;

	system("pause");

}