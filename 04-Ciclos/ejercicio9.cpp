// 9. escriba un programa que calcule el valor de: 1*2*3...*n (factorial)
#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	int num;
	cout << "Digite el numero para conocer su factorial: ";
	cin >> num;
	for (int i = num; i > 1; i--)
	{
		num *= i - 1;
	}
	cout << num;
	getch();
	return 0;
}