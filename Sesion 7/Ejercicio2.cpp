////////////////////////////////////////////////////////////////////////////
//
// Fundamentos de Programación
// ETS Informática y Telecomunicaciones
// Universidad de Granada
// Departamento de Ciencias de la Computación e Inteligencia Artificial
// Autor: Alejandro Jerónimo Fuentes
//
////////////////////////////////////////////////////////////////////////////


/*Cread una función que calcule el máximo entre tres double. La cabecera de la función
será la siguiente:
double Max(double un_valor, double otro_valor, double el_tercero)
Construid un programa principal que llame a dicha función con unos valores leídos
desde teclado. Supongamos que dichos valores los leemos con cin dentro de la propia
función, en vez de hacerlo en el main. El suspenso está garantizado ¿Por qué?*/


#include <iostream>
using namespace std;


double Max(double un_valor, double otro_valor, double el_tercero){
	
	double maximo;
	
	maximo = un_valor;
	
	if(otro_valor > maximo)
		maximo = otro_valor;

	if(el_tercero > maximo)
		maximo = el_tercero;
		
	return maximo;
}


int main(){
	
	double valor1,valor2,valor3;
	double maximo;
	
	
	cout << "Introduce el primer valor --> ";
	cin >> valor1;
	cout << "Introduce el segundo valor --> ";
	cin >> valor2;
	cout << "Introduce el tercer valor --> ";
	cin >> valor3;
	
	
	maximo = Max(valor1,valor2,valor3);
	
	
	cout << "\nEl maximo de los tres numeros es: " << maximo;
	cout << endl;
	
	system("pause");
	
}
