////////////////////////////////////////////////////////////////////////////
//
// Fundamentos de Programaci�n
// ETS Inform�tica y Telecomunicaciones
// Universidad de Granada
// Departamento de Ciencias de la Computaci�n e Inteligencia Artificial
// Autor: Alejandro Jer�nimo Fuentes
//
////////////////////////////////////////////////////////////////////////////


/*Modificad los dos ejercicios anteriores para que se lea desde teclado el valor inicial
y el n�mero de filas a imprimir. En los ejemplos anteriores, el valor inicial era 1 y se
imprim�an un total de 6 filas.*/

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

