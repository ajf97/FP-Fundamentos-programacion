/*Una empresa que tiene tres sucursales decide llevar la contabilidad de las ventas
de sus productos a lo largo de una semana. Para ello registra cada venta con
tres n�meros, el identificador de la sucursal (1, 2 o 3), el c�digo del producto codificado
como un car�cter (a, b � c) y el n�mero de unidades vendidas. Dise�ar
un programa que lea desde el teclado una serie de registros compuestos por
sucursal, producto, unidades y diga cu�l es la sucursal que m�s productos
ha vendido. La serie de datos termina cuando la sucursal introducida vale -1.
Se puede ver que la sucursal que m�s productos ha vendido es la n�mero 2 con 41
unidades totales. Para comprobar que el programa funciona correctamente, cread un
fichero de texto y re-dirigid la entrada a dicho fichero.*/


#include <iostream>
using namespace std;


int main(){
	
	int sucursal,unidades;
	char producto;
	const int FIN = -1;
	int maximo;
	
	
	
	cout << "\nIntroduce el identificador de la sucursal --> ";   //Lectura adelantada
	cin >> sucursal;
	cout << "Introduce el codigo del producto --> ";
	cin >> producto;
	cout << "Introduce el numero de unidades vendidas --> ";
	cin >> unidades;
	
	maximo = unidades;
	
	while(sucursal != FIN){
	
	cout << "\nIntroduce el identificador de la sucursal --> ";   //Lectura adelantada
	cin >> sucursal;
	cout << "Introduce el codigo del producto --> ";
	cin >> producto;
	cout << "Introduce el numero de unidades vendidas --> ";
	cin >> unidades;
   
		if(maximo < unidades)
			maximo = unidades;
	}
	

	cout << "\nEl mayor numero de unidades vendidas es --> " <<  maximo << " unidades ";
	cout << "\n\n";
	
	
	system("pause");
	
	
}
