////////////////////////////////////////////////////////////////////////////
//
// Fundamentos de Programación
// ETS Informática y Telecomunicaciones
// Universidad de Granada
// Departamento de Ciencias de la Computación e Inteligencia Artificial
// Autor: Alejandro Jerónimo Fuentes
//
////////////////////////////////////////////////////////////////////////////

/* Recuperad el ejercicio 12 de esta relación de problemas sobre la función gaussiana.
En vez de trabajar con funciones, plantead la solución con una clase.*/

#include <iostream>
#include <cmath>
using namespace std;

const double PI = 3.141592;

class FuncionGaussiana{
	private:
		
		double esperanza = 0.0;
		double desviacion = 0.0;
		
	
	public:
		
		FuncionGaussiana (double la_esperanza, double la_desviacion){
			SetEsperanza(la_esperanza);
			SetDesviacion(la_desviacion);
			
		}
		
		void SetEsperanza(double la_esperanza){
			esperanza = la_esperanza;
		}
	
		void SetDesviacion(double la_desviacion){
			desviacion = la_desviacion;
		}
	
		double GetEsperanza(){
			return esperanza;
		}
	
		double GetDesviacion(){
			return desviacion;
		}
		
		double Potencia(double la_base, int el_exponente){
			double potencia;
			int exponente_positivo;
		
			if (la_base == 0 && el_exponente == 0)
				potencia = sqrt (-1.0);						   
			else{
				exponente_positivo = abs(el_exponente);
				potencia = 1;								   	
		
				for (int i = 1; i <= exponente_positivo; i++)
					potencia = potencia * la_base;
			}
		
			if (el_exponente < 0)
				potencia = 1/potencia;
		
			return potencia;
		}

		double EvaluaGaussiana(double esperanza, double desviacion, double x){ 
			double ordenada;
		
			ordenada = exp(-(pow( (x - esperanza) / desviacion , 2)) / 2.0) / (desviacion * sqrt(2*PI));

			return ordenada;
		}
		
		double AreaHastaGaussiana(double esperanza, double desviacion, double x){
	
			const double b0 = 0.2316419;
			const double b1 = 0.319381530;
			const double b2 = -0.356563782; 
		   const double b3 = 1.781477937;
			const double b4 = -1.821255978;
			const double b5 = 1.330274429;
			double area_hasta;
			double t;
	
			t = 1 / (1 + b0 * x);
			area_hasta = 1 - EvaluaGaussiana(esperanza, desviacion, x) * (b1*t + b2*Potencia(t,1) + b3*Potencia(t,3) + b4*Potencia(t,4) + b5*Potencia(t,5));

			return area_hasta;
		}
};


int main(){
	
	double la_esperanza,la_desviacion;
	double area,abcisa,ordenada;
	int numero_de_puntos;
	
	
	cout << "Introduce el valor de la esperanza --> ";
	cin >> la_esperanza;
	cout << "Introduce el valor de la desviacion --> ";
	cin >> la_desviacion;
	cout << "Introduce el numero de puntos a calcular --> ";
	cin >> numero_de_puntos;
	
	
	FuncionGaussiana una_funcion(la_esperanza,la_desviacion);
	
	
	cout << "\nIntroduce los " << numero_de_puntos << " de la abcisa: ";
	
	for (int i=0; i <= numero_de_puntos; i++){
		cin >> abcisa;
		ordenada = una_funcion.EvaluaGaussiana(la_esperanza,la_desviacion,abcisa);
		area = una_funcion.AreaHastaGaussiana(la_esperanza,la_desviacion,abcisa);
		cout << "\nEl valor de la funcion gaussiana en " << abcisa << " es " << ordenada;
		cout << "\nEl area de la funcion gaussiana en " << abcisa << " es " << area;
		cout << endl;
	}	
}
