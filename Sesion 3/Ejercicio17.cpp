/* Realizar un programa que declare las variables x, y y z, les asigne los valores 10, 20
y 30 e intercambien entre sí sus valores de forma que el valor de x pasa a y, el de y
pasa a z y el valor de z pasa a x */

#include <iostream>

using namespace std;

int main () {
	
	int x = 10;
	int y = 20;
	int z = 30;
	int aux;
	
	
	aux = y;
	y = x;
	x = z;
	z=aux;
	
	
	
	cout << "\nEl valor de la variable x es: " << x;
	cout << "\nEl valor de la variable y es: " << y;
	cout << "\nEl valor de la variable z es: " << z << endl;
	
	system ("pause");
	
}
	
