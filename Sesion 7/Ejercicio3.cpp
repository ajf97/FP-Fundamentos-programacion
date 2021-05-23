////////////////////////////////////////////////////////////////////////////
//
// Fundamentos de Programaci�n
// ETS Inform�tica y Telecomunicaciones
// Universidad de Granada
// Departamento de Ciencias de la Computaci�n e Inteligencia Artificial
// Autor: Alejandro Jer�nimo Fuentes
//
////////////////////////////////////////////////////////////////////////////

/*Reescribid la soluci�n del ejercicio 33 (factorial y potencia) de la Relaci�n de Problemas
II, modulariz�ndola con funciones.
Para obligar a que el valor le�do de n sea positivo, implemente y llame a la funci�n
int LeeEnteroPositivo()*/

#include <iostream>
using namespace std;


int LeeEnteroPositivo(){
	
	int a_leer;
	
	do{
		cout << "Introduce un entero positivo --> ";
		cin >> a_leer;
	}while(a_leer <= 0);
	
	return a_leer;	
}


long long Factorial(int numero){
	
	long long factorial;
	int i;
	
	factorial = 1;
	
	for(i = 2; i <= numero ; i++){
		
		factorial = factorial * i;
	}
	
	return factorial;
}


int Potencia(int base, int numero){
	
	int potencia;
	int contador;
	
	contador = numero - 1;
	potencia = base;
	
	while(contador > 0){
		
		potencia = potencia * base;
		contador--;
	}
	
	return potencia;
}


int main(){
	
	int long factorial;
	int x,potencia;
	int long n;
	
	
	n = LeeEnteroPositivo();
	
	
	cout << "Introduce una base (x) --> ";
	cin >> x;
	
	
	factorial = Factorial(n);
	potencia = Potencia(x,n);
	
	
	cout << "\nEl factorial de " << n << " es " << factorial;
	cout << "\nLa potencia de base " << x << " y exponente " << n << " = " << potencia;
	cout << endl;
	
	system("pause");
}
