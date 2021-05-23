////////////////////////////////////////////////////////////////////////////
//
// Fundamentos de Programaci�n
// ETS Inform�tica y Telecomunicaciones
// Universidad de Granada
// Departamento de Ciencias de la Computaci�n e Inteligencia Artificial
// Autor: Alejandro Jer�nimo Fuentes
//
////////////////////////////////////////////////////////////////////////////

/*Tenga en cuenta la observaci�n al inicio de esta relaci�n de problemas sobre la lectura
de los caracteres. Para poder leer caracteres, incluyendo los espacios en blanco, hay
que usar caracter = cin.get(), en vez de cin >> caracter.
En este ejercicio trabajaremos con un vector directamente en el main, sin utilizar
clases.
Declare un vector de caracteres de tama�o 100. Lea las componentes considerando
como terminador el car�cter # (�ste no forma parte de la secuencia) y que no se
introduzcan m�s de 100 caracteres. Las componentes le�das ocupar�n las primeras
posiciones contiguas del vector. El resto de las posiciones se quedar�n con el valor
indeterminado (basura) que el compilador le asignase al principio. Para conocer cu�ntas
componentes se est�n utilizando, utilice una variable total_utilizados (que,
obviamente, deber� ser menor de 100 en todo momento)
Implemente algoritmos para realizar las siguientes tareas:
	a) Comprobar si el vector es un pal�ndromo, es decir, que se lee igual de izquierda a
	derecha que de derecha a izquierda. Por ejemplo, {'a','b','b','a'} ser�a
	un pal�ndromo, pero {'a','c','b','a'} no lo ser�a. Si la secuencia tiene un
	n�mero impar de componentes, la que ocupa la posici�n central es descartada,
	por lo que {'a','b','j','b','a'} ser�a un pal�ndromo.
	
	b) Invertir el vector. Si �ste conten�a, por ejemplo, los caracteres
	{'m','u','n','d','o'}, despu�s de llamar al m�todo se quedar� con
	{'o','d','n','u','m'}.
	
	c) Contar el n�mero de may�sculas que contiene
*/

#include <iostream>
using namespace std;


void InvertirVector(char un_vector[], int tamanio){
		char vector_aux[tamanio];
		int aux = 0;
		
		for(int i = tamanio; i >= 0; i--, aux++){
			vector_aux[aux] = un_vector[i];
		}
		
		for(int i = 0; i < tamanio; i++){
			un_vector[i] = vector_aux[i];
		}
}


bool EsPalindromo(char un_vector[], int tamanio){
	
	for(int i = 0; i < tamanio / 2; i++){
		if(un_vector[i] != un_vector[tamanio-i-1])
			return false;
		
		return true;
	}
	
}








int main(){
	
	const char TERMINADOR = '#';
	const int MAX_CARACTER = 99;
	int total_utilizados,contador_mayusculas,temp;
	bool es_mayuscula;
	char caracter;
	char MiVector[MAX_CARACTER];	
	
	
	es_mayuscula = caracter >= 'A' && caracter <= 'Z';
	total_utilizados = 0;
	contador_mayusculas = 0;
	
	
	cout << "Introduzca caracter ---> "; // Lectura adelantada
	cin >> caracter;
	
	
	while(caracter != TERMINADOR && total_utilizados <= MAX_CARACTER){
		
		MiVector[total_utilizados] = caracter;
		
		if(es_mayuscula)
			contador_mayusculas++;
		
		total_utilizados++;
		
		cout << "Introduzca caracter ---> ";
		cin >> caracter;
	}
	
	
	if(EsPalindromo(MiVector[], 99))
		cout << "El vector es un palindromo" << endl;
	else
		cout << "El vector no es un palindromo" << endl;
	
	
	
	system("pause");
	
	
}
