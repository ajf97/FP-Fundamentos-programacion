////////////////////////////////////////////////////////////////////////////
//
// Fundamentos de Programaci�n
// ETS Inform�tica y Telecomunicaciones
// Universidad de Granada
// Departamento de Ciencias de la Computaci�n e Inteligencia Artificial
// Autor: Alejandro Jer�nimo Fuentes
//
////////////////////////////////////////////////////////////////////////////

/* d) Pol�tica de acceso a los datos miembros
		En vez de usar un m�todo para asignar un valor a cada dato miembro, defina un
		�nico m�todo SetCoeficientes para asignar los tres a la misma vez.
		Observad que los m�todos permiten definir la pol�tica de acceso a los datos
		miembro. Si tengo previsto cambiar por separado los coeficientes de la recta,
		usar� m�todos de asignaci�n individuales. En caso contrario, usar� un �nico m�todo
		que modifique a la misma vez todos los datos miembro. Incluso pueden
		dejarse en la clase ambos tipos de m�todos para que as� el cliente de la clase
		pueda usar los que estime oportunos en cada momento. Por ahora, mantenga
		�nicamente el m�todo de asignaci�n en bloque SetCoeficientes.*/
		
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
		
		void SetCoeficientes(double coeficiente_a, double coeficiente_b, double coeficiente_c){
			coef_A = coeficiente_a;
			coef_B = coeficiente_b;
			coef_C = coeficiente_c;
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
	
	Recta recta_1,recta_2;
	double real1,real2,real3,real4,real5,real6;
	double valor_x,valor_y;
	
	
	cout << "Introduzca seis reales ---> ";
	cin >> real1 >> real2 >> real3 >> real4 >> real5 >> real6;
	cout << "Introduzca un valor de abcisa ---> ";
	cin >> valor_x;
	cout << "Introduzca un valor de ordenada ---> ";
	cin >> valor_y;
	
	
	recta_1.SetCoeficientes(real1,real2,real3);
	recta_2.SetCoeficientes(real4,real5,real6);
	
	recta_1.SetOrdenadaAbcisa(valor_x,valor_y);
	
	
	cout << "\nLa pendiente de la recta 1 es: " << recta_1.Pendiente() << endl;
	cout << "La pendiente de la recta 2 es: " << recta_2.Pendiente() << endl;
	cout << "La coordenada de abcisa es: "	<< recta_1.ObtenerAbcisa() << endl;
	cout << "La coordenada de ordenada es: " << recta_1.ObtenerOrdenada() << endl;
}

