////////////////////////////////////////////////////////////////////////////
//
// Fundamentos de Programación
// ETS Informática y Telecomunicaciones
// Universidad de Granada
// Departamento de Ciencias de la Computación e Inteligencia Artificial
// Autor: Alejandro Jerónimo Fuentes
//
////////////////////////////////////////////////////////////////////////////

/* Sgeún un etsduio de una uivenrsdiad ignlsea, no ipmotra el
odren en el que las ltears etsan ersciats, la úicna csoa ipormtnate es que la pmrirea y
la útlima ltera etsén ecsritas en la psioción cocrrtea. El rsteo peuden estar ttaolmntee
mal y aún pordás lerelo sin pobrleams. Etso es pquore no lemeos cada ltera por sí
msima snio la paalbra cmoo un tdoo.
Diremos que dos palabras son similares si la primera letra de ambas palabras es
igual, la última letra de ambas palabras también es igual y el resto de las letras son
las mismas pero no están necesariamente en las mismas posiciones. De esta forma,
las palabras ttalomntee y totalmente son similares.
Declare en el main dos objetos de la clase SecuenciaCaracteres y asígneles
algunos caracteres de prueba. Implemente en el main un algoritmo que compruebe
si los dos objetos son similares según el criterio anterior.
Si lo necesita, puede añadir los métodos que estime oportunos a la clase
SecuenciaCaracteres.
Si le sirve de ayuda, utilice como base la descripción del siguiente algoritmo:
	Usaremos una secuencia de letras ya procesadas
	Comparar las primeras y últimas letras de cada palabra
	Si son iguales:
	Recorrer el resto de letras:
	Si la letra no está en la secuencia de procesadas:
	Añadirla a procesadas
	Contar el número de apariciones de la letra en cada palabra
	Si el número de apariciones es distinto, no son similares*/

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
      :total_utilizados(0)       
   {    
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
};

int main(){
	
	SecuenciaCaracteres una_secuencia,otra_secuencia;
	const char TERMINADOR = "#";
	char caracter;
	int total_utilizados_proce, total_utilizados_comp;
	bool compara_letras;
	
	
	cout << "Introduce caracteres para formar la palabra (# para finalizar): ";
	cin >> caracter;
	
	
	while (caracter != TERMINADOR){
		
		una_secuencia.Aniade(caracter);
		
		cout << "Introduce caracteres para formar la palabra (# para finalizar): ";
		cin >> caracter;
	}
	
	
	cout << "Introduce caracteres para formar la palabra ordenada (# para finalizar): ";
	cin >> caracter;
	
	
	while (caracter != TERMINADOR){
		
		otra_secuencia.Aniade(caracter);
		
		cout << "Introduce caracteres para formar la palabra ordenada (# para finalizar): ";
		cin >> caracter;
	}
	
	
	total_utilizados_proce = una_secuencia.TotalUtilizados();
	total_utilizados_comp = otra_secuencia.TotalUtilizados();
	compara_letras = (una_secuencia.Elemento(0) == una_secuencia.Elemento(0)) && (una_secuencia.Elemento(total_utilizados_proces - 1) && otra_secuencia.Elemento(total_utilizados_comp - 1));
	
	
	if (compara_letras){
		
		for (int i = 1; i < total_utilizados_proce; i++){
			for (int j = 1; i < total_utilizados_comp; j++){
				
				if (una_secuencia.Elemento(i) == otra_secuencia.Elemento(j))
					numero_apariciones++;
				}
		}
		
		if (numero_apariciones != total_utilizados_comp)
			cout << "Las palabras no son similares";
		
		
	}
	
	else
		cout << "Las palabras no son similares";
	
		
}
