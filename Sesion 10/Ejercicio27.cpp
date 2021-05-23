////////////////////////////////////////////////////////////////////////////
//
// Fundamentos de Programaci�n
// ETS Inform�tica y Telecomunicaciones
// Universidad de Granada
// Departamento de Ciencias de la Computaci�n e Inteligencia Artificial
// Autor: Alejandro Jer�nimo Fuentes
//
////////////////////////////////////////////////////////////////////////////

/* Recuperad la soluci�n del ejercicio 30 de la Relaci�n de Problemas II (Empresa). Reescribid
el programa principal usando una clase Ventas para gestionar los c�mputos
de las ventas realizadas. �nicamente se pide que se indiquen las cabeceras de los
m�todos p�blicos de la clase y las llamadas a �stos en el programa principal. No hay
que implementar ninguno de los m�todos.
Debe suponer que la clase gestionar� las ventas de exactamente tres sucursales. Los
c�digos de dichas sucursales son enteros cualesquiera (no necesariamente 1, 2, 3,
como ocurr�a en el ejercicio 30 de la Relaci�n de Problemas II*/


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
		
		Ventas(int identificador, char codigo, int unidades){
			if (EsCorrectoID(identificador) && EsCorrectoUnidades(unidades)){
				SetIdentificador(identificador);
				SetCodigo(codigo);
				SetUnidades(unidades);
			}
		}
	
		
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
			const int ID_1 = 1, ID_2 = 2, ID_3 = 3;
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
