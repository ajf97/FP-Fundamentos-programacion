/* Programa que lee tres enteros desde el teclado y nos diga si est�n ordenados
(da igual si es de forma ascendente o descendente) o no lo est�n.*/

#include <iostream>

using namespace std;


int main(){
	
	int numero1,numero2,numero3; // Variables de entrada
	
	
	cout << "Introduce el primer numero: ";
	cin >> numero1;
	cout << "Introduce el segundo numero: ";
	cin >> numero2;
	cout << "Introduce el tercer numero: ";
	cin >> numero3;
	
	
	if (numero1 < numero2 && numero1 < numero3 && numero2 < numero3)
	
		cout << "\nLos numeros estan ordenados de forma ascendente" << endl;
		
	else{
		
		if (numero1 > numero2 && numero1 > numero3 && numero2 > numero3)
	
			cout << "\nLos numeros estan ordenados de forma descendente" << endl;
	
		else

			cout << "\nLos numeros estan desordenados" << endl;
		
	}
	
	system("pause");
	
	
}
