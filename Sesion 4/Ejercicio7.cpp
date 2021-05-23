/* Se quiere leer un carácter letra_original desde teclado, y comprobar con una
estructura condicional si es una letra mayúscula. En dicho caso, hay que calcular
la minúscula correspondiente almacenando el resultado en una variable llamada
letra_convertida. En el caso de que no sea una mayúscula, le asignaremos a
letra_convertida el valor que tenga letra_original. Finalmente, imprimiremos
en pantalla el valor de letra_convertida.*/


#include <iostream>

using namespace std;


int main (){
	
	char letra_original,letra_convertida;
	
	
	cout << "Introduce una letra: ";
	cin >> letra_original;
	

	if (letra_original >= 'A' && letra_original <= 'Z'){
		
		letra_convertida = letra_original + ('a'-'A');
		cout << "\nLa letra en minuscula es: " << letra_convertida << endl;
		
	}
	
	else {
		
		letra_convertida = letra_original;
		cout << "\nLa letra que has introducido no es mayuscula, es: " << letra_convertida << endl;
		
	}
	
	
	system("pause");
	
}
