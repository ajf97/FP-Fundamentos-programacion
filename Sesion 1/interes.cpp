/* Programa que pide al usuario un capital 
e interés y calcula el dinero que se tendrá 
al cabo de un año */

#include <iostream>

using namespace std;

int main () {
	
	double capital,interes,total;
	
	cout << "Introduce un capital: ";
	cin >> capital;
	
	cout << "Introduce un interes: ";
	cin >> interes;
	
	total = capital + capital * (interes / 100);
	
	cout << "El dinero que se tendra al cabo de un año sera: " << total;
	
	system ("pause");
	
}

