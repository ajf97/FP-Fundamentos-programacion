////////////////////////////////////////////////////////////////////////////
//
// Fundamentos de Programación
// ETS Informática y Telecomunicaciones
// Universidad de Granada
// Departamento de Ciencias de la Computación e Inteligencia Artificial
// Autor: Alejandro Jerónimo Fuentes
//
////////////////////////////////////////////////////////////////////////////


/* Añada el método IntercambiaComponentes para intercambiar dos componentes
de la secuencia. Por ejemplo, si la secuencia contiene {'h','o','l','a'}, después
de intercambiar las componentes 1 y 3, se quedaría con {'h','a','l','o'}.
¿Qué debería hacer este método si los índices no son correctos?
Modifique la implementación del método Invierte del ejercicio 4, para que lo haga
llamando a IntercambiaComponentes.
Imprima las componentes de la secuencia desde el main, antes y después
de llamar a dicho método. Para ello, use el método ToString() de la clase
SecuenciaCaracteres.*/


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
		
	
		 void IntercambiaComponentes(int primer_indice, int segundo_indice) {
	        char copia_intermedia;
	
	        if ((primer_indice >= 0)&&(primer_indice < total_utilizados)&&(segundo_indice >= 0)&&(segundo_indice < total_utilizados)) {
	            copia_intermedia = vector_privado[primer_indice];
	            vector_privado[primer_indice] = vector_privado[segundo_indice];
	            vector_privado[segundo_indice] = copia_intermedia;
        }
		
		void InvertirVector() {
	      int valor_derecha = total_utilizados - 1;
	
	      for (int i = 0; i < total_utilizados / 2; i++) {
	         IntercambiaComponentes(i, valor_derecha);
	
	         valor_derecha--;
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
	
	
	system("pause");
}
