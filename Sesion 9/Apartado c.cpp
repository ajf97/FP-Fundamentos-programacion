////////////////////////////////////////////////////////////////////////////
//
// Fundamentos de Programación
// ETS Informática y Telecomunicaciones
// Universidad de Granada
// Departamento de Ciencias de la Computación e Inteligencia Artificial
// Autor: Alejandro Jerónimo Fuentes
//
////////////////////////////////////////////////////////////////////////////

/* c) Datos miembro privados
		Cambie ahora los datos miembro públicos y póngalos privados. Tendrá que añadir
		métodos para asignar y ver los valores de los datos miembro. Añada métodos para asignar 
		un valor a cada uno de los tres datos miembro. Modifique el main
		para tener en cuenta estos cambios.*/
		
#include <iostream>
using namespace std;


class Recta{
	private:
		
		double coef_A = 0.0;
		double coef_B = 0.0;
		double coef_C = 0.0;
		double x = 0.0;
		double y = 0.0;
		
	public:
		
		void SetCoeficienteA(double coeficiente){
			coef_A = coeficiente;
		}
		
		double GetCoeficienteA(){
			return coef_A;
		}
		
		void SetCoeficienteB(double coeficiente){
			coef_B = coeficiente;
		}
		
		double GetCoeficienteB(){
			return coef_B;
		}
		
		void SetCoeficienteC(double coeficiente){
			coef_C = coeficiente;
		}
		
		double GetCoeficienteC(){
			return coef_C;
		}
		
		
		void SetOrdenadaAbcisa(double abcisa, double ordenada){
			x = abcisa;
			y = ordenada;
		}
		
		double GetAbcisa(){
			return x;
		}
		
		double GetOrdenada(){
			return y;
		}
		
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
	
	
	recta_1.SetCoeficienteA(real1);
	recta_1.SetCoeficienteB(real2);
	recta_1.SetCoeficienteC(real3);
	recta_2.SetCoeficienteA(real4);
	recta_2.SetCoeficienteB(real5);
	recta_2.SetCoeficienteC(real6);
	
	recta_1.SetOrdenadaAbcisa(valor_x,valor_y);
	
	
	cout << "\nLa pendiente de la recta 1 es: " << recta_1.Pendiente() << endl;
	cout << "La pendiente de la recta 2 es: " << recta_2.Pendiente() << endl;
	cout << "La coordenada de abcisa es: "	<< recta_1.ObtenerAbcisa() << endl;
	cout << "La coordenada de ordenada es: " << recta_1.ObtenerOrdenada() << endl;
}

