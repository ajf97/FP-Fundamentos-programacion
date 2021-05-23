////////////////////////////////////////////////////////////////////////////
//
// Fundamentos de Programación
// ETS Informática y Telecomunicaciones
// Universidad de Granada
// Departamento de Ciencias de la Computación e Inteligencia Artificial
// Autor: Alejandro Jerónimo Fuentes
//
////////////////////////////////////////////////////////////////////////////

/* Defina la clase SecuenciaEnteros análoga
a SecuenciaCaracteres. Defina lo que sea necesario para calcular el número
de secuencias ascendentes del vector. Por ejemplo, el vector {2,4,1,1,7,2,1} tiene
4 secuencias que son {2,4}, {1,1,7}, {2}, {1}.*/

#include <iostream>
using namespace std;


class  SecuenciaEnteros{
private:
   static const int TAMANIO  =  50;
   int vector_privado[TAMANIO];
   int total_utilizados;
   
   void IntercambiaComponentesDirectamente (int izda, int dcha){
      int intermedia;

      intermedia = vector_privado[izda];
      vector_privado[izda] = vector_privado[dcha];
      vector_privado[dcha] = intermedia;
   }
   
public:
   SecuenciaEnteros()
      :total_utilizados(0){    
   }
   
   int TotalUtilizados(){
      return  total_utilizados;
   }
   
   int Capacidad(){
      return TAMANIO;
   }
   
   void Aniade(int  nuevo){
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

   void Modifica (int indice_componente, int nuevo){
      if (indice_componente >= 0  &&  indice_componente < total_utilizados)
         vector_privado[indice_componente] = nuevo;
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
   
	void EliminaRepetidos(){
		for(int i = 1; i < total_utilizados; i++){
			if(vector_privado[i] == vector_privado[i-1])
				Elimina(i);
		}
	}
	
	int SecuenciaAscendente(){
		int secuencias = 0;
		int maximo = 0;
		
		for(int i = 0; i < total_utilizados; i++){
			
			if(vector_privado[i] >= maximo)
				maximo = vector_privado[i];
			
			
			if(vector_privado[i] < maximo){
				secuencias++;
				maximo = vector_privado[i];
			}
		}
		
		return secuencias;
	}
};

int main(){
   const int TERMINADOR = -1;
   const int TAMANIO = 100;
   int entero;
	SecuenciaEnteros secuencia;
   
   int total_introducidos = secuencia.TotalUtilizados();
   
	cout << "Introduce enteros";
   cout << "\n" << TERMINADOR << " para finalizar ";
   cin >> entero;
   
   
   while (entero != TERMINADOR && total_introducidos < TAMANIO){
      
      secuencia.Aniade(entero);
      total_introducidos++;
      
      cout << "\nEnteros: ";
      cin >> entero;
   }

	cout << "El numero de secuencias ascendentes es: " << secuencia.SecuenciaAscendente() + 1;
	
}

