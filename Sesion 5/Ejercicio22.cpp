/*Realizar un programa que lea enteros desde teclado y calcule cu�ntos se han introducido
y cual es el m�nimo de dichos valores (pueden ser positivos o negativos). Se
dejar� de leer datos cuando el usuario introduzca el valor 0. Realizad la lectura de
los enteros dentro de un bucle sobre una �nica variable llamada dato. Es importante controlar los casos extremos
como por ejemplo, que el primer valor le�do fuese ya el
terminador de entrada (en este caso, el cero).*/

#include <iostream>
using namespace std;


int main(){
	
	int dato,min;
	int cuenta = 0;
	bool final = false;
	
	
	while(!final){
		
		cout << "Introduzca un numero: ";
		cin >> dato;
		
		
		if(dato == 0){
			final = true;
		}
			
		else {
			
			if (min == 0 || dato < min){
				min = dato;
			}
			
			cuenta++;
			
		}
	}
	
	cout << "\nHas introducido un total de: " << cuenta << " datos enteros" << endl;
	cout << "El minimo de los valores que has introducido es: " << min << endl;
	
	system("pause");
	
}
