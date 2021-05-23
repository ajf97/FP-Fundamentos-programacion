////////////////////////////////////////////////////////////////////////////
//
// Fundamentos de Programación
// ETS Informática y Telecomunicaciones
// Universidad de Granada
// Departamento de Ciencias de la Computación e Inteligencia Artificial
// Autor: Alejandro Jerónimo Fuentes
//
////////////////////////////////////////////////////////////////////////////

/* b) Métodos públicos
	En vez de calcular la pendiente en el programa principal, vamos a ponerlo como
	un método de la clase y así lo reutilizaremos todas las veces que necesitemos.
	Añada un método para el cálculo de la pendiente y modificad el main para tener
	en cuenta este cambio.
	¿Añadimos pendiente como dato miembro de la recta? La respuesta es que
	no ¿Por qué?
	
	Añadir también los siguiente métodos:
		* Obtener la ordenada (y) dado un valor de abscisa x, aplicando la fórmula:
		(-C -xA) / B
		* Obtener la abscisa (x) dado un valor de ordenada y, aplicando la fórmula:
		(-C -yB) / A
	
	En la función main leed un valor de abscisa e imprimir la ordenada según la recta
	y leed un valor de ordenada e imprimid la abscisa que le corresponde. Hacedlo
	sólo con la primera recta.*/
	
	
#include <iostream>
using namespace std;


class Recta{
	public:
		
		double coef_A = 0.0;
		double coef_B = 0.0;
		double coef_C = 0.0;
		double x = 0.0;
		double y = 0.0;
		
		double Pendiente(){
			return -coef_A / coef_B;
		}
		
		double ObtenerOrdenada(){
			return (-coef_C  - x) / coef_B;
		}
		
		double ObtenerAbcisa(){
			return (-coef_C - y) / coef_A;
		}
};


int main(){
	
	Recta recta_1,recta_2;
	double real1,real2,real3,real4,real5,real6;
	double valor_x,valor_y;
	
	
	cout << "Introduzca seis reales ---> ";
	cin >> real1 >> real2 >> real3 >> real4 >> real5 >> real6;
	cout << "Introduzca un valor de abcisa ---> ";
	cin >> valor_x;
	cout << "Introduzca un valor de ordenada ---> ";
	cin >> valor_y;
	
	
	recta_1.coef_A = real1;
	recta_1.coef_B = real2;
	recta_1.coef_C = real3;
	recta_1.x = valor_x;
	recta_1.y = valor_y;
	
	
	recta_2.coef_A = real4;
	recta_2.coef_B = real5;
	recta_2.coef_C = real6;
	
	
	cout << "\nLa pendiente de la recta 1 es: " << recta_1.Pendiente() << endl;
	cout << "La pendiente de la recta 2 es: " << recta_2.Pendiente() << endl;
	cout << "La coordenada de abcisa es: "	<< recta_1.ObtenerAbcisa() << endl;
	cout << "La coordenada de ordenada es: " << recta_1.ObtenerOrdenada() << endl;
}

