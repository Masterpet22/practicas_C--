/*
1. Escriba un porframa que lea dos numero y determine cual de ellos es mayor
*/

#include <iostream>

using namespace std;

int main()
{
    float num1, num2;

    cout << "Digite el primer numero: ";
    cin >> num1;
    cout << "Digite el segundo numero: ";
    cin >> num2;

    if (num1 > num2)
    {
        cout << "El primer numero es mayor";
    }
    else
    {
        cout << "El segundo numero es mayor";
    }

    return 0;
}