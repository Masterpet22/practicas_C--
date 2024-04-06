#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<double> temperaturas;
    double temp;

    // Leer 6 temperaturas
    for (int i = 0; i < 6; i++)
    {
        cout << "Ingrese la temperatura " << i + 1 << ": ";
        cin >> temp;
        temperaturas.push_back(temp);
    }

    // Calcular la temperatura media
    double suma = 0;
    for (int i = 0; i < 6; i++)
    {
        suma += temperaturas[i];
    }
    double media = suma / 6;

    // Encontrar la temperatura más alta y la más baja
    double maxima = *max_element(temperaturas.begin(), temperaturas.end());
    double minima = *min_element(temperaturas.begin(), temperaturas.end());

    // Imprimir los resultados
    cout << "Temperatura media: " << media << endl;
    cout << "Temperatura más alta: " << maxima << endl;
    cout << "Temperatura más baja: " << minima << endl;

    return 0;
}

// GPT