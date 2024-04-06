/*
1.Realice un programa que solicite un entero del 1 al 10 y muestre su tabla de multiplicar
*/
#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int num, tabla;
    cout << "Digite un numero entre el 1 y el 10: ";
    cin >> num;
    while (tabla <= 12)
    {
        cout << num << " X " << tabla << " = " << num * tabla << endl;
        tabla++;
    }
    getch();
    return 0;
}