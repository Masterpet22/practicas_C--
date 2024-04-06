/*
	Hacer un programa que calcule el
	resultado de la siguiente expresion:
	1-2+3-4+5-6...n
*/
#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
	int n, suma = 0;
	cout << "Digite el valor de n: ";
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		if (i % 2 == 0)
		{
			i *= -1;
		}
		suma += i;
		if (i < 0)
		{
			i *= -1;
		}
	}

	cout << suma << endl;
	system("pause");
	return 0;
}