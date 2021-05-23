/*Se pide crear un programa que lea desde teclado r, el primer elemento a1 y el tope k
y calcule la suma de los primeros k valores de la serie*/


#include <iostream>
#include <cmath>
using namespace std;


int main(){
	
	double a1,tope;
	double base;
	double operacion,i;
	
	
	cout << "Introduce el primer elemento --> ";
	cin >> a1;
	cout << "Introduce la base --> ";
	cin >> base;
	cout << "Introduce el tope --> ";
	cin >> tope;
	
	
	base = base * 1.0;
	
	
	for(i = 0; i <= tope; i++){
		
		operacion = a1 * pow(base,i);
		cout << "\na" << i << " = " << operacion;
	}
	
	cout << endl;
	
	system("pause");
}
