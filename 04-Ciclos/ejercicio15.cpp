/*Realice un programa que solicite al usuario que piense un numero entero entre el 1 y el 100. El programa debe generar un numero aleatorio en ese mismo rango indicarle al usuario si el numero que digito es menor o mayor al numero aleatorio, así hasta que lo adivine. y por ultimo mostrarle el numero de intentos que Le Llevo.
variable= Limite _ inferior + rand() % (Limite superior +1- Limite _ inferior);*/

#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main()
{
	int numero, dato, contador = 0;
	srand(time(NULL)); // genera el numero aleatorio
	dato = 1 + rand() % (100);

	do
	{
		cout << "Digite un numero: ";
		cin >> numero;

		if (numero > dato)
		{
			cout << "\nDigite un numero menor\n";
		}
		if (numero < dato)
		{
			cout << "\nDigite un numero mayor\n";
		}
		contador++;
	} while (numero != dato);

	cout << "\nFelicidades, adivinaste el numero" << endl;
	cout << "Numeor de intentos: " << contador << endl;

	system("pause");
	return 0;
}