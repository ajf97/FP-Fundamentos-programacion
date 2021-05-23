/* Programa que lee un caracter lo pase a minuscula
y lo imprima en pantalla */

#include <iostream>

using namespace std;


int main (){
	
	char mayuscula, final;
	int minuscula;
	
	
	cout << "Introduce un caracter en mayuscula: ";
	cin >> mayuscula;
	
	//'a'-'A'
	minuscula = mayuscula + 32; // La diferencia de la posicion de un caracter en minúscula y otro mayúscula es 32
	final = minuscula;         //  Pasamos de tipo int a char
	
	
	cout << "El caracter en minuscula es: " << final << endl;
	
	
	system ("pause");
	

}
