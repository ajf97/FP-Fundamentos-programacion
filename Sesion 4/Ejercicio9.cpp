/* En un programa de ventas, si la cantidad vendida es mayor de 100 unidades, se le
aplica un descuento del 3 %. Por otra parte, si el precio final de la venta es mayor de
700 euros, se aplica un descuento del 2 %. Ambos descuentos son acumulables.
Vamos a cambiar el criterio de los descuentos. Supondremos que sólo se aplicará el
descuento del 2% (por una venta mayor de 700 euros) cuando se hayan vendido más
de 100 unidades, es decir, para ventas de menos de 100 unidades no se aplica el
descuento del 2% aunque el importe sea mayor de 700 euros.*/

#include <iostream>

using namespace std;


int main(){
	
	double cantidad_vendida,precio_final,descuento;
	
	cout << "Introduce las unidades vendidas: ";
	cin >> cantidad_vendida;
	cout << "Introduce el precio final: ";
	cin >> precio_final;
	
	
	if (cantidad_vendida >= 100 && precio_final >= 700){
		
		descuento = precio_final - (precio_final * 0.02);
		cout << "\nEl precio final es: " << descuento << endl;
	}
	
	else
		
		cout << "\nNo se aplica el descuento." << endl;
	
	
	system("pause");
	
}
