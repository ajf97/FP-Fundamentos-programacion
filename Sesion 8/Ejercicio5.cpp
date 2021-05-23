////////////////////////////////////////////////////////////////////////////
//
// Fundamentos de Programación
// ETS Informática y Telecomunicaciones
// Universidad de Granada
// Departamento de Ciencias de la Computación e Inteligencia Artificial
// Autor: Alejandro Jerónimo Fuentes
//
////////////////////////////////////////////////////////////////////////////


/*Escriba una función en C++ LeeOpcion2Alternativas que imprima en pantalla
un mensaje, lea una opción como un carácter y sólo permita aceptar los caracteres
'S' o 'N' (mayúscula o minúscula). ¿Qué debería devolver la función? ¿El carácter
leído o un bool?. Aplique esta función en la solución del ejercicio 13 (Renta bruta y
neta) de la relación de problemas II, para leer si una persona es pensionista o si es
autónomo.*/

#include <iostream>
using namespace std;


bool LeeOpcion2Alternativas(char ch){
	
	while((ch != 's' && ch!= 'S') && (ch != 'n' && ch != 'N')){
		cout << "Has introducido un caracter incorrecto vuelve a introducir (S/s o N/n) --> ";
		cin >> ch;
	}
	
	if(ch == 's' || ch == 'S')
		return true;
	if(ch == 'n' || ch == 'N')
		return false;
}


int main(){

	double renta_bruta,retencion_inicial;    // Variables de entrada
	string estado_civil;                    // Variables de entrada
	double retencion_final,renta_neta;      // Variables de salida
	bool EsAutonomo,EsPensionista;
	char autonomo,pensionista;
	
	
	cout << "Eres autonomo? (Ss o Nn): ";
	cin >> autonomo;
	cout << "Eres pensionista? (Ss o Nn): ";
	cin >> pensionista;
	cout << "Introduce tu estado civil: ";
	cin >> estado_civil;
	cout << "Introduce la renta bruta: ";
	cin >> renta_bruta;
	cout << "Introduce la retencion inicial (en tanto por ciento): ";
	cin >> retencion_inicial;
	
	
	EsAutonomo = LeeOpcion2Alternativas(autonomo);
	EsPensionista = LeeOpcion2Alternativas(pensionista);
	
	
	if (EsAutonomo == true){
		retencion_final = retencion_inicial - 3;
		renta_neta = renta_bruta - renta_bruta * retencion_final / 100;
		cout << "\nLa renta neta sera de: " << renta_neta << endl;
	}
	
	else{
		if (EsPensionista == true){
			retencion_final = retencion_inicial + 1;
			renta_neta = renta_bruta - renta_bruta * retencion_final / 100;
			cout << "\nLa renta neta sera de: " << renta_neta << endl;
		}
		
		else{
			if (renta_bruta <= 20000 && (estado_civil == "soltero" || estado_civil == "casado")){
				retencion_final = retencion_inicial + 4;
				renta_neta = renta_bruta - renta_bruta * retencion_final / 100;
				cout << "\nLa renta neta sera de: " << renta_neta << endl;
			}
		
			else{
				if (estado_civil == "soltero"){
					retencion_final = retencion_inicial + 5;
					renta_neta = renta_bruta - renta_bruta * retencion_final / 100;
					cout << "\nLa renta neta sera de: " << renta_neta << endl;
					}
				else{
					retencion_final = retencion_inicial + 4.5;
					renta_neta = renta_bruta - renta_bruta * retencion_final / 100;
					cout << "\nLa renta neta sera de: " << renta_neta << endl;
				}	
			}
		}
	}

	system("pause");

}
