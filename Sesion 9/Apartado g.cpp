////////////////////////////////////////////////////////////////////////////
//
// Fundamentos de Programación
// ETS Informática y Telecomunicaciones
// Universidad de Granada
// Departamento de Ciencias de la Computación e Inteligencia Artificial
// Autor: Alejandro Jerónimo Fuentes
//
////////////////////////////////////////////////////////////////////////////

/* g) Métodos privados
		Añada un método privado que nos indique si los coeficientes son correctos, es
		decir, A y B no pueden ser simultáneamente nulos. Llame a este método en el
		constructor y en el método SetCoeficientes y realice las operaciones que
		estime oportuno en el caso de que los coeficientes pasados como parámetros no
		sean correctos. */
		

#include <iostream>
using namespace std;


class Recta{
	private:
		
		double coef_A = 0.0;
		double coef_B = 0.0;
		double coef_C = 0.0;
		double x = 0.0;
		double y = 0.0;
		
		
		
		bool EsCorrectoCoeficientes(double coeficiente_a, double coeficiente_b){
			bool correcto;
			
			if (coeficiente_a == 0 && coeficiente_b == 0)
				correcto = false;
			else
				correcto = true;
			
			return correcto;
			
		}
		
	public:
		
		Recta(double coeficiente_a, double coeficiente_b, double coeficiente_c){
			if (EsCorrectoCoeficientes(coeficiente_a,coeficiente_b)){
				coef_A = coeficiente_a;
				coef_B = coeficiente_b;
				coef_C = coeficiente_c;
			}
		}
		
		
		void SetCoeficientes(double coeficiente_a, double coeficiente_b, double coeficiente_c){
			if(EsCorrectoCoeficientes(coeficiente_a,coeficiente_b)){
				coef_A = coeficiente_a;
				coef_B = coeficiente_b;
				coef_C = coeficiente_c;
		  }
		}
		
		double GetCoeficienteA(){
			return coef_A;
		}
		
		double GetCoeficienteB(){
			return coef_B;
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
	
	double real1,real2,real3,real4,real5,real6;
	double valor_x,valor_y;
	
	
	cout << "Introduzca seis reales ---> ";
	cin >> real1 >> real2 >> real3 >> real4 >> real5 >> real6;
	cout << "Introduzca un valor de abcisa ---> ";
	cin >> valor_x;
	cout << "Introduzca un valor de ordenada ---> ";
	cin >> valor_y;
	
	
	Recta recta_1 (real1,real2,real3);
	Recta recta_2 (real4,real5,real6);
	
	recta_1.SetOrdenadaAbcisa(valor_x,valor_y);
	
	
	cout << "\nLa pendiente de la recta 1 es: " << recta_1.Pendiente() << endl;
	cout << "La pendiente de la recta 2 es: " << recta_2.Pendiente() << endl;
	cout << "La coordenada de abcisa es: "	<< recta_1.ObtenerAbcisa() << endl;
	cout << "La coordenada de ordenada es: " << recta_1.ObtenerOrdenada() << endl;

}

