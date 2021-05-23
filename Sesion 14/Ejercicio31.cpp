////////////////////////////////////////////////////////////////////////////
//
// Fundamentos de Programación
// ETS Informática y Telecomunicaciones
// Universidad de Granada
// Departamento de Ciencias de la Computación e Inteligencia Artificial
// Autor: Alejandro Jerónimo Fuentes
//
////////////////////////////////////////////////////////////////////////////


/*Defina la clase SecuenciaEnteros análoga a SecuenciaCaracteres pero para
que trabaje sobre enteros. Defina en el main un vector clásico de corchetes de tipo de
dato char. Lea desde el main varios caracteres y asígnelos al vector de char. Lea
también varios enteros y asígnelos a un objeto de la clase SecuenciaEnteros.
Implemente ahora directamente en el main un algoritmo para que elimine eficientemente
todas las posiciones indicadas en la secuencia de enteros. Por ejemplo, si
el vector de caracteres contiene Fundamentos, después de eliminar el conjunto de
posiciones dado por 2 5 3, el vector se quedará como Fuaentos.
Observe que una posibilidad sería sustituir los caracteres a borrar por un carácter especial,
por ejemplo # y luego pasarle un algoritmo que eliminase todas las ocurrencias
de #. Sin embargo, nunca debemos recurrir a esta técnica ya que no podemos presuponer
que tenemos la posibilidad de elegir tal carácter especial, ya que puede ser un
carácter válido de la secuencia.
Se recomienda implementar el siguiente algoritmo:
Utilizar dos índices: pos_escritura y pos_lectura que marquen
las posiciones de lectura y escritura en el vector de char
Ordenar la secuencia de enteros
Recorrer con pos_lectura los caracteres del vector de char
Si el carácter actual no está en una posición a borrar,
colocarlo en pos_escritura.*/

#include <iostream>
#include <string>
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
   
	SecuenciaCaracteres()
      :total_utilizados(0)       
   {    
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
   
   int Elemento(int  indice){
      return  vector_privado[indice];
   }
   
   void EliminaTodos(){
      total_utilizados = 0;
   }

   void Modifica (int indice_componente, int nuevo){
      if (indice_componente >= 0  &&  indice_componente < total_utilizados)
         vector_privado[indice_componente] = nuevo;
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
   
   void Ordena_por_insercion(){
   	
   	int izda,i,a_desplazar;
   	
   	for(izda = 1; izda < total_utilizados; izda++){
			a_desplazar = vector_privado[izda];
   	
   	
	   	for(i = izda; i > 0 && a_desplazar < vector_privado[i-1]; i--)
	   		vector_privado[i] = vector_privado[i-1];
	   	
	   	vector_privado[i] = a_desplazar;
		}
	}
};


void Elimina (int posicion){
	if (posicion >= 0 && posicion < total_utilizados){
		
		int tope = total_utilizados-1;
		
		for (int i = posicion ; i < tope ; i++){
			vector_privado[i] = vector_privado[i+1];
			total_utilizados--;
		}
	}	
}


int main(){
	
	const int TAMANIO = 50;
	const char TERMINADOR_CARACTERES = '#';
	const int TERMINADOR_ENTEROS = -1;
	char vector_caracteres[TAMANIO];
	char caracter;
	int total_utilizados, enteros;
	int pos_lectura, pos_escrita,a_borrar;
	SecuenciaEnteros una_secuencia;
	
	
	cout << "Introduce un caracter (# para finalizar) ---> ";
	cin >> caracter;
	
	
	total_utilizados = 0;
	
	
	while((caracter != TERMINADOR_CARACTERES) && (total_utilizados < TAMANIO)){
		
		vector_caracteres[total_utilizados] = caracter;
		
		cout << "Introduce un caracter (# para finalizar) ---> ";
		cin >> caracter;
	}
	
	
	cout << "Introduce un entero (-1 para finalizar) ---> ";
	cin >> entero;
	
	
	while(entero != TERMINADOR_ENTEROS){
		
		una_secuencia.Aniade(entero);
		
		cout << "Introduce un entero (-1 para finalizar) ---> ";
		cin >> entero;
	}
	
	
	//Ordenamos el vector de enteros
	
	una_secuencia.Ordena_por_insercion();
	
	
	for (pos_lectura = 0; pos_lectura < total_utilizados; pos_lectura++){
		if (vector_caracteres[pos_lectura] == a_borrar)
			Elimina(pos_lectura);
		else
			pos_escritura = vector_caracteres[pos_lectura];
	}
	
}
