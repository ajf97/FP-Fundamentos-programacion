/*Realizar un programa que lea los coeficientes reales  y  de una función gaussiana
(ver definición abajo). A continuación el programa leerá un valor de abscisa x y se
imprimirá el valor que toma la función en x*/

#include <iostream>
#include <cmath>

using namespace std;

int main (){
	
	double mu, sigma,x,y;
	const double PI = 3.141516;
	
	cout << "Introduce el valor de la media (mu): ";
	cin >> mu;
	
	cout << "Introduce el valor de la desviación típica (sigma): ";
	cin >> sigma;
	
	y = exp((-pow((x-mu)/sigma,2)/2)/(sigma/(mu*sqrt(2*PI))));
	
	cout << "El valor que toma la función es: " << y;
	
	system ("pause");
}
	
	
