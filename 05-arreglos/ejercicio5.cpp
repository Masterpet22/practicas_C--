/*5. Desarrolle un programa que lea de la entrada estándar un vector de enteros
	 determine el mayor elemento del vector.*/
#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
	int numero[100], n, mayor = 0;
	cout << "Digite el numero de elementos del arreglo: ";
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cout << i + 1 << ". Digite un numero: ";
		cin >> numero[i];

		if (numero[i] > mayor)
		{
			mayor = numero[i];
		}
	}
	cout << "El mayor de los numero es: " << mayor << endl;

	getch();
	return 0;
}