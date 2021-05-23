////////////////////////////////////////////////////////////////////////////
//
// Fundamentos de Programación
// ETS Informática y Telecomunicaciones
// Universidad de Granada
// Departamento de Ciencias de la Computación e Inteligencia Artificial
// Autor: Alejandro Jerónimo Fuentes
//
////////////////////////////////////////////////////////////////////////////

/* Sobre el ejercicio 10, construya una clase específica ContadorMayusculas que
implemente los métodos necesarios para llevar el contador de las mayúsculas. Lo que
se pretende es que la clase proporcione los métodos siguientes:
	void IncrementaConteo (char mayuscula)
	int CuantasHay (char mayuscula)
El primer método aumentará en uno el contador de la correspondiente mayúscula y el
segundo indicará cuántas hay. Modifique el programa principal para que cree un objeto
de esta clase y llame a sus métodos para realizar los conteos de las mayúsculas.
Finalmente, hay que imprimir en pantalla cuántas veces aparece cada mayúscula.*/

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


