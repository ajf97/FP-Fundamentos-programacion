////////////////////////////////////////////////////////////////////////////
//
// Fundamentos de Programación
// ETS Informática y Telecomunicaciones
// Universidad de Granada
// Departamento de Ciencias de la Computación e Inteligencia Artificial
// Autor: Alejandro Jerónimo Fuentes
//
////////////////////////////////////////////////////////////////////////////


/*Cread un programa que ofrezca en pantalla la siguiente salida:
	1 2 3 4 5 6
	2 3 4 5 6 7
	3 4 5 6 7 8
	4 5 6 7 8 9
	5 6 7 8 9 10
	6 7 8 9 10 11
*/

#include <iostream>
using namespace std;


int main(){
	
	
	int i,j;
	int tope;
	int contador;
	
	
	tope = 6;
	contador = 6;
	
	
	for(i=1; i <= tope; i++){
		contador++;
		for(j=i; j < contador; j++){
			cout << j;
		}
		cout << endl;
	}
	
	system("pause");
	
}
