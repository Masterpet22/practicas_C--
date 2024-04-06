/*
2. Realice un programa que lea de la entrada
estándar números hasta que se
introduzca un cero. En ese momento el
programa debe terminar y mostrar en la
salida estándar el número de valores
mayores que cero leídos.
*/

#include <iostream>

using namespace std;

int main()
{
    int num, valor;
    do
    {
        cout << "Digite un numero: ";
        cin >> num;
        valor++;
    } while (num != 0);
    cout << "La cantidad de numeros mayores a cero escritos es: " << valor - 1;

    return 0;
}