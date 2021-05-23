/* Programa que pide al usuario un
radio cualquiera y calcule el área 
de la circunferencia y la longitud*/

#include <iostream>

using namespace std;

int main() {
	
	double radio;
	const double PI = 3.1416;
	
	cout << "Introduce un radio: ";
	cin >> radio;
	
	double area = PI * (radio*radio);
	double longitud = 2 * PI * radio;
	
	cout << "\nEl area de la circunferencia es: " << area;
	cout << "\nLa longitud de la circunferencia es: " << longitud;
	
	system ("pause");
	
}
	
	
	
