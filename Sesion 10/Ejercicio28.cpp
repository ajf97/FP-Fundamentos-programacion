////////////////////////////////////////////////////////////////////////////
//
// Fundamentos de Programación
// ETS Informática y Telecomunicaciones
// Universidad de Granada
// Departamento de Ciencias de la Computación e Inteligencia Artificial
// Autor: Alejandro Jerónimo Fuentes
//
////////////////////////////////////////////////////////////////////////////


// Implementar los métodos de la clase Ventas del ejercicio anterior.

#include <iostream>
#include <string>
using namespace std;


class Ventas{
	private:
		
		int id_sucursal = 0;
		char cod_sucursal;
		int unidades_vendidas = 0;
		
		
		bool EsCorrectoID(int identificador){
			if (identificador >= 0)
				return true;
			else
				return false;
		}
		
		bool EsCorrectoUnidades(int unidades){
			if (unidades >= 0)
				return true;
			else
				return false;
		}
	
	public:
		
		void SetIdentificador(int identificador){
			id_sucursal = identificador;
		}
		
		void SetCodigo(char codigo){
			cod_sucursal = codigo;
		}
		
		void SetUnidades(int unidades){
			unidades_vendidas = unidades;
		}
	
		int GetIdentificador(){
			return id_sucursal;
		}
		
		char GetCodigo(){
			return cod_sucursal;
		}
		
		int GetUnidades(){
			return unidades_vendidas;
		}
		
		int NumMaxVentas(int num_ventas_1, int num_ventas_2, int num_ventas_3){
			int num_max_ventas = num_ventas_1;
			
			if (num_ventas_2 > num_max_ventas)
		      num_max_ventas = num_ventas_2;  
		      
		   if (num_ventas_3 > num_max_ventas)
		      num_max_ventas = num_ventas_3;  
		      
		   return num_max_ventas;   
		}
	
		int SucursalMaxVentas(int num_ventas_1, int num_ventas_2, int num_ventas_3){
			const int ID_1 = 1, ID_2 = 2, ID_3 = 3;
			int num_max_ventas = num_ventas_1;
			int identif_sucursal_max_ventas = ID_1;
			
			
		   if (num_ventas_2 > num_max_ventas)
		      identif_sucursal_max_ventas = ID_2;  
		      
		   if (num_ventas_3 > num_max_ventas)
		      identif_sucursal_max_ventas = ID_3;  
		      
		   return identif_sucursal_max_ventas;
		}
};


int main(){
	
	Ventas una_sucursal;
	const int TERMINADOR = -1;  
	const int ID_1 = 1; 
	const int ID_2 = 2; 
	const int ID_3 = 3; 
   int identif_sucursal,  identifica_sucursal_max_ventas, unidades_vendidas;
   char cod_producto;
   int numero_ventas_1, numero_ventas_2, numero_ventas_3, numero_max_ventas;
	
	
	numero_ventas_1 = 0;
	numero_ventas_2 = 0;
	numero_ventas_3 = 0;
	numero_max_ventas = 0;
	
	
	cout << "\nSe procede a leer datos del fichero ... \n";
	cin >> identif_sucursal;
	
	
	una_sucursal.SetIdentificador(identif_sucursal);
	
	
	while (identif_sucursal != TERMINADOR){              
      cin >> cod_producto;
      cin >> unidades_vendidas;
      
      
      una_sucursal.SetCodigo(cod_producto);
      una_sucursal.SetUnidades(unidades_vendidas);
      
      
      if (identif_sucursal == ID_1)
         numero_ventas_1 = numero_ventas_1 + unidades_vendidas;
      else if (identif_sucursal == ID_2)
         numero_ventas_2 = numero_ventas_2 + unidades_vendidas;
      else if (identif_sucursal == ID_3)
         numero_ventas_3 = numero_ventas_3 + unidades_vendidas;
      
		    
      cin >> identif_sucursal;
		una_sucursal.SetIdentificador(identif_sucursal);
   }
	
	
	numero_max_ventas = una_sucursal.NumMaxVentas(numero_ventas_1,numero_ventas_2,numero_ventas_3);
	identifica_sucursal_max_ventas = una_sucursal.SucursalMaxVentas(numero_ventas_1,numero_ventas_2,numero_ventas_3);
	
	
	cout << "\nSucursal ganadora: " << identifica_sucursal_max_ventas;
   cout << "\nVentas realizadas: " << numero_max_ventas;
	cout << "\n\n";	
}
