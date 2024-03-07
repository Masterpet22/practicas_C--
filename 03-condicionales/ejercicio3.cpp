/*
3. Relice un programa que lea un valor entero y determine si se trata de un numero par o impar
*/
#include <iostream>

using namespace std;

int main()
{
    int num = 0;
    cout << "Escriba el numero a evaluar: ";
    cin >> num;

    if (num % 2 == 0)
    {
        cout << "El numero es par";
    }
    else
    {
        cout << "El numero es impar";
    }

    return 0;
}