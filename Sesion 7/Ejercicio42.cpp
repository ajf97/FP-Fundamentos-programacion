////////////////////////////////////////////////////////////////////////////
//
// Fundamentos de Programación
// ETS Informática y Telecomunicaciones
// Universidad de Granada
// Departamento de Ciencias de la Computación e Inteligencia Artificial
// Autor: Alejandro Jerónimo Fuentes
//
////////////////////////////////////////////////////////////////////////////


/*(Examen Septiembre 2014) ¿Cuántas veces aparece el dígito 9 en todos los números
que hay entre el 1 y el 100? Por ejemplo, el 9 aparece una vez en los números 19 y
92 mientras que aparece dos veces en el 99. Pretendemos diseñar un algoritmo que
responda a esta sencilla pregunta, pero de forma suficientemente generalizada. Para
ello, se pide construir un programa que lea una cifra (entre 1 y 9), dos enteros min
y max y calcule el número de apariciones del dígito cifra en los números contenidos
en el intervalo cerrado [min, max].*/


#include <iostream>
using namespace std;


int main(){
	
	int min,max,cifra;
	int i,contador,resto;
	int potencia;
	int numero_copia;
	
	
	cout << "Introduce una cifra --> ";
	cin >> cifra;
	cout << "Introduce el minimo del rango --> ";
	cin >> min;
	cout << "Introduce el maximo del rango --> ";
	cin >> max;
	cout << endl;
	
	
	contador = 0;


	for(i=min; i <= max; i++){
		
		numero_copia = i;
		while(numero_copia > 0){
			resto = numero_copia % 10;
			numero_copia = numero_copia / potencia;
		}
		
		while(resto == cifra){
	   	contador++;
	   	resto = 0;
	   	potencia = potencia * 10;
		}
	}
	
	cout << "El numero " << cifra << " esta repetido " << contador << " veces";
	cout << endl;
	
	system("pause");
		
}
