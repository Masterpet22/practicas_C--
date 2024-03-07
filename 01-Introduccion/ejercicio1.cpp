/*1. Escribe un programa que lea de la entrada estandar dos numeros
y muestre en la salida estandar su suma, resta, multiplicacion y 
division.*/

#include<iostream>

using namespace std;

int main(){
	int num1;
	int num2;
	cout<<"Escribe el primer numero: \n";
	cin>>num1;
	cout<<"Escribe el segundo numero: \n";
	cin>>num2;
	
	cout<<"La suma es: "<<num1+num2<<endl;
	cout<<"La resta es: "<<num1-num2<<endl;
	cout<<"La multiplicacion es: "<<num1*num2<<endl;
	cout<<"La division es: "<<num1/num2<<endl;
	
	return 0;
}
