/*Modifiquemos el ejercicio 6 del capital y los intereses de la primera relaci�n. Supongamos
ahora que se quiere reinvertir todo el dinero obtenido (el original C m�s los
intereses producidos) en otro plazo fijo a un a�o y as�, sucesivamente. Construid un
programa para que lea el capital, el inter�s y un n�mero de a�os N, y calcule e imprima
todo el dinero obtenido durante cada uno de los N a�os, suponiendo que todo
lo ganado (incluido el capital original C) se reinvierte a plazo fijo durante el siguiente
a�o.*/
                             

#include <iostream>
using namespace std;


int main(){
	
	double capital,interes,capital_acumulado;
	int anio,contador_anios;
	
	cout << "Introduce un capital: ";
	cin >> capital;
	cout << "Introduce un interes: ";
	cin >> interes;
	cout << "Introduce un numero de anios: ";
	cin >> anio;
	
	capital_acumulado = capital;
	contador_anios = 1;
	
	
	while( contador_anios <= anio){
		capital_acumulado = capital_acumulado + capital_acumulado * interes / 100;
		cout << "\nTotal en el anio numero " << contador_anios << " = " << capital_acumulado << endl;
		contador_anios++;
	}
	
	
	system("pause");	
	
}
