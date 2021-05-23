/*Modificad el ejercicio 5 para que el programa nos diga si los tres valores leídos están
ordenados de forma ascendente, ordenados de forma descendente o no están
ordenados. Para resolver este problema, se recomienda usar una variable de tipo
enumerado*/

#include <iostream>
using namespace std;


				
int main(){
	
	int a,b,c;
	bool condicion_ascendente,condicion_descendente;
	enum tipo_de_orden {ascendente,descendente,desordenado};
	

	cout << "Introduce el primer numero: ";
	cin >> a;
	cout << "Introduce el segundo numero: ";
	cin >> b;
	cout << "Introduce el tercer numero: ";
	cin >> c;
	
	tipo_de_orden orden;
	condicion_ascendente = a < b && a < c && b < c;
	condicion_descendente = a > b && a > c && b > c;
	
	
	if (condicion_ascendente)
		orden = tipo_de_orden::ascendente;
		
	else{
		
		if (condicion_descendente)
			orden = tipo_de_orden::descendente;
	
		else
			orden = tipo_de_orden::desordenado;
		
	}
	
	
	if (orden == ascendente)
		cout << "\nEl orden de los numeros es ascendente" << endl;
	
	else{
		
		if (orden == descendente)
			cout << "\nEl orden de los numeros es descendente" << endl;
		
		else
			cout << "\nLos numeros estan desordenados" << endl;
	}
	
	
	system("pause");
	
	
}
