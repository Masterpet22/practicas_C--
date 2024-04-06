/*
3. Escribe un programa que Lea de La entrada estándar un vector de números y
muestre en La salida estándar los números del vector con sus índices asociados.
*/

#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
	int numeros[100], n;

	cout << "Digite cuantos elementos tendra el vector: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Digite un numero: ";
		cin >> numeros[i];
	}
	for (int i = 0; i < n; i++)
	{
		cout << i << " -> " << numeros[i] << endl;
	}

	system("pause");
	return 0;
}