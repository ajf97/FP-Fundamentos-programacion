////////////////////////////////////////////////////////////////////////////
//
// Fundamentos de Programaci�n
// ETS Inform�tica y Telecomunicaciones
// Universidad de Granada
// Departamento de Ciencias de la Computaci�n e Inteligencia Artificial
// Autor: Alejandro Jer�nimo Fuentes
//
////////////////////////////////////////////////////////////////////////////


/* Sobre la soluci�n del ejercicio 19 de esta relaci�n de problemas, se pide lo siguiente.
Supondremos que s�lo pueden introducirse intereses enteros (1, 2, 3, etc). Se pide
calcular el capital obtenido al t�rmino de cada a�o, pero realizando los c�lculos para
todos los tipos de inter�s enteros menores o iguales que el introducido (en pasos de
1). Por ejemplo, si el usuario introduce un inter�s igual a 5 y un n�mero de a�os igual
a 3, hay que mostrar el capital ganado al t�rmino de cada uno de los tres a�os a un
inter�s del 1 %, a continuaci�n, lo mismo para un inter�s del 2% y as� sucesivamente
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
