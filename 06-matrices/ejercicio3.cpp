/*3. Hacer una matriz de tipo entera de 2 * 2, Llenarla de números y Luego copiar todo
su contenido hacia otra matriz.*/
#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	int numero[2][2] = {{1, 2}, {3, 4}};
	int matriz[2][2];
	// pasando el contenido de una matriz a otra
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			matriz[i][j] = numero[i][j];
		}
	}
	// mostrando el contenido de una matriz
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			cout << matriz[i][j] << endl;
		}
	}

	getch();
	return 0;
}