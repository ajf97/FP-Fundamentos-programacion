/* Programa que lee el valor de la edad (dato de tipo entero) y salario (dato de
tipo real) de una persona. Subid el salario un 5% si �ste es menor de 300 euros y la
persona es mayor de 65 a�os*/

#include <iostream>

using namespace std;


int main(){
	
	int edad;          // Variable de entrada
	double salario;    // Variable de entrada
	double total;      // Variable de salida
	
	
	cout << "Introduce tu edad: ";
	cin >> edad;
	cout << "Introduce tu salario: ";
	cin >> salario;
	
	
	if (salario <= 300 && edad >= 65) {
		
		total = (salario * 0.05) + salario;
		cout << "\nTu salario final es: " << total << endl;	
	}
	
	else 
		
		cout << "\nNo es aplicable la subida" << endl;
	
	
	system("pause");
	
}
