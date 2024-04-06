/*
Ejercicio 2:
Realiza un programa que defina una matriz
de 3x3 y escriba un ciclo para que
muestre la diagonal principal de la matriz.
*/

#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
	int matriz[3][3] = {{1, 2, 3},
						{4, 5, 6},
						{7, 8, 9}};
	cout << matriz[0][0] << endl;
	cout << matriz[1][1] << endl;
	cout << matriz[2][2] << endl;

	system("pause");
	return 0;
}