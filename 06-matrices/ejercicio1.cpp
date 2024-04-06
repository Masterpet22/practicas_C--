/*
1. Hacer un programa para rellenar una matriz pidiendo al usuario el número de filas
y columnas, Posteriormente mostrar La matriz en pantalla.
*/
#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
	int n[100][100], nfilas = 0, ncolumna = 0;
	cout << "Que cantidad de filas tendra la matriz: ";
	cin >> nfilas;
	cout << "Que cantidad de columnas tendra la matriz: ";
	cin >> ncolumna;

	// Almacenando los elementos
	for (int i = 0; i < nfilas; i++)
	{
		for (int e = 0; e < ncolumna; e++)
		{
			cout << "Digite el numero de la posicion [" << i << "][" << e << "]: ";
			cin >> n[i][e];
		}
	}
	// mostrando elementos
	for (int i = 0; i < nfilas; i++)
	{
		for (int e = 0; e < ncolumna; e++)
		{
			cout << n[i][e] << "\t";
		}
		cout << "\n";
	}

	system("pause");
	return 0;
}