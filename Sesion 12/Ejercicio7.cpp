////////////////////////////////////////////////////////////////////////////
//
// Fundamentos de Programación
// ETS Informática y Telecomunicaciones
// Universidad de Granada
// Departamento de Ciencias de la Computación e Inteligencia Artificial
// Autor: Alejandro Jerónimo Fuentes
//
////////////////////////////////////////////////////////////////////////////

/*El algoritmo del ejercicio 6 es muy ineficiente ya que requiere trasladar muchas veces
muchas posiciones (usa dos bucles anidados). Para comprobarlo, ejecute el método
sobre el texto del Quijote, disponible en decsai. Para ello, lea los caracteres hasta
encontrar el terminador #. Para que el texto quepa en la pila, debe hacer los siguientes
cambios*/

#include <iostream>
#include <string>
#include <cctype>
#include <chrono>
using namespace std;


class Cronometro{
private:
	
	typedef std::chrono::time_point<std::chrono::steady_clock>
	Punto_en_el_Tiempo;
	typedef chrono::duration <double, nano> IntervaloTiempo;
	Punto_en_el_Tiempo inicio;
	Punto_en_el_Tiempo final;
	
public:
	
	void Reset(){
	inicio = chrono::steady_clock::now();
	}
	
	double MiliSegundosTranscurridos(){
		final = chrono::steady_clock::now();
		IntervaloTiempo diferencia = final - inicio;
		return diferencia.count() / 1e+6;
	}
};


class  SecuenciaCaracteres{
private:
   static const int TAMANIO  =  2500000;
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
   Cronometro crono_mayusculas;
   
   
	cin >> caracter;
   
   
   total_introducidos = 0;
   
   
   while (caracter != TERMINADOR && total_introducidos < TAMANIO){
      
      secuencia.Aniade(caracter);
      secuencia.EliminaMayusculas();
      
      cin >> caracter;
      
      total_introducidos++;
   }

	cout << "\nSe han eliminado las mayusculas";
	
	crono_mayusculas.Reset();
	
	cout  << "Tiempo de ejecucion: " << crono_mayusculas.MiliSegundosTranscurridos();
  
}

