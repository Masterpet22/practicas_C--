/*
Ejercicio 8:
Hacer un programa que lea 5 numeros en un arreglo, los copie a otro arreglo multiplicados por 2 y muestre el segundo arreglo.
*/

#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
	int n1[] = {10, 8, -2, -6, 5}, n2[5];
	for (int i = 0; i < 5; i++)
	{
		n2[i] = n1[i] * 2;
	}
	for (int i = 0; i < 5; i++)
	{
		cout << n2[i] << endl;
	}

	system("pause");
	return 0;
}