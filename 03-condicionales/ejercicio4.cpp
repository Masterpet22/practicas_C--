/*
4. escriba un programa que determine si un numero es positivo o negativo
*/
#include <iostream>

using namespace std;

int main()
{
    int num;
    cout << "Escribe un numero: ";
    cin >> num;

    if (num >= 0)
    {
        cout << "Ese numero es positivo";
    }
    else
    {
        cout << "ese numero es negativo";
    }

    return 0;
}