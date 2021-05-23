////////////////////////////////////////////////////////////////////////////
//
// Fundamentos de Programación
// ETS Informática y Telecomunicaciones
// Universidad de Granada
// Departamento de Ciencias de la Computación e Inteligencia Artificial
// Autor: Alejandro Jerónimo Fuentes
//
////////////////////////////////////////////////////////////////////////////


/* A un trabajador le pagan según sus horas trabajadas y la tarifa está a un valor por
hora. Si la cantidad de horas trabajadas es mayor de 40 horas, la tarifa por hora se
incrementa en un 50% para las horas extras (las que haya por encima de 40). Construir
una función que dado el número total de horas trabajadas y el precio por hora,
devuelva el salario del trabajador.*/

#include <iostream>
using namespace std;


double Salario(double horas, double precio){
	
	double salario_final,salario_extra;
	double precio_incrementado,horas_extras;
	const double INCREMENTO = 0.5;
	const double LIMITE = 40;
	
	if(horas <= LIMITE){
		salario_final = precio * horas;
		return salario_final;
	}
	
	if(horas > LIMITE){
		salario_final = precio * LIMITE;
		horas_extras = horas - LIMITE;
		precio_incrementado = (INCREMENTO * precio) + precio;
		salario_extra = precio_incrementado * horas_extras;
		salario_final = salario_extra + salario_final;
		return salario_final;
	}
	
}


int main(){
	
	double numero_horas,precio_horas;
	double salario;
	
	
	cout << "Introduce el numero de horas --> ";
	cin >> numero_horas;
	cout << "Introduce el precio por hora --> ";
	cin >> precio_horas;
	
	
	salario = Salario(numero_horas,precio_horas);
	
	
	cout << "\nTu salario final es de " << salario << " euros" << endl;
	
	
	system("pause");

}
