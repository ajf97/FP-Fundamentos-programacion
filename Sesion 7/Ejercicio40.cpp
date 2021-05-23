////////////////////////////////////////////////////////////////////////////
//
// Fundamentos de Programación
// ETS Informática y Telecomunicaciones
// Universidad de Granada
// Departamento de Ciencias de la Computación e Inteligencia Artificial
// Autor: Alejandro Jerónimo Fuentes
//
////////////////////////////////////////////////////////////////////////////


/* Sobre la solución del ejercicio 19 de esta relación de problemas, se pide lo siguiente.
Supondremos que sólo pueden introducirse intereses enteros (1, 2, 3, etc). Se pide
calcular el capital obtenido al término de cada año, pero realizando los cálculos para
todos los tipos de interés enteros menores o iguales que el introducido (en pasos de
1). Por ejemplo, si el usuario introduce un interés igual a 5 y un número de años igual
a 3, hay que mostrar el capital ganado al término de cada uno de los tres años a un
interés del 1 %, a continuación, lo mismo para un interés del 2% y así sucesivamente
hasta llegar al 5 %.*/


#include <iostream>
using namespace std;


int main(){
	
	double capital,interes;
	double capital_acumulado;
	int anio,contador_anios,contador_interes;
	
	
	cout << "Introduce un capital: ";
	cin >> capital;
	cout << "Introduce un interes (%): ";
	cin >> interes;
	cout << "Introduce un numero de anios: ";
	cin >> anio;
	
	
	capital_acumulado = capital;
	
	
	for (contador_interes = 1; contador_interes <= interes; contador_interes++){
		
		cout << "\nCalculos realizados al " << contador_interes << "%" << endl;
		cout << endl;
		
		for(contador_anios = 1 ; contador_anios <= anio; contador_anios++){
			capital_acumulado = capital_acumulado + capital_acumulado * interes / 100;
			cout << "Dinero obtenido en el anio numero " << contador_anios << " = " << capital_acumulado << endl;
		}
	}
	
	system("pause");
	
}
