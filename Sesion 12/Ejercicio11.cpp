////////////////////////////////////////////////////////////////////////////
//
// Fundamentos de Programaci�n
// ETS Inform�tica y Telecomunicaciones
// Universidad de Granada
// Departamento de Ciencias de la Computaci�n e Inteligencia Artificial
// Autor: Alejandro Jer�nimo Fuentes
//
////////////////////////////////////////////////////////////////////////////

/* Sobre el ejercicio 10, construya una clase espec�fica ContadorMayusculas que
implemente los m�todos necesarios para llevar el contador de las may�sculas. Lo que
se pretende es que la clase proporcione los m�todos siguientes:
	void IncrementaConteo (char mayuscula)
	int CuantasHay (char mayuscula)
El primer m�todo aumentar� en uno el contador de la correspondiente may�scula y el
segundo indicar� cu�ntas hay. Modifique el programa principal para que cree un objeto
de esta clase y llame a sus m�todos para realizar los conteos de las may�sculas.
Finalmente, hay que imprimir en pantalla cu�ntas veces aparece cada may�scula.*/

#include <iostream>
using namespace std;

class ContadorMayusculas{
	private:
		
		static const int TAMANIO = 50;
		char MiVector[TAMANIO];
		int total_utilizados;
		int contador;
	
	public:
		
		ContadorMayusculas()
			:total_utilizados(0){
		}
		
		int IncrementaConteo(char mayuscula){
			int contador = 0;
			
			if(mayuscula >= 'A' && mayuscula <= 'Z'){
				
				for(int i = 0; i < total_utilizados; i++){
					if(MiVector[i] == mayuscula)
						contador++;
				}
			}
			
			return contador++;
		}
		
		int CuantasHay(char mayuscula){
			return contador;
		}
		
		void Aniade(char  nuevo){
      	if (total_utilizados < TAMANIO){
         	MiVector[total_utilizados]  =  nuevo;
         	total_utilizados++;
			}
   	}
};


int main(){
	
	const char TERMINADOR = '.';
	const int TAMANIO = 50;
	char letra;
	int total_utilizados;
	ContadorMayusculas contador;
	
	
	total_utilizados = 1;
	
	cout << "Introduce una letra ---> ";
	cin >> letra;
	
		
	while(letra != TERMINADOR && total_utilizados < TAMANIO){
		
		contador.Aniade(letra);
		
		cout << "\nLetra: ";
		cin >> letra;
		
		total_utilizados++;
	}
		
		
	for(char m = 'A'; m <= 'Z'; m++){
		cout << "\nLa letra " << m << " aparece " << contador.IncrementaConteo(m) << " veces" << endl;
	}
		
		
}


