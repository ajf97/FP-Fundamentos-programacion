////////////////////////////////////////////////////////////////////////////
//
// Fundamentos de Programación
// ETS Informática y Telecomunicaciones
// Universidad de Granada
// Departamento de Ciencias de la Computación e Inteligencia Artificial
// Autor: Alejandro Jerónimo Fuentes
//
////////////////////////////////////////////////////////////////////////////

/* En este ejercicio no hay que construir ninguna función o
clase. Todo se programará en el main. Defina dos matrices de reales original
y suavizada de tamaño 50 x 30. Lea desde teclado los valores de la matriz
original, obligando a que sea simétrica. Para ello, lea el número de filas n y a
continuación introduzca los n X n datos de la matriz.
Construya la matriz suavizada acorde a las siguientes indicaciones:
	a) La tabla resultante será simétrica.
	b) Los valores de la diagonal principal de la tabla resultante serán iguales a los de
		la tabla original.
	c) Los valores del triángulo superior de la tabla resultante se calculan de la siguiente
	manera: si (i; j) es una posición en el triángulo superior de la tabla resultante,
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
