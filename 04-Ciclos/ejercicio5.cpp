/*5. Escriba un programa que Lea valores enteros hasta que se introduzca un
valor en eL rango [20-30] o se introduzca el valor 0. EL programa debe
entregar la suma de Los valores mayores a 0 introducidos.*/

#include <iostream>

using namespace std;

int main()
{
    int num, suma = 0;

    do
    {
        cout << "Ingrese un numero: ";
        cin >> num;
        suma += num;
    } while ((num != 0) && ((num > 30) || (num < 20)));

    cout << suma;
    return 0;
}