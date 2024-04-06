// 8. Escriba un programa que calcule el valor de: 1+3+5+....+2n-1

#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	int ini = 0, fin;
	cout << "Digite el numero final de la suma: ";
	cin >> fin;

	for (int i = 1; i <= fin; i++)
	{
		ini = (i * 2) - 1;
	}
	cout << "La suma de los valores desde 1 hasta " << fin << " es: " << ini;
	getch();
	return 0;
}