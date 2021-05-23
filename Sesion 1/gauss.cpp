/*Realizar un programa que lea los coeficientes reales  y  de una funci�n gaussiana
(ver definici�n abajo). A continuaci�n el programa leer� un valor de abscisa x y se
imprimir� el valor que toma la funci�n en x*/

#include <iostream>
#include <cmath>

using namespace std;

int main (){
	
	double mu, sigma,x,y;
	const double PI = 3.141516;
	
	cout << "Introduce el valor de la media (mu): ";
	cin >> mu;
	
	cout << "Introduce el valor de la desviaci�n t�pica (sigma): ";
	cin >> sigma;
	
	y = exp((-pow((x-mu)/sigma,2)/2)/(sigma/(mu*sqrt(2*PI))));
	
	cout << "El valor que toma la funci�n es: " << y;
	
	system ("pause");
}
	
	
