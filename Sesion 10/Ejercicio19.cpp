////////////////////////////////////////////////////////////////////////////
//
// Fundamentos de Programaci�n
// ETS Inform�tica y Telecomunicaciones
// Universidad de Granada
// Departamento de Ciencias de la Computaci�n e Inteligencia Artificial
// Autor: Alejandro Jer�nimo Fuentes
//
////////////////////////////////////////////////////////////////////////////

/* En el ejercicio 7 de esta relaci�n de problemas se definieron varias funciones para
operar sobre una progresi�n geom�trica. Definid ahora una clase para representar
una progresi�n geom�trica.
	a) Dise�ad la clase pensando cu�les ser�an los datos miembro esenciales que definen
	una progresi�n geom�trica, as� como el constructor de la clase.
	
	b) Definir un m�todo Termino que devuelva el t�rmino k-�simo.
	
	c) Definid los m�todos SumaHastaInfinito, SumaHasta, MultiplicaHasta.
	
	d) Cread un programa principal que lea los datos miembro de una progresi�n, cree el
	objeto correspondiente y a continuaci�n lea un entero tope e imprima los tope
	primeros t�rminos de la progresi�n, as� como la suma hasta tope de dichos
	t�rminos
*/


#include <iostream>
#include <cmath>
using namespace std;


class ProgresionGeometrica{
	private:
		
		double primer_termino;
		double razon;
		int ultimo_termino;
	
	public:
		
		ProgresionGeometrica(double termino_primero, double razon_progresion, int el_ultimo_termino){
			SetPrimerTermino(termino_primero);
			SetRazon(razon_progresion);
			SetUltimoTermino(el_ultimo_termino);
		}
		
		void SetPrimerTermino(double termino_primero){
			primer_termino = termino_primero;
		}	
		
		double GetPrimerTermino(){
			return primer_termino;
		}
	
		void SetRazon(double razon_progresion){
			razon = razon_progresion;
		}
	
		double GetRazon(){
			return razon;
		}
	
		void SetUltimoTermino(int el_ultimo_termino){
			ultimo_termino = el_ultimo_termino;
		}
				
		int GetUltimo(){
			return ultimo_termino;
		}
	
		
	double SumaHasta(double termino_primero, double el_ultimo_termino, int razon_progresion){
	
		double suma;
		
		suma = termino_primero;
		
		for(int i = 2; i <= el_ultimo_termino; i++){
			suma = suma + termino_primero * pow(razon_progresion,i-1);
		}
		
		return suma;	
   }


	double ProductoHasta(double termino_primero, double el_ultimo_termino, int razon_progresion){
		
		double suma_total;
		double producto;
		
		suma_total = SumaHasta(termino_primero,el_ultimo_termino,razon_progresion);
		producto = sqrt(pow(termino_primero*suma_total,el_ultimo_termino));
		
		return producto;
	}


	double SumaHastaInfinito(double termino_primero, double razon_progresion){
		
		double infinito;
		
		if(razon_progresion >= 1)
			infinito = termino_primero / (1-1*(-1*razon_progresion));
	
		return infinito;
	}
		
	double Termino(double termino_primero, double termino_tope, int razon_progresion){
		
		double obtener_termino;
		obtener_termino = termino_primero;
		
		for(int i = 2; i <= termino_tope; i++){
			obtener_termino = termino_primero * pow(razon_progresion,i-1);
		}
		
		return obtener_termino;
	}
	
	void Progresion(double termino_primero, double termino_tope, int razon_progresion){
		double obtener_termino;
		obtener_termino = termino_primero;
		
		for(int i = 1; i <= termino_tope; i++){
			obtener_termino = termino_primero * pow(razon_progresion,i-1);
			cout <<  "\na" << i << " = " << obtener_termino << endl;
		}
	}
	
};


int main(){
	
	
	double primer_termino, termino_tope;
	double suma;
	int razon;
	
	
	cout << "Introduce el termino (a) de la progresion --> ";
	cin >> primer_termino;
	cout << "Introduce el termino tope (k) de la progresion --> ";
	cin >> termino_tope;
	cout << "Introduce la razon de la progresion --> ";
	cin >> razon;
	
	
	ProgresionGeometrica una_progresion(primer_termino,razon,termino_tope);
	suma = una_progresion.SumaHasta(primer_termino,termino_tope,razon);
	
	
	cout << "La progresion geometrica es: ";
	una_progresion.Progresion(primer_termino,termino_tope,razon);
	cout << "\nLa suma de todos los terminos de la progresion: " << suma << endl;
}
