///////////////////////////////////////////////////////////////////////////
//
// Fundamentos de Programación
// ETS Informática y Telecomunicaciones
// Universidad de Granada
// Departamento de Ciencias de la Computación e Inteligencia Artificial
// Autor: Alejandro Jerónimo Fuentes
//
////////////////////////////////////////////////////////////////////////////

/*En este ejercicio, no hay que construir ninguna clase ni función. Es un ejercicio sobre
recorridos de una matriz declarada directamente en el main.
Leed desde teclado dos variables util_filas y util_columnas y leed los datos
de una matriz de enteros de tamaño util_filas x util_columnas. Sobre dicha
matriz, se pide lo siguiente:
	a) Calcular la traspuesta de la matriz, almacenando el resultado en otra matriz.
	d) Leer los datos de otra matriz y multiplicar ambas matrices (las dimensiones de la
		segunda matriz han de ser compatibles con las de la primera para poder hacer la
		multiplicación)
*/

#include <iostream>
using namespace std;


int main(){
	
	int util_filas_A,util_columnas_A,util_filas_B,util_columnas_B;
	int Matriz_A[util_filas_A] [util_columnas_A];
	int Matriz_B[util_filas_B] [util_columnas_B];
	int Matriz_AB[util_filas_A] [util_columnas_B];
	
	
	do{
		cout << "Introduce el numero de filas a utilizar ---> ";
		cin >> util_filas_A;
	}while(util_filas_A < 0);
	
	
	do{
		cout << "Introduce el numero de columnas a utilizar ---> ";
		cin >> util_columnas_A;
	}while(util_columnas_A < 0);
	
	
	for(int i = 0; i < util_filas_A; i++){
		for(int j = 0; j < util_columnas_A; j++){
			cout << "Ingrese el numero de la fila " << i << " columna " << j << ": ";
			cin >> Matriz_A[i] [j];
		}
	}
	
	cout << endl;
	cout << "Matriz A" << endl;
	
	
	for(int i = 0; i < util_filas_A; i++){
		for(int j = 0; j < util_columnas_A; j++){
			cout << Matriz_A[i] [j] << " ";
		}
	}
	
	
	cout << endl;
	cout << "Matriz A traspuesta" << endl;
	
	
	for(int i = 0; i < util_filas_A; i++){
		for(int j = 0; j < util_columnas_A; j++){
			cout << Matriz_A[j] [i] << " ";
		}
	}
	
	cout << endl;
	
	//Multiplicación de dos matrices
	
	do{
		cout << "Introduce el numero de filas de la matriz B: ";
		cin >> util_filas_B;
		cout << "Introduce el numero de columnas de la matriz B: ";
		cin >> util_columnas_B;
	}while((util_filas_B < 0 || util_columnas_B < 0) && util_filas_B != util_columnas_A);
	
	
	for(int i = 0; i < util_filas_B; i++){  			//Generamos Matriz B
		for(int j = 0; j < util_columnas_B; j++){
			cout << "Introduce el elemento de la fila " << i << " columna " << j;
			cin >> Matriz_B[i] [j];
		}
	}
	
	//Inicializamos Matriz AB a 0
	
	for(int i = 0; i < util_filas_A; i++)
		for(int j = 0; j < util_columnas_B; j++)
			Matriz_AB[i] [j] = 0;
	
	// Finalmente generamos la matriz AB
	
	for(int i = 0; i < util_filas_A; i++)
		for(int j = 0; j < util_columnas_B; j++)
			for(int k = 0; k < util_filas_B; k++)
				Matriz_AB[i] [j] += Matriz_A[i] [k] * Matriz_B[k] [j];
				
				
	//Imprimimos la matriz B y la matriz resultante
	
	cout << "Matriz B";
	cout << endl;
	
	
	for(int i = 0; i < util_filas_B; i++){
	
		for(int j = 0; j < util_columnas_B; j++){
			cout << Matriz_B[i] [j] << " ";
		}
		
		cout << endl;
	}
	
	
	cout << "Matriz AB";
	cout << endl;
	
	
	for(int i = 0; i < util_filas_A; i++){
		for(int j = 0; j < util_columnas_B; j++){
			cout << Matriz_AB[i] [j] << " ";
		}
		
		cout << endl;
	}
	
	
}
