#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double a, b, c, discriminante, x1, x2;

    cout << "Ingrese los coeficientes a, b y c: ";
    cin >> a >> b >> c;

    discriminante = b * b - 4 * a * c;

    if (discriminante > 0)
    {
        x1 = (-b + sqrt(discriminante)) / (2 * a);
        x2 = (-b - sqrt(discriminante)) / (2 * a);
        cout << "Las soluciones son: " << x1 << " y " << x2;
    }
    else if (discriminante == 0)
    {
        x1 = -b / (2 * a);
        cout << "La solución es: " << x1;
    }
    else
    {
        cout << "No hay soluciones reales.";
    }

    return 0;
}
