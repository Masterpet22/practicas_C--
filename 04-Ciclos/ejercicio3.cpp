/*3. Realice un programa que calcule y muestre en La salida estándar la suma de
Los cuadrados de Los 10 primeros enteros mayores que cero.*/

#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int suma, cuadrado;
    for (int i = 0; i <= 10; i++)
    {
        cuadrado = pow(i, 2);
        suma += cuadrado;
    }
    cout << suma;

    return 0;
}