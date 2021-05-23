////////////////////////////////////////////////////////////////////////////
//
// Fundamentos de Programaci�n
// ETS Inform�tica y Telecomunicaciones
// Universidad de Granada
// Departamento de Ciencias de la Computaci�n e Inteligencia Artificial
// Autor: Alejandro Jer�nimo Fuentes
//
////////////////////////////////////////////////////////////////////////////


/*a) Definici�n de la clase y creaci�n de objetos
	Defina la clase Recta. En este apartado utilice �nicamente datos miembro p�blicos.
	Cree un programa principal que haga lo siguiente:
	* Defina dos objetos de la clase Recta.
	* Lea seis reales desde teclado.
	* Le asigne los tres primeros a los coeficientes de una recta y los otros tres a
	la segunda recta.
	* Calcule e imprima la pendiente de cada recta aplicando la f�rmula:
	pendiente = - A / B */
	
#include <iostream>
using namespace std;


class Recta{
	public:
		
		double coef_A = 0.0;
		double coef_B = 0.0;
		double coef_C = 0.0;
};


int main(){
	
	Recta recta_1,recta_2;
	double real1,real2,real3,real4,real5,real6;
	double pendiente_recta_1, pendiente_recta_2;
	
	
	cout << "Introduzca seis reales ---> ";
	cin >> real1 >> real2 >> real3 >> real4 >> real5 >> real6;
	
	recta_1.coef_A = real1;
	recta_1.coef_B = real2;
	recta_1.coef_C = real3;
	
	
	recta_2.coef_A = real4;
	recta_2.coef_B = real5;
	recta_2.coef_C = real6;
	
	
	pendiente_recta_1 = - recta_1.coef_A / recta_1.coef_B;
	pendiente_recta_2 = - recta_2.coef_A / recta_2.coef_B;
	
	
	cout << "\nLa pendiente de la recta 1 es: " << pendiente_recta_1 << endl;
	cout << "La pendiente de la recta 2 es: " << pendiente_recta_2 << endl;	
}


