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
	
	
	entero = car - '0'; //Los números entre el 0 y el 9 en la tabla ASCII equivalen a los enteros 48 y 57
	                  // respectivamente. Por tanto la diferencia entre cualquier caracter numérico y 48 devolverá su entero correspondiente.
	
	
	cout << "El entero del caracter es: " << entero << endl;
	
	
	system("pause");
	
	
}
