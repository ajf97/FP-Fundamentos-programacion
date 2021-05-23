/*Modificad las soluciones de los ejercicios 3 y 5 para que no se mezclen E/S y C
(entradas/salidas y cómputos) dentro de la misma estructura condicional.*/

#include <iostream>

using namespace std;


int main(){
	
	int a,b,c;                   // Variables de entrada
	bool condicion1,condicion2; // Variables separadoras de cómputos y E/S
	
	
	cout << "Introduce el primer numero: ";   //Datos de entrada
	cin >> a;
	cout << "Introduce el segundo numero: ";
	cin >> b;
	cout << "Introduce el tercer numero: ";
	cin >> c;
	
	
	condicion1 = a < b && a < c && b < c;    //Cómputos 
	condicion2 = a > b && a > c && b > c;
	
	
	if (condicion1)                                                             // E/S
		cout << "\nLos numeros estan ordenados de forma ascendente" << endl;  
		
	else{
		
		if (condicion2)
			cout << "\nLos numeros estan ordenados de forma descendente" << endl;
	
		else
			cout << "\nLos numeros estan desordenados" << endl;
		
	}
	
	system("pause");
	
	
}
