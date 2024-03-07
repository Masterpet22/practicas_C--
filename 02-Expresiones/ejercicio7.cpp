#include <iostream>

using namespace std;

int main()
{
    float practica, teoria, participacion;
    cout << "Digite la nota de prectica: ";
    cin >> practica;
    cout << "Digite la nota de teoria: ";
    cin >> teoria;
    cout << "Digite la nota de participacion: ";
    cin >> participacion;

    practica *= 0.30;      // practica = practica * 0.30
    teoria *= 0.60;        // teoria = teoria * 0.30
    participacion *= 0.10; // participacion = participacion * 0.30

    cout << practica + teoria + participacion;
    return 0;
}