////////////////////////////////////////////////////////////////////////////
//
// Fundamentos de Programación
// ETS Informática y Telecomunicaciones
// Universidad de Granada
// Departamento de Ciencias de la Computación e Inteligencia Artificial
// Autor: Alejandro Jerónimo Fuentes
//
////////////////////////////////////////////////////////////////////////////

/*e) Constructor
		Modifique el programa principal del último apartado e imprima los valores de los
		datos miembros de una recta, antes de asignarles los coeficientes. Mostrará, obviamente,
		un valor indeterminado. Para evitar este problema, añada un constructor
		a la recta para que el objeto esté en un estado válido en el mismo momento
		de su definición. El constructor deberá tener como parámetros, obligatoriamente,
		los tres coeficientes de la recta. Tendrá que modificar convenientemente el main
		para tener en cuenta este cambio. */
		

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
		
		Recta(double coeficiente_a, double coeficiente_b, double coeficiente_c){
			SetCoeficientes(coeficiente_a,coeficiente_b,coeficiente_c);
		}
		
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
	
	recta_1.SetCoeficientes(real1,real2,real3);
	recta_2.SetCoeficientes(real4,real5,real6);
	
	recta_1.SetOrdenadaAbcisa(valor_x,valor_y);
	
	
	cout << "\nLa pendiente de la recta 1 es: " << recta_1.Pendiente() << endl;
	cout << "La pendiente de la recta 2 es: " << recta_2.Pendiente() << endl;
	cout << "La coordenada de abcisa es: "	<< recta_1.ObtenerAbcisa() << endl;
	cout << "La coordenada de ordenada es: " << recta_1.ObtenerOrdenada() << endl;
}

