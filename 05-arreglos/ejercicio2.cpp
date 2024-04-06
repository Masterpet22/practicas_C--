/*
Escribe un programa que defina un
vector de números y calcule la
multiplicación acumulada de sus
elementos.
*/
#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
	int n[] = {1, 2, 3};
	int multiplicacion = 1;

	for (int i = 0; i < 3; i++)
	{
		multiplicacion *= n[i];
	}
	cout << multiplicacion << endl;

	system("pause");
	return 0;
}