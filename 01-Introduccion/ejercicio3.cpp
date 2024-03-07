/*3. Realice un programa que lea de la entrada estandar los siguientes
datos de una persona

	Edad: dato de tipo entero
	Sexo: dato de tipo caracter
	ALtura en metros: dato de tipo real
	
Tras leer los datos, el programa debe mostrarlos en la salida estandar.*/

#include<iostream>
using namespace std;

int main(){
	int edad;
	char sexo[10];
	float altura;
	
	cout<<"Cual es tu edad: "; cin>>edad;
	cout<<"Cual es tu sexo: "; cin>>sexo;
	cout<<"Cual es tu altura en metros: "; cin>>altura;
	
	cout<<"\nTu edad es: "<<edad;
	cout<<"\nTu sexo es: "<<sexo;
	cout<<"\nTu altura en metros es: "<<altura;
	return 0;
}
