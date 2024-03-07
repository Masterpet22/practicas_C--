#include <iostream>
#include <cmath> // Incluimos la librería cmath para usar la función pow

using namespace std;

int main()
{
    float cat1, cat2, hip = 0;
    cout << "Digite el valor del cateto 1: ";
    cin >> cat1;
    cout << "Digite el valor del cateto 2: ";
    cin >> cat2;

    // Calculamos la hipotenusa usando la fórmula: hipotenusa = sqrt(cateto1^2 + cateto2^2)
    hip = sqrt(pow(cat1, 2) + pow(cat2, 2));

    cout << "La hipotenusa es: " << hip << endl;
    return 0;
}
