/* Programa que lee desde teclado tres variables correspondientes a un número de horas, minutos
y segundos, respectivamente y que calcula las horas, minutos y
segundos dentro de su rango correspondiente*/

#include <iostream>

using namespace std;

int main (){
	
	int horas,minutos,seg;
	
	
	cout << "Introduce el numero de horas: ";
	cin >> horas;
	cout << "Introduce el numero de minutos: ";
	cin >> minutos;
	cout << "Introduce el numero de segundos: ";
	cin >> seg;
	
	
	minutos = minutos + (seg/60);
	seg = seg % 60;
	
	horas = horas + (minutos/60);
	minutos = minutos % 60;
	
	
	cout << "\nLos valores corresponden a: " << horas << " horas " << minutos << " minutos " << seg << " segundos " << "\n";
	
	system("pause");
	

}
