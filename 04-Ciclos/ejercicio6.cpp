/*
	6.Escriba un programa que calcule x^y,
	donde tanto x como y son enteros
	positivos, sin utilizar la función pow.
*/

#include <iostream>

using namespace std;

int main()
{
	int x, y, resultado;
	cout << "Digite el valor de X: ";
	cin >> x;
	cout << "Digite el valor de Y: ";
	cin >> y;

	if (x > 0 && y > 0)
	{
		resultado = x;
		for (int i = 1; i < y; i++)
		{
			x *= resultado;
		}
		cout << x;
	}
	return 0;
}