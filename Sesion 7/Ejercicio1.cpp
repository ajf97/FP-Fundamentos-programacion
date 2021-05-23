////////////////////////////////////////////////////////////////////////////
//
// Fundamentos de Programación
// ETS Informática y Telecomunicaciones
// Universidad de Granada
// Departamento de Ciencias de la Computación e Inteligencia Artificial
// Autor: Alejandro Jerónimo Fuentes
//
////////////////////////////////////////////////////////////////////////////

/*1. Encuentre los errores de las siguientes funciones:
		int ValorAbsoluto (int entero) {
		if (entero < 0)
		entero = -entero;
		else
		return entero;
		}
		
		void Imprime(double valor) {
		double valor;
		cout << valor;
		}
		
		void Cuadrado (int entero) {
		return entero*entero;
		}
		
		bool EsPositivo(int valor) {
		if (valor > 0)
		return true;
		}
*/


/* A) La función no retorna ningún valor en el caso de que el entero introducido sea menor que cero
      de esta forma el valor que retornará la función será indeterminado y toda función debe de retornar
      un valor. Si el valor es mayor que 0 retornará el parámetro actual.
      
   B) Dará un error de compilación porque no es necesario volver a declarar la variable valor puesto que ya 
   	está declarada en la cabecera de la función como parámetro.
   
   C) Las funciones de tipo void no retornan ningún valor, las funciones void ejecutan hasta la última sentencia 
   	mientras que otras funciones ejecutan las sentencias hasta el return.
   
	D) La función no retorna ningún valor cuando el valor introducido sea menor que cero, solo retornará verdadero
		cuando sea mayor que cero. Por tanto el comportamiento de la función será indeterminado cuando sea menor que cero.

