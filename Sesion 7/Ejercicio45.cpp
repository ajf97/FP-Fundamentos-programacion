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
      2 3 4 5 6
		3 4 5 6
		4 5 6
		5 6
		6
*/


#include <iostream>
using namespace std;


int main(){
	
	int i,j;
	int tope;
	
	tope = 6;
	
	for(i=1; i <= tope; i++){
		for(j= i; j <= tope; j++){
			
			cout << j;
		}
      cout << endl;
	}
	
	
	system("pause");
	
}





