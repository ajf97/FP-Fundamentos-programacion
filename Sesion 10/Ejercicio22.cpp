////////////////////////////////////////////////////////////////////////////
//
// Fundamentos de Programación
// ETS Informática y Telecomunicaciones
// Universidad de Granada
// Departamento de Ciencias de la Computación e Inteligencia Artificial
// Autor: Alejandro Jerónimo Fuentes
//
////////////////////////////////////////////////////////////////////////////

/* Recupere la solución del ejercicio 6 de esta relación de problemas (cómputo del salario
en función de las horas trabajadas) Defina una clase Nomina para gestionar el
cómputo del salario final. Suponga que el porcentaje de incremento en la cuantía de
las horas extras (50 %) y el número de horas que no se tarifan como extra (40) son
valores que podrían cambiar, aunque no de forma continua. El número de horas trabajadas
y la cuantía a la que se paga cada hora extraordinaria, sí son cantidades que
varían de un trabajador a otro*/


#include <iostream>
using namespace std;


class Nomina{
	private:
		double numero_horas = 0.0;
		double precio_horas = 0.0;
		double incremento_horas = 0;
		double  limite_horas = 0 ;
		
		
		bool EsCorrectoNumHoras(double el_numero_de_horas){
			if (el_numero_de_horas >= 0)
				return true;
			else
				return false;
		}
		
		bool EsCorrectoPrecioHoras(double el_precio_de_horas){
			if (el_precio_de_horas >= 0)
				return true;
			else
				return false;
		}
		
		bool EsCorrectoIncremento(double incrementa_horas){
			if (incrementa_horas >= 0)
				return true;
			else
				return false;
		}
		
		bool EsCorrectoLimite(double el_limite_de_horas){
			if (el_limite_de_horas >= 0)
				return true;
			else
				return false;
		}
				
	public:
		
		Nomina (double el_numero_de_horas,double el_precio_de_horas,double incrementa_horas,double el_limite_de_horas){
			if (EsCorrectoNumHoras(el_numero_de_horas) && EsCorrectoPrecioHoras(el_precio_de_horas)){
				SetNumHoras(el_numero_de_horas);
				SetPrecioHoras(el_precio_de_horas);
			}
			
			if (EsCorrectoIncremento(incrementa_horas) && EsCorrectoLimite(el_limite_de_horas)){
				SetIncremento(incrementa_horas);
				SetLimite(el_limite_de_horas);
			}
		}
		
		void SetNumHoras(double el_numero_de_horas){
			numero_horas = el_numero_de_horas;
		}
		
		void SetPrecioHoras(double el_precio_de_horas){
			precio_horas = el_precio_de_horas;
		}
		
		void SetIncremento(double incrementa_horas){
			incremento_horas = incrementa_horas;
		}
		
		void SetLimite(double el_limite_de_horas){
			limite_horas = el_limite_de_horas;
		}
		
		double GetNumHoras(){
			return numero_horas; 
		}
		
		double GetPrecioHoras(){
			return precio_horas;
		}
		
		double GetIncremento(){
			return incremento_horas;
		}
		
		double GetLimite(){
			return limite_horas;
		}
		
		double SalarioFinal(){
			double salario_final,horas_extras,precio_incrementado,salario_extra;
			
			if(numero_horas <= limite_horas){
				salario_final = precio_horas * numero_horas;
				return salario_final;
			}
	
			if(numero_horas > limite_horas){
				salario_final = precio_horas * limite_horas;
				horas_extras = numero_horas - limite_horas;
				precio_incrementado = (incremento_horas * precio_horas) + precio_horas;
				salario_extra = precio_incrementado * horas_extras;
				salario_final = salario_extra + salario_final;
				return salario_final;
			}
		}
};


int main(){
	
	double num_horas,precio_por_hora;
	double incremento,limite;
	double salario;
	
	
	cout << "Introduce el numero de horas trabajadas ---> ";
	cin >> num_horas;
	cout << "Introduce el precio por hora ---> ";
	cin >> precio_por_hora;
	cout << "Introduce el incremento por horas extra --> ";
	cin >> incremento;
	cout << "Introduce el numero de horas que no se tarifan como extra --> ";
	cin >> limite;
	
	
	Nomina una_nomina (num_horas,precio_por_hora,incremento,limite);
	salario = una_nomina.SalarioFinal();	
	
	
	cout << "\nEl salario final del trabajador es de: " << salario << " euros " << endl;
	
	
}
