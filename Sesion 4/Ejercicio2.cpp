/* Ampliad el ejercicio 10 de la relación de problemas I, para que, una vez calculada la
media y la desviación, el programa imprima por cada uno de los valores introducidos
previamente, si está por encima o por debajo de la media*/

#include <iostream>
#include <cmath>

using namespace std;

int main () {
	
	double altura1, altura2, altura3; // Variables de entrada
	double media, desv_tipi,potencia; // Variables de salida
	
	
	cout << "Introduce la primera altura: ";        // Datos de entrada
	cin >> altura1;
	cout << "Introduce la segunda altura: ";
	cin >> altura2;
	cout << "Introduce la tercera altura: ";
	cin >> altura3;
	
	
	media = (altura1 + altura2 + altura3) / 3;                                                  // Cálculo de la media aritmética y desviación tipica
	potencia = pow((altura1 - media),2) + pow((altura2 - media),2) + pow((altura3 - media),2);
	desv_tipi = sqrt ( potencia / 3 );
	
	
	cout << "\nLa media aritmetica muestral de las tres alturas: " << media << endl;
	cout << "La desviacion tipica de las tres alturas es: " << desv_tipi << endl;
	
	
	if (altura1 >= media)                                                // Estructura condicional
	
		cout << "\nLa altura 1 es mayor o igual que la media" << endl;
	
	else 
		cout << "\nLa altura 1 es menor que la media" << endl;
		
	if (altura2 >= media)
		
		cout << "La altura 2 es mayor o igual que la media" << endl;
		
	else
	
		cout << "La altura 2 es menor que la media" << endl;
		
	if (altura3 >= media)
	
		cout << "La altura 3 es mayor o igual que la media" << endl;
		
	else
		
		cout << "La altura 3 es menor que la media" << endl;


	system ("pause");
		
	}
	
