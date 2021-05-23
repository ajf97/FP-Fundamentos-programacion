/*Recupere la solución del ejercicio 8 y resuélvalo separando entradas y salidas de
los cómputos. Para ello, utilice una variable de tipo enumerado que represente las
opciones de que un carácter sea una mayúscula, una minúscula o un carácter no
alfabético.*/

#include <iostream>
using namespace std;


int main (){
	

	char letra_original,letra_convertida;
	bool condicion1,condicion2;
	enum tipo_de_letra {mayuscula, minuscula, otro};
	
	
	cout << "Introduce una letra: ";
	cin >> letra_original;
	
	
	tipo_de_letra tamanio_letra;
	condicion1 = letra_original >= 'A' && letra_original <= 'Z';
	condicion2 = letra_original >= 'a' && letra_original <= 'z';
	

	if (condicion1)
		tamanio_letra = tipo_de_letra::mayuscula;
		
	else{
		
		if (condicion2) 
			tamanio_letra = tipo_de_letra::minuscula;
			
		else
			tamanio_letra = tipo_de_letra::otro;
	}
	
	
	
	if (tamanio_letra == mayuscula)
		letra_convertida = letra_original + ('a'-'A');
		
		
	else{
		
		if (tamanio_letra == minuscula) 
			letra_convertida = letra_original - ('a'-'A');
		
		else
			letra_convertida = letra_original;
	}
	
	
	
	cout << "La letra " << letra_original << " convertida es " << letra_convertida << endl;
	
	
	system("pause");
	
}
