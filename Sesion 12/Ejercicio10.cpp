////////////////////////////////////////////////////////////////////////////
//
// Fundamentos de Programaci�n
// ETS Inform�tica y Telecomunicaciones
// Universidad de Granada
// Departamento de Ciencias de la Computaci�n e Inteligencia Artificial
// Autor: Alejandro Jer�nimo Fuentes
//
////////////////////////////////////////////////////////////////////////////

/*En este ejercicio no hay que definir ninguna clase. Todas las operaciones se realizan
directamente en el main.
Construya un programa que vaya leyendo caracteres hasta que se encuentre un punto
'.' y cuente el n�mero de veces que aparece cada una de las letras may�sculas.
Imprimir el resultado.
Una posibilidad ser�a declarar un vector contador_mayusculas con tantas componentes
como letras may�sculas hay ('Z'-'A'+1) y conforme se va leyendo cada
car�cter, ejecutar lo siguiente:
	cin >> letra;
	if (letra == 'A')
	contador_mayusculas[0] = contador_mayusculas[0] + 1;
	else if (letra == 'B')
	contador_mayusculas[1] = contador_mayusculas[1] + 1;
	else if (letra == 'C')
	contador_mayusculas[2] = contador_mayusculas[2] + 1;
	else ....
Sin embargo, este c�digo es muy redundante. Como soluci�n se propone calcular de
forma directa el �ndice entero que le corresponde a cada may�scula, de forma que
todos los if-else anteriores los podamos resumir en una �nica sentencia del tipo:
contador_mayusculas[indice] = contador_mayusculas[indice] + 1;
Hacedlo, declarando el vector directamente dentro del main.*/

#include <iostream>
using namespace std;


int main(){
	
	const char TERMINADOR = '.';
	char letra;
	int indice_caracteres;
	char caracteres[indice_caracteres];
	int contador_mayusculas;
	

	indice_caracteres = 0;
	contador_mayusculas = 0;
	
	
	do{
		cout << "Introduce un caracter ---> ";
		cin >> letra;
		
		caracteres[indice_caracteres] = letra;
		indice_caracteres++;
		
	}while(letra != TERMINADOR);
	
	
	for(char i = 'A'; i <= 'Z'; i++){
		for (int j = 0; j <= indice_caracteres; j++){
			
			if(caracteres[j] == i)
				contador_mayusculas++;
		}
		
		cout << "\nLa letra " << i << " aparece " << contador_mayusculas << " veces" << endl;
		contador_mayusculas = 0;
	}
	
}


