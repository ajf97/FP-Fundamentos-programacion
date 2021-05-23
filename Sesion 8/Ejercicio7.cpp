////////////////////////////////////////////////////////////////////////////
//
// Fundamentos de Programación
// ETS Informática y Telecomunicaciones
// Universidad de Granada
// Departamento de Ciencias de la Computación e Inteligencia Artificial
// Autor: Alejandro Jerónimo Fuentes
//
////////////////////////////////////////////////////////////////////////////


/* Cree las siguientes funciones relacionadas con la progresión geométrica que se vio en
	el ejercicio 36 de la relación de problemas II. Analizad cuáles deben ser los parámetros
	a estas funciones.

	a) Una función SumaHasta que calcule la suma de los primeros k valores de una
	progresión geométrica.
	Para implementarla, use el mismo algoritmo (con un bucle for) que se vio como
	solución del ejercicio 36 de la relación de problemas II.
	
	b) Una función ProductoHasta para que multiplique los k primeros elementos de
	la progresión, aplicando la fórmula. Observe que no se pide calcular los productos acumulados en un bucle sino que
   simplemente evalúe la expresión que le da directamente el producto de los k primeros términos.
	
	c) Una función SumaHastaInfinito para calcular la suma hasta infinito, según la
   siguiente fórmula. De nuevo, observe que sólo hay que aplicar la expresión
 	Esta fórmula sólo se puede aplicar cuando el valor absoluto de la
	razón es menor o igual que 1, ya que, en caso contrario, la suma saldría infinito.
	Cree un programa principal que llame a estas funciones.*/
	
	
#include <iostream>
#include <cmath>
using namespace std;


double SumaHasta(double primero, double ultimo, int r){
	
	double suma;
	
	suma = primero;
	
	for(int i = 2; i <= ultimo; i++){
		suma = suma + primero * pow(r,i-1);
	}
	
	return suma;	
}


double ProductoHasta(double primero, double ultimo, int r){
	
	double suma_total;
	double producto;
	
	suma_total = SumaHasta(primero,ultimo,r);
	producto = sqrt(pow(primero*suma_total,ultimo));
	
	return producto;
}


double SumaHastaInfinito(double primero, double razon){
	
	double infinito;
	
	if(razon >= 1)
		infinito = primero / (1-1*(-1*razon));

	return infinito;
}

int main(){
	
	
	double primer_termino, razon;
	int  ultimo_termino;
	double suma_final,producto_final,suma_infinito;



	cout << "\nIntroduzca el primer termino --> ";
	cin >> primer_termino;
	cout << "\nIntroduzca la razon --> ";
	cin >> razon;
	cout << "\nIntroduzca el indice >= 1 del ultimo termino que quiere sumar: ";
	cin >> ultimo_termino;


	suma_final = SumaHasta(primer_termino,ultimo_termino,razon);
	producto_final = ProductoHasta(primer_termino,ultimo_termino,razon);
	suma_infinito = SumaHastaInfinito(primer_termino,razon);
	
	
	cout << "\nLa suma hasta el ultimo termino es: " << suma_final;
	cout << "\nEl producto hasta el ultimo termino es: " << producto_final;
	cout << "\nLa suma hasta infinito es: " << suma_infinito << endl;
	cout << endl;
	
	system("pause");
	
}




	
