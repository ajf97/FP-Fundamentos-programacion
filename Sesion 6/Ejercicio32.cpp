/*Un n�mero entero de n d�gitos se dice que es narcisista si se puede obtener como
la suma de las potencias n-�simas de cada uno de sus d�gitos. Por ejemplo 153 y
8208 son n�meros narcisistas porque 153 = 13 + 53 + 33 (153 tiene 3 d�gitos) y
8208 = 84 +24 +04 +84 (8208 tiene 4 d�gitos). Construir un programa que, dado un
n�mero entero positivo, nos indique si el n�mero es o no narcisista.*/


#include <iostream>
#include <cmath>
using namespace std;


int main(){
	
	int entero,contador,reducir;
	double suma,digito;
	bool narcisista = false;
	
	
	do{
		
		cout << "Introduce un numero entero positivo --> ";
		cin >> entero;
	}while(entero < 0);
	
	
	reducir = entero;
	contador = 0;
	
	
	while(reducir > 0){                   //Cuenta los digitos del numero
		
		reducir = reducir / 10;
		contador++;
	}
	
	
	reducir = entero;
	suma = 0;
	
	
	for(int i = 0; i < contador; i++){
		
		digito = reducir % 10;
		suma = suma + pow(digito, contador);
		reducir = reducir / 10;
	}
	
	
	if (suma == entero)
		narcisista = true;
	else
		narcisista = false;
	
	
	if (narcisista)
		cout << "\nEl numero " << entero << " es narcisista." << endl;
	else
		cout << "\nEl numero " << entero << " no es narcisista." << endl;
		
	
	system("pause");
	
}
