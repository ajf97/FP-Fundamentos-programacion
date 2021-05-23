/*Calcular mediante un programa en C++ la función potencia xn, y la función factorial
n! con n un valor entero y x un valor real. No pueden usarse las funciones de la
biblioteca cmath.*/


#include <iostream>
using namespace std;


int main(){
	
	int n_factorial = 1;
	int x,n,potencia;
	int contador;
	
	
	do{
		
		cout << "Introduce un entero positivo (n) --> ";
		cin >> n;
	}while(n <= 0);
	
	
	cout << "Introduce una base --> ";
	cin >> x;
	
	
	contador  = n - 1;
	potencia = x;
	
	while(contador > 0){
		
		potencia = potencia * x;
		contador--;
	}
	
	
	contador = n;
	
	
	for(contador; contador >= 1; contador--){
		
		n_factorial = n_factorial * contador;
	}
	
	
	cout << "\nEl factorial de " << n << " es " << n_factorial;
	cout << "\nLa potencia de base " << x << " y exponente " << n << " = " << potencia;
	cout << endl;
	
	system("pause");
	
}
