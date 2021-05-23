////////////////////////////////////////////////////////////////////////////
//
// Fundamentos de Programación
// ETS Informática y Telecomunicaciones
// Universidad de Granada
// Departamento de Ciencias de la Computación e Inteligencia Artificial
// Autor: Alejandro Jerónimo Fuentes
//
////////////////////////////////////////////////////////////////////////////

/*En este ejercicio no hay que definir ninguna clase. Todas las operaciones se realizan
directamente en el main.
Construya un programa que vaya leyendo caracteres hasta que se encuentre un punto
'.' y cuente el número de veces que aparece cada una de las letras mayúsculas.
Imprimir el resultado.
Una posibilidad sería declarar un vector contador_mayusculas con tantas componentes
como letras mayúsculas hay ('Z'-'A'+1) y conforme se va leyendo cada
carácter, ejecutar lo siguiente:
	cin >> letra;
	if (letra == 'A')
	contador_mayusculas[0] = contador_mayusculas[0] + 1;
	else if (letra == 'B')
	contador_mayusculas[1] = contador_mayusculas[1] + 1;
	else if (letra == 'C')
	contador_mayusculas[2] = contador_mayusculas[2] + 1;
	else ....
Sin embargo, este código es muy redundante. Como solución se propone calcular de
forma directa el índice entero que le corresponde a cada mayúscula, de forma que
todos los if-else anteriores los podamos resumir en una única sentencia del tipo:
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


