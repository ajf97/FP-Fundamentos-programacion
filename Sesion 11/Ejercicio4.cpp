////////////////////////////////////////////////////////////////////////////
//
// Fundamentos de Programación
// ETS Informática y Telecomunicaciones
// Universidad de Granada
// Departamento de Ciencias de la Computación e Inteligencia Artificial
// Autor: Alejandro Jerónimo Fuentes
//
////////////////////////////////////////////////////////////////////////////

/* Añada los métodos EsPalindromo, Invierte y NumeroMayusculas a la clase
SecuenciaCaracteres que implementen las tareas descritas en el ejercicio 1 de
esta relación de problemas.
Incluya un programa principal de prueba similar al del ejercicio 1.*/

#include <iostream>
using namespace std;

class SecuenciaCaracteres {
private:
    static const int TAMANIO = 99;
    char vector_privado[TAMANIO];
    int total_utilizados;

public:

    int TotalUtilizados() {
      return total_utilizados;
    }

    void Aniade(char nuevo_elemento) {
        if (total_utilizados < TAMANIO) {
            vector_privado[total_utilizados] = nuevo_elemento;
            total_utilizados++;
        }
    }

    char Elemento(int indice) {
        return vector_privado[indice];
    }

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
};



int main(){
	
	const char TERMINADOR = '#';
	const int MAX_CARACTER = 99;
	int total_utilizados,contador_mayusculas;
	bool es_mayuscula;
	char caracter;
	SecuenciaCaracteres un_vector;
	
	
	es_mayuscula = caracter >= 'A' && caracter <= 'Z';
	total_utilizados = 0;
	contador_mayusculas = 0;
	
	
	cout << "Introduzca caracter ---> "; // Lectura adelantada
	cin >> caracter;
	un_vector.Aniade(caracter);
	
	
	while(caracter != TERMINADOR && total_utilizados <= MAX_CARACTER){
		
		if(es_mayuscula)
			contador_mayusculas++;
		
	
		cout << "Introduzca caracter ---> ";
		cin >> caracter;
		un_vector.Aniade(caracter);
	}
	
	
	if(EsPalindromo(un_vector.EsPalindromo()))
		cout << "El vector es un palindromo" << endl;
	else
		cout << "El vector no es un palindromo" << endl;
	
	
	
	system("pause");
}
