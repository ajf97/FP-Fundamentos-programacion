////////////////////////////////////////////////////////////////////////////
//
// Fundamentos de Programaci�n
// ETS Inform�tica y Telecomunicaciones
// Universidad de Granada
// Departamento de Ciencias de la Computaci�n e Inteligencia Artificial
// Autor: Alejandro Jer�nimo Fuentes
//
////////////////////////////////////////////////////////////////////////////


/* Sobre la clase SecuenciaCaracteres, a�ada un m�todo EliminaRepetidos
que quite los elementos repetidos, de forma que cada componente s�lo aparezca una
�nica vez. Se mantendr� la primera aparici�n, de izquierda a derecha. Por ejemplo, si
la secuencia contiene
{'b','a','a','h','a','a','a','a','c','a','a','a','g'}
despu�s de quitar los repetidos, se quedar�a como sigue:
{'b','a','h','c','g'}
Implemente los siguientes algoritmos para resolver ester problema:
	a) Usando un vector local sin_repetidos en el que almacenamos una �nica
	aparici�n de cada componente:
	Recorrer todas las componentes de la secuencia original
	Si la componente NO est� en "sin_repetidos",
	a�adirla (al vector "sin_repetidos")
	Asignar las componentes de "sin_repetidos" a la secuencia
	
	b) El problema del algoritmo anterior es que usa un vector local, lo que podr�a suponer
	una carga importante de memoria si trabaj�semos con vectores grandes.
	Por lo tanto, vamos a resolver el problema sin usar vectores locales.
	Si una componente est� repetida, se borrar� de la secuencia. Para borrar una
	componente, llamamos al m�todo Elimina.
	
	c) El anterior algoritmo nos obliga a desplazar muchas componentes cada vez que
	encontremos una repetida. Proponga una alternativa (sin usar vectores locales)
	para que el n�mero de desplazamientos sea el menor posible e implem�ntela.*/
	
#include <iostream>
#include <string>
#include <cctype>
using namespace std;


class  SecuenciaCaracteres{
private:
   static const int TAMANIO  =  50;
   char vector_privado[TAMANIO];
   int total_utilizados;
   
   void IntercambiaComponentesDirectamente (int izda, int dcha){
      char intermedia;

      intermedia = vector_privado[izda];
      vector_privado[izda] = vector_privado[dcha];
      vector_privado[dcha] = intermedia;
   }
   
public:
   SecuenciaCaracteres()
      :total_utilizados(0){    
   }
   
   int TotalUtilizados(){
      return  total_utilizados;
   }
   
   int Capacidad(){
      return TAMANIO;
   }
   
   void Aniade(char  nuevo){
      if (total_utilizados < TAMANIO){
         vector_privado[total_utilizados]  =  nuevo;
         total_utilizados++;
      }
   }
   
   char Elemento(int  indice){
      return  vector_privado[indice];
   }
   
   void EliminaTodos(){
      total_utilizados = 0;
   }

   void Modifica (int indice_componente, char nuevo){
      if (indice_componente >= 0  &&  indice_componente < total_utilizados)
         vector_privado[indice_componente] = nuevo;
   }

   string ToString(){
      string cadena;

      for (int i=0; i < total_utilizados; i++)
         cadena = cadena + vector_privado[i];

      return cadena;
   }
   
   int NumeroMayusculas(){
      int numero_mayusculas = 0;
      
      for (int i = 0; i < total_utilizados; i++){
         if (isupper(vector_privado[i]))
            numero_mayusculas++;  
      }
      
      return numero_mayusculas;
   }

   bool EsPalindromo(){
      bool es_palindromo;
      int izda, dcha;

      es_palindromo = true;
      izda = 0;
      dcha = total_utilizados - 1;

      while (izda < dcha && es_palindromo){
         if (vector_privado[izda] != vector_privado[dcha])
            es_palindromo = false;
         else{
            izda++;
            dcha--;
         }
      }

      return es_palindromo;
   }
   
   
   void IntercambiaComponentes (int izda, int dcha){
      if (izda >= 0  &&  izda < dcha  &&  dcha < total_utilizados)
         IntercambiaComponentesDirectamente (izda, dcha);
   }

   void Invierte(){
      
      int izda, dcha;

      izda = 0;
      dcha = total_utilizados - 1;

      while (izda < dcha){
         IntercambiaComponentesDirectamente(izda, dcha);
         izda++;
         dcha--;
      }
   }
   
   void Elimina(int indice_vector){
   	if (indice_vector >= 0 && indice_vector < total_utilizados){
   		
   		for(int i = indice_vector; i < total_utilizados - 1; i++){
   			vector_privado[i] = vector_privado[i + 1];
			}
   		
   		total_utilizados--;
   	}
   }
   
   void EliminaMayusculas(){
   	
   	for(int i = 0; i < total_utilizados; i++){
   		if(isupper(vector_privado[i]))
   			Elimina(i);
   	}
   }
   
	void EliminaRepetidos(){
		for(int i = 1; i < total_utilizados; i++){
			if(vector_privado[i] == vector_privado[i-1])
				Elimina(i);
		}
	}
   
};

int main(){
   const char TERMINADOR = '#';
   const int TAMANIO = 100;
   char caracter;
	SecuenciaCaracteres secuencia;
   
   int total_introducidos = 0;
   
	cout << "Introduce caracteres";
   cout << "\n" << TERMINADOR << " para finalizar ";
   cin >> caracter;
   
   
   while (caracter != TERMINADOR && total_introducidos < TAMANIO){
      
      secuencia.Aniade(caracter);
      secuencia.EliminaRepetidos();
      total_introducidos++;
      
      cout << "\nCaracter: ";
      cin >> caracter;
   }

	cout << "Se han eliminado los elementos repetidos";
	
}

