////////////////////////////////////////////////////////////////////////////
//
// Fundamentos de Programación
// ETS Informática y Telecomunicaciones
// Universidad de Granada
// Departamento de Ciencias de la Computación e Inteligencia Artificial
// Autor: Alejandro Jerónimo Fuentes
//
////////////////////////////////////////////////////////////////////////////


/*Escribid un programa que lea cuatro valores de tipo char
(min_izda, max_izda, min_dcha, max_dcha) e imprima las parejas que
pueden formarse con un elemento del conjunto {min_izda ... max_izda}
y otro elemento del conjunto {min_dcha ... max_dcha}. Por ejemplo, si
min_izda = b, max_izda = d, min_dcha = j, max_dcha = m, el programa
debe imprimir las parejas que pueden formarse con un elemento de {b c d} y otro
elemento de {j k l m}*/


#include <iostream>
using namespace std;


int main(){
	
	char min_izda,min_dcha;
	char max_dcha,max_izda;
	char reinicio;
	
		
	cout << "Introduce el minimo de la izquierda --> ";
	cin >> min_izda;
	cout << "Introduce el maximo de la izquierda --> ";
	cin >> max_izda;
	cout << "Introduce el minimo de la derecha --> ";
	cin >> min_dcha;
	cout << "Introduce el maximo de la derecha --> ";
	cin >> max_dcha;
	cout << endl;
	
	
	reinicio = min_dcha;
	
	
	for(min_izda; min_izda <= max_izda; min_izda++){
		min_dcha = reinicio;
		for (min_dcha; min_dcha <= max_dcha; min_dcha++){
			cout << min_izda << min_dcha;
			cout << " ";
		}
		cout << endl;
	}
	
	system("pause");
}
