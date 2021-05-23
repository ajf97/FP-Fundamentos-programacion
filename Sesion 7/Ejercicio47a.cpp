////////////////////////////////////////////////////////////////////////////
//
// Fundamentos de Programación
// ETS Informática y Telecomunicaciones
// Universidad de Granada
// Departamento de Ciencias de la Computación e Inteligencia Artificial
// Autor: Alejandro Jerónimo Fuentes
//
////////////////////////////////////////////////////////////////////////////


/*Modificad los dos ejercicios anteriores para que se lea desde teclado el valor inicial
y el número de filas a imprimir. En los ejemplos anteriores, el valor inicial era 1 y se
imprimían un total de 6 filas.*/

#include <iostream>
using namespace std;


int main(){
	
	int i,j;
	int tope;
	
	
	cout << "Introduce el valor inicial --> ";
	cin >> i;
	cout << "Introduce el numero de filas --> ";
	cin >> tope;
	cout << endl;
	
	
	for(i; i <= tope; i++){
		for(j= i; j <= tope; j++){
			cout << j;
		}
      cout << endl;
	}
	
	
	system("pause");
	
}

