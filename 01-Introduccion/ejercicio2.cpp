/*Escribe un programa que lea de la entrada estandar
el precio de un producto y muestre en la salida estandar
el precio del producto al aplicarle el ITBIS*/

#include<iostream>

using namespace std;

int main(){
	int precioProducto;
	float itbis = 0.18;
	
	cout<<"Introduzca el precio del producto: ";
	cin>>precioProducto;
	
	cout<<"El precio con el impuesto es: "
	<< precioProducto * itbis + precioProducto;
	
	
	return 0;
}
