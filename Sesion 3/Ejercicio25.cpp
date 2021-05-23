/*Escribe una expresión lógica que sea verdadera si una variable de tipo caracter llamada letra
es una letra minúsula y falso en otro caso*/

/*Escribe una expresión lógica que sea verdadera si una variable de tipo entero llamada edad es menor que 
18 o mayor que 65*/

/*Escribid una expresión lógica que nos informe cuando un año es bisiesto. Los años
bisiestos son aquellos que o bien son divisibles por 4 pero no por 100, o bien son
divisibles por 400.*/

/*Escribid un programa que lea las variables letra, edad y anio, calcule el valor de
las expresiones lógicas anteriores e imprima el resultado. Tened en cuenta que cuando
se imprime por pantalla (con cout) una expresión lógica que es true, se imprime 1. Si
es false, se imprime un 0. En el tema 2 veremos la razón.*/


#include <iostream>

using namespace std;

int main (){
	
	char letra;
	int edad,anio;
	bool expr1,expr2,expr3;
	
	
	cout << "Introduce una letra: ";
	cin >> letra;
	cout << "Introduce una edad: ";
	cin >> edad;
	cout << "Introduce un año: ";
	cin >> anio;
	
	
	expr1 = letra >= 97 && letra <= 122;
	expr2 = edad < 18 || edad > 65;
	expr3 = (anio%4 && anio%400) == 0 && anio%100 != 0;
	
	
	cout << "\nLa expresion logica de la letra es: " << expr1 << endl;
	cout << "La expresion logica de la edad es: " << expr2 << endl;
	cout << "La expresion logica del año bisiesto es: " << expr3 << endl;
	
	
	system("pause");
	
	
	
}
