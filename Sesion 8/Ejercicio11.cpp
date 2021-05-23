////////////////////////////////////////////////////////////////////////////
//
// Fundamentos de Programación
// ETS Informática y Telecomunicaciones
// Universidad de Granada
// Departamento de Ciencias de la Computación e Inteligencia Artificial
// Autor: Alejandro Jerónimo Fuentes
//
////////////////////////////////////////////////////////////////////////////


/*Dos números amigos son dos números naturales a y b,
tales que la suma de los divisores propios de a más uno es igual a b, y viceversa. Un
ejemplo de números amigos es el par de naturales (220; 284), ya que:

* Los divisores propios de 220 son 2, 4, 5, 10, 11, 20, 22, 44, 55 y 110, que suman
283, y 283 + 1 = 284.
*Los divisores propios de 284 son 2, 4, 71 y 142, que suman 219, y 219 + 1 = 220.
Realice un programa que implemente estas dos tareas:

	a) En primer lugar debe leer dos números naturales e indicar si son o no amigos.
	
	b) A continuación leerá otro número natural, n, e informará si existe algún número
	amigo de n en el intervalo centrado en n y de radio 3.
	Utilice las funciones que estime oportuno.*/
	
#include <iostream>
using namespace std;


int SumaDivisores(int a){
	
	int i;
	int divisor,suma;
	
	suma = 0;
	
	for(i=2; i < a;i++){
		divisor = a % i;
		
		if(divisor == 0)
			suma = suma + i;
	}
	
	return suma;
	
}



void IntervaloDerecha(int n){
	
	int divisores;
	int contador_amigos;
	int i,radio;
	
	radio = n + 3;
	divisores = SumaDivisores(n) + 1;
	
	for(i=n; i <= radio; i++){
		if(divisores == i){
			cout << "Los numeros amigos del intervalo de la derecha son: ";
			cout << "\n" << n << " y " << i;
			contador_amigos++;
		}
	}	

	if(contador_amigos == 0)
		cout << "No existen numeros amigos en el intervalo de la derecha" << endl;

	cout << endl;
}


void IntervaloIzquierda(int n){
	
	int divisores;
	int contador_amigos;
	int j,radio;
	
	radio = n - 3;
	divisores = SumaDivisores(n) + 1;
	
	for(j=n; j >= radio; j--){
		if(divisores == j){
			cout << "Los numeros amigos del intervalo de la izquierda son: ";
			cout << "\n" << n << " y " << j;
			contador_amigos++;
		}
	}
	
	if(contador_amigos == 0)
		cout << "No existen numeros amigos en el intervalo de la izquierda" << endl;	
	
	cout << endl;
}


int main(){
	
	
	int n1,n2,n_intervalo;
	int divisores_pareja;
	
	
	cout << "Introduce un numero natural --> ";
	cin >> n1;
	cout << "Introduce otro numero natural --> ";
	cin >> n2;
	cout << "Introduce un numero natural para el intervalo --> ";
	cin >> n_intervalo;
	
	
	divisores_pareja = SumaDivisores(n1) + 1;
	
	
	if (divisores_pareja == n2)
		cout << "\nLos numeros " << n1 << " y " << n2 << " son amigos" << endl;
	else
		cout << "\nLos numeros " << n1 << " y " << n2 << " no son amigos" << endl;
	
	cout << endl;
	
	IntervaloDerecha(n_intervalo);
	IntervaloIzquierda(n_intervalo);
	
	cout << endl;
	
	system("pause");	
}

