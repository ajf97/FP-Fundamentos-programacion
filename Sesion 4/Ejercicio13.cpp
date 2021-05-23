/* Programa que lea los datos fiscales da una persona, reajuste su renta bruta
según el criterio que se indica posteriormente e imprima su renta neta final.*/

#include <iostream>
#include <string.h>
using namespace std;


int main(){
	
	double renta_bruta,retencion_inicial;    // Variables de entrada
	string autonomo,pensionista,estado_civil; // Variables de entrada
	double retencion_final,renta_neta;      // Variables de salida
	
	cout << "Eres autonomo?: ";
	cin >> autonomo;
	cout << "Eres pensionista?: ";
	cin >> pensionista;
	cout << "Introduce tu estado civil: ";
	cin >> estado_civil;
	cout << "Introduce la renta bruta: ";
	cin >> renta_bruta;
	cout << "Introduce la retencion inicial (en tanto por ciento): ";
	cin >> retencion_inicial;
	
	
	if (autonomo == "si"){
		
		retencion_final = retencion_inicial - 3;
		renta_neta = renta_bruta - renta_bruta * retencion_final / 100;
		cout << "\nLa renta neta sera de: " << renta_neta << endl;
	}
	
	else{
		if (pensionista == "si"){
			
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
	
