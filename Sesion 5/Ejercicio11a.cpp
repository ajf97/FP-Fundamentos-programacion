/*Modificad las soluciones de los ejercicios 3 y 5 para que no se mezclen E/S y C
(entradas/salidas y cómputos) dentro de la misma estructura condicional.*/

#include <iostream>

using namespace std;


int main(){
	
	int edad;          // Variable de entrada
	double salario;    // Variable de entrada
	double total;      // Variable de salida
	bool condicion;
	const double SUBIDA = 0.05;
	
	
	cout << "Introduce tu edad: ";                            //Entrada de datos
	cin >> edad;
	cout << "Introduce tu salario: ";
	cin >> salario;
	
	
	condicion = salario <= 300 && edad >= 65;                  //Cómputos
	
	
	if (condicion)                                             
		total = (salario * SUBIDA) + salario;
  		
	
	
	if (condicion)                                             //Salida de resultados 
		cout << "\nTu salario final es: " << total << endl;
	
	else 
		cout << "\nNo es aplicable la subida" << endl;
	
	
	system("pause");
	
}
