/*1. Escribe un programa que defina un vector de números y calcule La suma de
sus elementos. */

#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
	int suma = 0;
	int n[] = {1, 2, 3, 4, 5};

	for (int i = 0; i < 5; i++)
	{
		suma += n[i];
	}
	cout << suma << endl;
	system("pause");
	return 0;
}