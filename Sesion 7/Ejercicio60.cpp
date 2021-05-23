////////////////////////////////////////////////////////////////////////////
//
// Fundamentos de Programación
// ETS Informática y Telecomunicaciones
// Universidad de Granada
// Departamento de Ciencias de la Computación e Inteligencia Artificial
// Autor: Alejandro Jerónimo Fuentes
//
////////////////////////////////////////////////////////////////////////////


/*Se dice que un número es triangular si se puede poner como la suma de los primeros
m valores enteros, para algún valor de m. Por ejemplo, 6 es triangular ya que 6 = 1 +
2 + 3. Se pide construir un programa que obtenga todos los números triangulares que
hay menores que un entero tope introducido desde teclado.*/

#include <iostream>
using namespace std;


int main(){
	
	int tope;
	int triangular,i;
	int contador;
	
	cout << "Introduce un entero tope --> ";
	cin >> tope;
	
	
	triangular = 0;
	
	
	for(i = 1; i < tope; i++){
		triangular = triangular + i;
		contador = tope;
		
		while(triangular < contador){
			cout << triangular;
			cout << endl;
			contador = 0;
		}
	}
		
	system("pause");
}
