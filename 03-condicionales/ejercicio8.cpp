/*
Escribe un programa que lea tres numeros. despues debe leer un cuarto numero e indicar si el numero
coincide con alguno de los introducidos con anterioridad.
*/
#include <iostream>

using namespace std;
float n1, n2, n3, n4;
int main()
{
    cout << "Introduce 4 numero separados con un espacio: \n";
    cin >> n1 >> n2 >> n3 >> n4;

    if (n4 == n1)
    {
        cout << "El primer y cuarto numero son iguales";
    }
    else if (n4 == n2)
    {
        cout << "El segundo y cuarto numero son iguales";
    }
    else if (n4 == n3)
    {
        cout << "El tercer y cuarto numero son iguales";
    }
    else
    {
        cout << "El cuarto numero es diferente a todos";
    }

    return 0;
}