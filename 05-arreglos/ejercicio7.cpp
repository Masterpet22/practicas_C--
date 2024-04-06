/*7. Realiza un programa que defina dos vectores de caracteres y después almacene eL
contenido de ambos vectores en un nuevo vector, situando en primer lugar los elementos
del primer vector seguido por Los elementos del segundo vector. Muestre el contenido
del nuevo vector en La salida estándar. */

#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
	char vocales[] = {'a', 'e', 'i', 'o', 'u'}, letras[] = {'b', 'c', 'd', 'f', 'g'}, resultado[10];
	for (int i = 0; i < 5; i++)
	{
		resultado[i] = vocales[i];
	}
	for (int i = 5; i < 10; i++)
	{
		resultado[i] = letras[i - 5];
	}
	for (int i = 0; i < 10; i++)
	{
		cout << resultado[i] << endl;
	}

	system("pause");
	return 0;
}