////////////////////////////////////////////////////////////////////////////
//
// Fundamentos de Programación
// ETS Informática y Telecomunicaciones
// Universidad de Granada
// Departamento de Ciencias de la Computación e Inteligencia Artificial
// Autor: Alejandro Jerónimo Fuentes
//
////////////////////////////////////////////////////////////////////////////

/*Buscaminas es un juego muy conocido cuyo objetivo es
encontrar todas las minas existentes en un tablero rectangular, sin abrir ninguna. Si el
jugador abre una mina, pierde la partida.
Se pide definir la clase TableroBuscaMinas conteniendo lo siguiente:
	
	a) Para representar el tablero se trabajará con una matriz de datos 5030 en la que
	todas las filas tienen el mismo número de columnas y los datos son de tipo bool.
	Contendrá un valor true en caso de haber una mina en la casilla especificada.
	y false en caso contrario. Esta matriz será un dato miembro de la clase y al
	principio, todos los valores estarán a false.
	
	b) Un método para incluir una mina en una determinada casilla.
	
	c) Un método que reciba las coordenadas (i; j) de una casilla y devuelva un valor
	entero que indique el número de minas que rodean a la misma (será un número
	entre 0 y 8). En caso de que la casilla contenga una mina, se devolverá el valor
	-1.
	Hay que tener especial cuidado con las casillas que hay en los bordes de la matriz
	ya que la casilla en la posición [0][0], por ejemplo, sólo tiene tres vecinos
	rodeándola.
	Incluya un pequeño programa de prueba para asignar algunas minas y obtener las
	minas que hay alrededor de algunas casillas.*/

#include <iostream>
using namespace std;


class TableroBuscaMinas{
	private:
		
		static const int NUM_FILAS = 50;
		static const int NUM_COLUM = 30;
		bool tablero[NUM_FILAS] [NUM_COLUM];
	
	public:
		
		TableroBuscaMinas(){
			for (int i = 0; i < NUM_FILAS; i++){
				for (int j = 0; j < NUM_COLUM; j++)
					tablero[i] [j] = false;
			}
		}
	
		void Aniade_Mina(int fila, int columna){
			tablero[fila] [columna] = true;
		}
		
		int Minas_Cercanas(int fila, int columna){
			
			bool condicion = (fila >= 0 && fila <= 50 ) && (columna >= 0 && columna <= 30);
			int numero_minas = 0;
			
			if(condicion){
				
				if(tablero[fila] [columna + 1])
					numero_minas++;
				else if (tablero[fila] [columna - 1])
					numero_minas++;
				else if (tablero[fila + 1] [columna])
					numero_minas++;
				else if (tablero[fila - 1] [columna])
					numero_minas++;
				else
					numero_minas = -1;
			}
			
			return numero_minas;
		}
};


int main(){
	
	TableroBuscaMinas el_tablero;
	const int TERMINADOR = -1 ;
	int fila,columna;
	
	
	cout << "Bienvenido al buscamminas, introduce la fila y la columna para aniadir minas --> ";
	cin >> fila;
	cin >> columna;
	
	
	while (fila != TERMINADOR && columna != TERMINADOR){
		
		cout << "Introduce la fila y la columna para aniadir la mina --> ";
		cin >> fila;
		cin >> columna;
		
		el_tablero.Aniade_Mina(fila,columna);
	}
	
	
	cout << "Introduce casilla para rodear en busca de minas ---> ";
	cin >> fila;
	cin >> columna;
	
	
	while (fila != TERMINADOR && columna != TERMINADOR){
		
		cout << "Introduce casilla para rodear en busca de minas ---> ";
		cin >> fila;
		cin >> columna;
		
		
		cout << "\nEl numero de minas que rodean la casilla es: " << el_tablero.Minas_Cercanas(fila,columna);
		
	}
	
		
}
