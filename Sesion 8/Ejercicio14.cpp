////////////////////////////////////////////////////////////////////////////
//
// Fundamentos de Programaci�n
// ETS Inform�tica y Telecomunicaciones
// Universidad de Granada
// Departamento de Ciencias de la Computaci�n e Inteligencia Artificial
// Autor: Alejandro Jer�nimo Fuentes
//
////////////////////////////////////////////////////////////////////////////


/* Escribir un programa que lea dos n�meros enteros, escriba en pantalla el men� que
se muestra a continuaci�n, lea la opci�n seleccionada y muestre el resultado de la
operaci�n indicada.
----------------
I. Introducir n�meros
S. Suma
P. Producto
M. M�ximo
R. SaliR
----------------
Introduzca opci�n:
Observe que se permite realizar distintas operaciones (opciones S,P,M) con los mis-
mos valores num�ricos (los introducidos en la opci�n I)
*/

#include <iostream>
#include <cctype>
using namespace std;


void Menu(){
	
	cout << "------------------------" << endl;
	cout << " I. Introducir numeros" << endl;
	cout << " S. Suma" << endl;
	cout << " P. Producto" << endl;
	cout << " M. Maximo" << endl;
	cout << " R. SaliR" << endl;
	cout << "------------------------ " << endl;
	cout << "Introduce una opcion --> ";
}

char Opcion(){
	
	char opcion;
	
	do{
	 	cin >> opcion;
      opcion = toupper(opcion);
      
   }while(opcion !='S' && opcion !='P' && opcion !='I' && opcion !='R');
   return opcion;
}


double LeeNumeros(){
	
	double a;
	cin >> a;
	return a;
}


double Suma(double a, double b){
	
	double sumar;
	sumar = a + b;
	return sumar;
}


double Producto(double a, double b){
	
	double producto;
	producto = a * b;
	return producto;	
}


double Maximo( double a, double b){
	double maximo = a;
	
	if (b > a){
		maximo = b;
	}
	return maximo;
}


int main(){
	
	
	double dato1, dato2, resultado;
   char opcion_leida;
	bool esCorrecto=false;
	
   const char SALIDA = 'R';
   const string INTRODUCIR_VALORES = "\nIntroduzca dos valores enteros\n";
   const string RESULTADO = "\nResultado de la operacion: ";
   const string DATOS_NO_INTRODUCIDOS = "\nDebes de introducir datos\n";
	
	
   do{
   	Menu();
   	opcion_leida = Opcion();
      
      
     if (opcion_leida == 'I'){
         esCorrecto = true;
	    	cout << INTRODUCIR_VALORES;
	    	
         dato1 = LeeNumeros();
	    	dato2 = LeeNumeros();   
         }
     
	  
	  else if ((opcion_leida == 'P') || (opcion_leida == 'S') ||   (opcion_leida == 'M'))
             if (!esCorrecto )
	              cout << DATOS_NO_INTRODUCIDOS;
	          
				 else {
		  			if (opcion_leida == 'P')
		      		resultado = Producto(dato1,dato2);
		  			else if (opcion_leida == 'S')
            	           resultado = Suma(dato1,dato2);
		       			else if (opcion_leida == 'M')
            	      		resultado = Maximo(dato1,dato2);
		         
					cout << RESULTADO << resultado << endl;
	     		  }
            	
		cout << endl << endl << endl;		
					            		
   }while(opcion_leida != SALIDA);   
   
	cout  << endl;
	
	system("pause");
}
