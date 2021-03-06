////////////////////////////////////////////////////////////////////////////
//
// Fundamentos de Programaci?n
// ETS Inform?tica y Telecomunicaciones
// Universidad de Granada
// Departamento de Ciencias de la Computaci?n e Inteligencia Artificial
// Autor: Alejandro Jer?nimo Fuentes
//
////////////////////////////////////////////////////////////////////////////

/* Sobre la clase SecuenciaCaracteres, a?ada el m?todo EliminaMayusculas
para eliminar todas las may?sculas. Por ejemplo, despu?s de aplicar dicho m?todo al
vector {'S','o','Y',' ','y','O'}, ?ste debe quedarse con {'o',' ','y'}.
Un primer algoritmo para resolver este problema ser?a el siguiente (en ejercicios posteriores
se ver?n m?todos m?s eficientes):
Recorrer todas las componentes de la secuencia
Si la componente es una may?scula, borrarla
Queremos implementarlo llamando al m?todo Elimina (que borra un ?nico car?cter):.
La implementaci?n de este m?todo se ha visto en clase de teor?a.
class SecuenciaCaracteres{
.........
	void EliminaMayusculasError(){
	for (int i=0; i<total_utilizados; i++)
	if (isupper(vector_privado[i]))
	Elimina(i);
	}
	};

El anterior c?digo tiene un fallo. ?Cu?l? Pru?belo con cualquier secuencia que tenga
dos may?sculas consecutivas, proponer una soluci?n e implementarla.*/

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
};


int main(){
   const char TERMINADOR = '#';
   const int TAMANIO = 100;
   int total_introducidos;
   char caracter;
	SecuenciaCaracteres secuencia;
   
   cout << "c: ";
	cin >> caracter;
   total_introducidos = secuencia.TotalUtilizados();
   
   
   while (caracter != TERMINADOR && total_introducidos < TAMANIO){
      
      secuencia.Aniade(caracter);
      secuencia.EliminaMayusculas();
      
      cout << "c: ";
      cin >> caracter;
      total_introducidos++;
   }

	cout << "\nSe han eliminado las mayusculas";
	
  
}

