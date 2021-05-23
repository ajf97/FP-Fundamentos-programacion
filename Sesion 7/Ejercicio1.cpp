////////////////////////////////////////////////////////////////////////////
//
// Fundamentos de Programaci�n
// ETS Inform�tica y Telecomunicaciones
// Universidad de Granada
// Departamento de Ciencias de la Computaci�n e Inteligencia Artificial
// Autor: Alejandro Jer�nimo Fuentes
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


/* A) La funci�n no retorna ning�n valor en el caso de que el entero introducido sea menor que cero
      de esta forma el valor que retornar� la funci�n ser� indeterminado y toda funci�n debe de retornar
      un valor. Si el valor es mayor que 0 retornar� el par�metro actual.
      
   B) Dar� un error de compilaci�n porque no es necesario volver a declarar la variable valor puesto que ya 
   	est� declarada en la cabecera de la funci�n como par�metro.
   
   C) Las funciones de tipo void no retornan ning�n valor, las funciones void ejecutan hasta la �ltima sentencia 
   	mientras que otras funciones ejecutan las sentencias hasta el return.
   
	D) La funci�n no retorna ning�n valor cuando el valor introducido sea menor que cero, solo retornar� verdadero
		cuando sea mayor que cero. Por tanto el comportamiento de la funci�n ser� indeterminado cuando sea menor que cero.

