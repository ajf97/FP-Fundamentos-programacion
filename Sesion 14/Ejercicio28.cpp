////////////////////////////////////////////////////////////////////////////
//
// Fundamentos de Programaci�n
// ETS Inform�tica y Telecomunicaciones
// Universidad de Granada
// Departamento de Ciencias de la Computaci�n e Inteligencia Artificial
// Autor: Alejandro Jer�nimo Fuentes
//
////////////////////////////////////////////////////////////////////////////

/* En este ejercicio no hay que construir ninguna funci�n o
clase. Todo se programar� en el main. Defina dos matrices de reales original
y suavizada de tama�o 50 x 30. Lea desde teclado los valores de la matriz
original, obligando a que sea sim�trica. Para ello, lea el n�mero de filas n y a
continuaci�n introduzca los n X n datos de la matriz.
Construya la matriz suavizada acorde a las siguientes indicaciones:
	a) La tabla resultante ser� sim�trica.
	b) Los valores de la diagonal principal de la tabla resultante ser�n iguales a los de
		la tabla original.
	c) Los valores del tri�ngulo superior de la tabla resultante se calculan de la siguiente
	manera: si (i; j) es una posici�n en el tri�ngulo superior de la tabla resultante,
	su valor es el valor medio de los valores que ocupan las posiciones de
	las columnas j; j + 1; : : : ; n .. 1 en la fila i de la tabla original.*/
	
#include <iostream>
using namespace std;


int main(){
	
	const int TAMANIO_FILAS = 50;
	const int TAMANIO_COLUMNAS = 30;
	double matriz_original[TAMANIO_FILAS] [TAMANIO_COLUMNAS];
	double matriz_suavizada[TAMANIO_FILAS] [TAMANIO_COLUMNAS];
	double real;
	
	
	for (int i = 0; i < TAMANIO_FILAS; i++){
		for(int j = 0; j < TAMANIO_COLUMNAS; j++){
			cout << "Introduce el elemento de la fila " << i << " columna " << j << " : ";
			cin >> real;
			matriz_suavizada[i] [j] = real;
		}
	}	
}		
