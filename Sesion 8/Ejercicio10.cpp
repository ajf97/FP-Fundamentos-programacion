////////////////////////////////////////////////////////////////////////////
//
// Fundamentos de Programación
// ETS Informática y Telecomunicaciones
// Universidad de Granada
// Departamento de Ciencias de la Computación e Inteligencia Artificial
// Autor: Alejandro Jerónimo Fuentes
//
////////////////////////////////////////////////////////////////////////////


/*Cread un programa que lea un valor de esperanza y desviación y a continuación lea
un número entero n que indique el número de abscisas que se van a procesar. Leed
un total de n valores reales e imprimid en pantalla el valor de la función gaussiana en
dichos valores. El cómputo de la gaussiana debe hacerse en una función.

Cread otra función para calcular el área hasta un punto cualquiera x, es decir,
CDF(x), usando la anterior aproximación. Modificad el programa principal para que
llame a esta función e imprima los valores de CDF correspondientes a los valores de
abscisa leídos.*/

#include <iostream>
#include <cmath>
using namespace std;


double Gaussiana(double mu, double sigma, double x){
	
	const double PI = 3.1415;
	double y;
	
	y = exp((-pow((x - mu) / sigma, 2) / 2) / (sigma * sqrt(2 * PI)));
	
	return y;
}


double DistribucionAcumulada(double x, double mu, double sigma){
	
	const double b0 = 0.2316419;
	const double b1 = 0.319381530;
	const double b2 = -0.356563782;
	const double b3 = 1.781477937;
	const double b4 = -1.821255978;
	const double b5 = 1.330274429;
	double t = 1 / (1 + b0 * x);
	double sumatoria;
	double funcion;
	
	sumatoria = b1*t + b2*pow(t,2) + b3*pow(t,3) + b4*pow(t,4) + b5*pow(t,5);
	funcion = 1 - Gaussiana(mu,sigma,x) * sumatoria;
	
	return funcion;
}


int main(){
	
	double valor_mu,valor_sigma,coef_x1,coef_x2;
	double funcion_gauss,funcion_DA;
	double n_valores,x_valores,i;
	
	
	cout << "Introduzca el coeficiente real de esperanza (mu) --> ";
	cin >> valor_mu;
	cout << "Introduzca el coeficiente real de desviacion (sigma) --> ";
	cin >> valor_sigma;
	cout << "Introduzca los valores de abcisa que vas a leer (gaussiana) --> ";
	cin >> n_valores;
	cout << "Introduzca los valores de abcisa que vas a leer (DA) --> ";
	cin >> x_valores;
	cout << endl;
	
	
	for(i=1; i <= n_valores; i++){
		cout << "\nIntroduzca valor " << i << " (gaussiana)" << " --> ";
		cin >> coef_x1;
		
		funcion_gauss = Gaussiana(valor_mu,valor_sigma,coef_x1);
		
		cout << "El valor que toma la funcion en " << coef_x1 << " es: " << funcion_gauss;
		cout << endl;
	}
	
	
	for(i=1; i <= x_valores; i++){
		cout << "\nIntroduzca valor " << i << " (DA)" << " --> ";
		cin >> coef_x2;
		
		funcion_DA = DistribucionAcumulada(valor_mu,valor_sigma,coef_x2);
		
		cout << "El valor que toma la funcion en " << coef_x2 << " es: " << funcion_DA;
		cout << endl;
	}
	
	system("pause");
	
}







