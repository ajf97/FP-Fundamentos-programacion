/*Realizar un programa que lea desde teclado un entero tope e imprima en pantalla todos
sus divisores propios. Para obtener los divisores, basta recorrer todos los enteros
menores que el valor introducido y comprobar si lo dividen. A continuaci�n, mejorar el
ejercicio obligando al usuario a introducir un entero positivo, usando un filtro con un
bucle post test (do while).*/


#include <iostream>
using namespace std;


int main (){
	
	int tope,divisor;
	
	
	do{
		
		cout << "Introduce un entero positivo: ";
		cin >> tope;
		
	}while(tope < 0); 
	
	
	divisor = 1;
	
	
	do{
	
		if (tope % divisor == 0)
			cout << "\n" <<  divisor << " es divisor de " << tope << endl;
			divisor++;
		
	}while(divisor <= tope);
	
	system("pause");
		
}
