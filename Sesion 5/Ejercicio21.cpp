/*Se pide leer un car�cter desde teclado, obligando al usuario a que sea una letra may�scula.
Para ello, habr� que usar una estructura repetitiva do while, de forma que
si el usuario introduce un car�cter que no sea una letra may�scula, se le volver� a
pedir otro car�cter. Calculad la min�scula correspondiente e imprimidla en pantalla.
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
