/*
	Bloque 4. Estructuras Repetitivas
	Ejercicio 14:
	En una clase de 5 alumnos se han realizado tres exámenes y
	se requiere determinar el número de:
	a) Alumnos que aprobaron todos los exámenes.
	b) Alumnos que aprobaron al menos un examen.
	c) Alumnos que aprobaron únicamente el último examen.
	Realice un programa que permita la lectura de los datos y el
	cálculo de las estadísticas.
*/
#include <iostream>
using namespace std;

int main()
{
	int num_students;
	int all_passed = 0;
	int at_least_one_passed = 0;
	int only_last_passed = 0;

	// Leer el número de estudiantes
	cout << "Ingrese el número de estudiantes: ";
	cin >> num_students;

	for (int i = 1; i <= num_students; ++i)
	{
		double exam1, exam2, exam3;

		// Leer las calificaciones de los exámenes
		cout << "Ingrese la calificación del estudiante " << i << " en el examen 1: ";
		cin >> exam1;
		cout << "Ingrese la calificación del estudiante " << i << " en el examen 2: ";
		cin >> exam2;
		cout << "Ingrese la calificación del estudiante " << i << " en el examen 3: ";
		cin >> exam3;

		// Verificar si el estudiante aprobó todos los exámenes
		if (exam1 >= 50 && exam2 >= 50 && exam3 >= 50)
		{
			all_passed++;
		}

		// Verificar si el estudiante aprobó al menos un examen
		if (exam1 >= 50 || exam2 >= 50 || exam3 >= 50)
		{
			at_least_one_passed++;
		}

		// Verificar si el estudiante aprobó únicamente el último examen
		if (exam1 < 50 && exam2 < 50 && exam3 >= 50)
		{
			only_last_passed++;
		}
	}

	// Imprimir los resultados
	cout << "Número de estudiantes que aprobaron todos los exámenes: " << all_passed << endl;
	cout << "Número de estudiantes que aprobaron al menos un examen: " << at_least_one_passed << endl;
	cout << "Número de estudiantes que aprobaron únicamente el último examen: " << only_last_passed << endl;

	return 0;
}
