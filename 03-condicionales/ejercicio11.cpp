/*
11.Hacer un programa que simule un cajero auntomatico con un saldo inicial de 10000 pesos.
*/
#include <iostream>

using namespace std;
int monto, eleccion, saldo = 10000;
int main()
{
    do
    {
        cout << "Que desea realizar: \n1-Ver saldo\n2-Retirar alguna cantidad\n3-Retirar el total\n4-Salir\n";
        cin >> eleccion;
        // cout << "Su eleccion es: " << eleccion << endl;
        switch (eleccion)
        {
        case 1:
            cout << "El saldo de la cuenta es: " << saldo << endl;
            break;
        case 2:
            cout << "Que cantidad desea retirar: ";
            cin >> monto;
            if (monto <= saldo)
            {
                saldo -= monto;
                cout << "Usted ha retirado: " << monto << " su saldo restante es: " << saldo << endl;
            }
            else
            {
                cout << "El cajero no tiene suficiente saldo para esa cantidad\n";
                cout << "El saldo disponible es: " << saldo << endl;
                main();
            }
            break;
        case 3:
            saldo -= saldo;
            cout << "Usted ha retirado todo el saldo disponible\n";
            cout << "El saldo restante de la cuenta es 0\n";
            break;
        default:
            break;
        }
    } while (eleccion <= 3);

    return 0;
}