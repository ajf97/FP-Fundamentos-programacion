/*Indicar si se produce un problema de precisión o de desbordamiento en los siguientes
ejemplos indicando cuál sería el resultado final de las operaciones*/

	
/*	a) int chico, chico1, chico2;    
	chico1 = 123456789;
	chico2 = 123456780;
	chico = chico1 * chico2;
	
	Error de desbordamiento porque un entero solo almacena valores comprendidos entre
	[..2147483648; 2147483647]. Al tener la variable chico más de diez digitos el programa
	imprimirá en pantalla los diez primeros digitos: 1425960444
	
	
	b) long grande;
	int chico1, chico2;
	chico1 = 123456789;
	chico2 = 123456780;
	grande = chico1 * chico2;
	
	Se produce otro error de desbordamiento y daria como resultado el  mismo que en el ejercicio anterior.
	
	
   c) double resultado, real1, real2;
   real1 = 123.1;
   real2 = 124.2;
   resultado = real1 * real2;
		
	Es un error de precisión, el programa hace un redondeo y muestra en pantalla el valor 15289 en vez de 15289.02
	
	
	d)double resultado, real1, real2;
	real1 = 123456789.1;
	real2 = 123456789.2;
	resultado = real1 * real2;
	
	
   Error de precisión, el programa  muestra una aproximación del resultado exacto, muestra 1.52416e+016
   
   
	e)double real, otro_real;
	real = 2e34;
	otro_real = real + 1;
	otro_real = otro_real - real;

   Error de precisión, el programa mostrará 0 porque hace un redondeo. El resultado preciso será 1.
   
   f)double real, otro_real;
	real = 1e+300;
	otro_real = 1e+200;
	otro_real = otro_real * real
	
	Se produce un error de desbordamiento ya que la operación supera el rango establecido para la variable de tipo double.
	(hasta 1.7976931348623157×10308)
	El programa muestra inf
	
	g) float chico;
	double grande;
	grande = 2e+150;
	chico = grande
	
	Error de desbordamiento porque el valor de la variable supera el rango establecido para las variables de tipo float
	que ocupan 4 bytes (hasta 3.4028235×1038). El programa muestra inf. */
