/*
2. Escriba un porframa que lea tres numeros y determine cual de ellos es mayor
*/

#include <iostream>

using namespace std;

int main()
{
    float n1, n2, n3;

    cout << "Digite los numeros separados por un espacio: ";
    cin >> n1 >> n2 >> n3;

    if (n1 > n2 && n1 > n3)
    {
        cout << "El mayor es: " << n1;
    }
    else if (n2 > n1 && n2 > n3)
    {
        cout << "El mayor es: " << n2;
    }
    else
    {
        cout << "El mayor es: " << n3;
    }

    return 0;
}