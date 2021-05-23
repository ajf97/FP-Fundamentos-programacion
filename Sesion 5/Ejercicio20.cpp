/*Sobre el mismo ejercicio del capital y los intereses, construid un programa para calcular
cuántos años han de pasar hasta llegar a doblar, como mínimo, el capital inicial.
Los datos que han de leerse desde teclado son el capital inicial y el interés anual.*/

#include <iostream>
using namespace std;


int main(){
	
	double capital,interes;
	double final;
	int i;
	
	cout << "Introduce un capital: ";
	cin >> capital;
	cout << "Introduce un interes: ";
	cin >> interes;
	
	
	final = 2 * capital;
	i = 0;
	
	
	while (capital < final){
		
		capital = capital + capital * interes / 100;
		i++;
		
		cout << "\nTotal en el anio numero " << i << " = " << capital << endl;
	}
	
	
	cout << "\nEl numero de anios que han de pasar para doblar el capital inicial son: " << i << " anios" << endl;
	
	
	system("pause");	
	
}
