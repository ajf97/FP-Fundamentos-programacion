/* Programa que pide al usuario un capital 
e inter�s y calcula el dinero que se tendr� 
al cabo de un a�o */

#include <iostream>

using namespace std;

int main () {
	
	double capital,interes,total;
	
	cout << "Introduce un capital: ";
	cin >> capital;
	
	cout << "Introduce un interes: ";
	cin >> interes;
	
	total = capital + capital * (interes / 100);
	
	cout << "El dinero que se tendra al cabo de un a�o sera: " << total;
	
	system ("pause");
	
}

