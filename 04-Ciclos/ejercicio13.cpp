// 13. Hacer un que realize la serie fibonacci - > 1 1 2 3 5 8 13. .. n

#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	int n, x = 0, y = 1, z = 1;
	cout << "Digite el numero de elementos que desea mostrar: ";
	cin >> n;

	for (int i = 1; i <= n; i++)
	{
		cout << z << " ";
		z = x + y;
		x = y;
		y = z;
	}

	getch();
	return 0;
}
