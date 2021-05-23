/*Se pide crear un programa que lea desde teclado r, el primer elemento a1 y el tope k
y calcule la suma de los primeros k valores de la serie. */


#include <iostream>
using namespace std;


int main(){
	
	double a0,tope;
	double base;
	double operacion,i;
	
	
	cout << "Introduce el primer elemento --> ";
	cin >> a0;
	cout << "Introduce la base --> ";
	cin >> base;
	cout << "Introduce el tope --> ";
	cin >> tope;
	
	i = 0;
	base = base * 1.0;
	
	
	for(i; i <= tope; i++){
		
		a0 = a0 * base;
		operacion = a0;
		cout << "\na" << i << " = " << operacion;
	}
	
	cout << endl;
	
	system("pause");
}
