/* Programa que lee un caracter comprendido 
entre 0 y 9 y que obtenga su correspondiente
entero */

#include <iostream>

using namespace std;

int main (){
	
	char car;
	int entero;
	
	cout << "Introduce un caracter numerico comprendido entre el 0 y el 9: ";
	cin >> car;
	
	
	entero = car - '0'; //Los n�meros entre el 0 y el 9 en la tabla ASCII equivalen a los enteros 48 y 57
	                  // respectivamente. Por tanto la diferencia entre cualquier caracter num�rico y 48 devolver� su entero correspondiente.
	
	
	cout << "El entero del caracter es: " << entero << endl;
	
	
	system("pause");
	
	
}
