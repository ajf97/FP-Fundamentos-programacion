/*En el ejercicio 14 de la Relación de Problemas I se pedía escribir un programa que leyese
un valor entero de tres dígitos e imprimiese los dígitos separados por un espacio
en blanco.*/


#include <iostream>
#include <cmath>
using namespace std;


int main () {
	
	int valor,resto;
	int contador,reducir;
	int divisor;
	
	cout << "Introduce un valor : ";
	cin >> valor;
	
	contador = 0;
	reducir = valor;
	
	
	while (reducir > 0){           //Cuenta los digitos del numero introducido
		
		reducir = reducir / 10;
		contador++;
	}
	
	
	reducir = valor;
	divisor = pow(10,contador - 1);
	
	
	for(int i = 0; i < contador; i++){
		resto = reducir;
		resto = (reducir /divisor) % 10;
		cout << resto << " ";
		divisor = divisor / 10;
	}
	
	cout << endl;
	
	system ("pause");
	
}
