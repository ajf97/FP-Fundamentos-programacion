/*Un número entero n se dice que es desgarrable (torn) si al dividirlo en dos partes
cualesquiera izda y dcha, el cuadrado de la suma de ambas partes es igual a n.
Por ejemplo, 88209 es desgarrable ya que (88 + 209)2 = 88209; 81 también lo es
ya que 81 = (8 + 1)2. Cread un programa que lea un entero n e indique si es o no
desgarrable.*/


#include <iostream>
#include <cmath>
using namespace std;


int main(){
	
	int entero, contador,reducir;
	int operacion,digito,divisor,valor;
	int desgarrable,i = 0;
	
	
	cout << "Introduce un numero entero --> ";
	cin >> entero;
	
	reducir = entero;
	contador = 1;
	

	while(reducir > 0){
		reducir = reducir / 10;
		contador++;
	}

	contador = contador - 1;
	
	while(i < contador){
		divisor = pow (10,i);
		digito = entero / divisor;
		valor= digito;
		digito = 0;
		operacion = valor + digito;
		i++;
	}
	
	if (operacion == entero )
		desgarrable = true;
	else
		desgarrable = false;
	
	

	if (desgarrable)
		cout << "El numero " << entero << " es desgarrable" << endl;
	
	else 
		cout << "El numero " << entero << " no es desgarrable" << endl;
	

	system("pause");
		
}
