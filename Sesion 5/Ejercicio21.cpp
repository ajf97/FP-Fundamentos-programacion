/*Se pide leer un carácter desde teclado, obligando al usuario a que sea una letra mayúscula.
Para ello, habrá que usar una estructura repetitiva do while, de forma que
si el usuario introduce un carácter que no sea una letra mayúscula, se le volverá a
pedir otro carácter. Calculad la minúscula correspondiente e imprimidla en pantalla.
No pueden usarse las funciones tolower ni toupperde la biblioteca cctype.*/

#include <iostream>
using namespace std;


int main(){
	
	char letra;
	char minuscula;
	
	do{
		
		cout << "Introduce una letra mayuscula --> ";
		cin >> letra;
	
	}while(letra >= 'a' && letra <= 'z');
	
	
	minuscula = letra + ('a'-'A');
	
	
	cout << "\nSu letra en minuscula es: " << minuscula << endl;
	
	
	system("pause");
}
