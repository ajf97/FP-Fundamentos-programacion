////////////////////////////////////////////////////////////////////////////
//
// Fundamentos de Programación
// ETS Informática y Telecomunicaciones
// Universidad de Granada
// Departamento de Ciencias de la Computación e Inteligencia Artificial
// Autor: Alejandro Jerónimo Fuentes
//
////////////////////////////////////////////////////////////////////////////

/*Tenga en cuenta la observación al inicio de esta relación de problemas sobre la lectura
de los caracteres. Para poder leer caracteres, incluyendo los espacios en blanco, hay
que usar caracter = cin.get(), en vez de cin >> caracter.
En este ejercicio trabajaremos con un vector directamente en el main, sin utilizar
clases.
Declare un vector de caracteres de tamaño 100. Lea las componentes considerando
como terminador el carácter # (éste no forma parte de la secuencia) y que no se
introduzcan más de 100 caracteres. Las componentes leídas ocuparán las primeras
posiciones contiguas del vector. El resto de las posiciones se quedarán con el valor
indeterminado (basura) que el compilador le asignase al principio. Para conocer cuántas
componentes se están utilizando, utilice una variable total_utilizados (que,
obviamente, deberá ser menor de 100 en todo momento)
Implemente algoritmos para realizar las siguientes tareas:
	a) Comprobar si el vector es un palíndromo, es decir, que se lee igual de izquierda a
	derecha que de derecha a izquierda. Por ejemplo, {'a','b','b','a'} sería
	un palíndromo, pero {'a','c','b','a'} no lo sería. Si la secuencia tiene un
	número impar de componentes, la que ocupa la posición central es descartada,
	por lo que {'a','b','j','b','a'} sería un palíndromo.
	
	b) Invertir el vector. Si éste contenía, por ejemplo, los caracteres
	{'m','u','n','d','o'}, después de llamar al método se quedará con
	{'o','d','n','u','m'}.
	
	c) Contar el número de mayúsculas que contiene
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
