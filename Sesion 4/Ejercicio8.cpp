/*Queremos modificar el ejercicio 7 para leer un car?cter letra_original desde teclado
y hacer lo siguiente:
	
	*Si es una letra may?scula, almacenaremos en la variable letra_convertida
	la correspondiente letra min?scula.
	
	*Si es una letra min?scula, almacenaremos en la variable letra_convertida
	la correspondiente letra may?scula.
	
	*Si es un car?cter no alfab?tico, almacenaremos el mismo car?cter en la variable
	letra_convertida

El programa debe imprimir en pantalla el valor de letra_convertida e indicar si la
letra introducida era una min?scula, may?scula o no era una car?cter alfab?tico.*/

#include <iostream>

using namespace std;


int main (){
	
	char letra_original,letra_convertida;
	
	
	cout << "Introduce una letra: ";
	cin >> letra_original;
	

	if (letra_original >= 'A' && letra_original <= 'Z'){
		
		letra_convertida = letra_original + ('a'-'A');
		cout << "\nHas introducido una letra mayuscula, la letra en minuscula es: " << letra_convertida << endl;
		
	}
	else{
		
		if (letra_original >= 'a' && letra_original <= 'z') {
		
		letra_convertida = letra_original - ('a'-'A');
		cout << "\nHas introducido una letra minuscula, la letra en mayuscula es: " << letra_convertida << endl;
		
		}
	
		else{
		
		letra_convertida = letra_original;
		cout << "\nHas introducido el caracter no alfabetico: " << letra_convertida << endl;
		}
	
	}
	
	system("pause");
	
}
