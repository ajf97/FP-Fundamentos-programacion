////////////////////////////////////////////////////////////////////////////
//
// Fundamentos de Programaci�n
// ETS Inform�tica y Telecomunicaciones
// Universidad de Granada
// Departamento de Ciencias de la Computaci�n e Inteligencia Artificial
// Autor: Alejandro Jer�nimo Fuentes
//
////////////////////////////////////////////////////////////////////////////


/*Recuperad la soluci�n del ejercicio 15 de la Relaci�n de Problemas II (pasar de may�scula
a min�scula y viceversa usando un enumerado) Para que el tipo de dato enumerado
sea accesible desde dentro de las funciones, debemos ponerlo antes de definir
�stas, es decir, en un �mbito global a todo el fichero. Se pide definir las siguientes
funciones y cread un programa principal de ejemplo que las llame:

	a) Capitalizacion nos dice si un car�cter pasado como par�metro es una min�scula,
	may�scula u otro car�cter. A dicho par�metro, llamadlo una_letra. La
	funci�n devuelve un dato de tipo enumerado.
	
	b) Convierte_a_Mayuscula comprueba si un car�cter pasado como par�metro
	es min�scula (para ello, debe llamar a la funci�n Capitalizacion), en cuyo
	caso lo transforma a may�scula. Si el car�cter no es min�scula debe dejar la
	letra igual. A dicho par�metro, llamadlo caracter.
	Esta funci�n hace lo mismo que la funci�n tolower de la biblioteca cctype
	
	Observad que el par�metro una_letra de la funci�n Capitalizacion
	podr�a llamarse igual que el par�metro caracter de la funci�n
	Convierte_a_Mayuscula. Esto es porque est�n en �mbitos distintos y
	para el compilador son dos variables distintas. Haced el cambio y comprobarlo.

	c) Convierte_a_Minuscula an�loga a la anterior pero convirtiendo a min�scula.
	Observad que la constante de amplitud
	const int AMPLITUD = 'a'-'A';
	es necesaria declararla como constante local en ambas funciones. Para no repetir
	este c�digo, �qu� podemos hacer? Implemente la soluci�n adoptada.
	
	d) CambiaMayusculaMinuscula, a la que se le pase como par�metro un char
	y haga lo siguiente:
	* si el argumento es una letra en may�scula, devuelve su correspondiente letra
	en min�scula,
	* si el argumento es una letra en min�scula, devuelve su correspondiente letra
	en may�scula,
	* si el argumento no es ni una letra may�scula, ni una letra may�scula, devuelve
	el car�cter pasado como argumento.*/
	

#include <iostream>
using namespace std;


enum class TipoLetra {minuscula,mayuscula,otro_caracter};

TipoLetra Capitalizacion(char una_letra){
	
	TipoLetra tipo_de_letra;
	
	if(una_letra >= 'a' && una_letra <= 'z'){
		tipo_de_letra = TipoLetra::minuscula;
		return tipo_de_letra;
	}
	if(una_letra >= 'A' && una_letra <= 'Z'){
		tipo_de_letra = TipoLetra::mayuscula;
		return tipo_de_letra;
	}
	else{
		tipo_de_letra = TipoLetra::otro_caracter;
		return tipo_de_letra;
	}
}


char Convierte_a_Mayuscula(char una_letra){
	
	const int AMPLITUD = 'a' - 'A';
	char letra_convertida;
	TipoLetra es_minuscula = Capitalizacion(una_letra);
	
	if(es_minuscula == TipoLetra::minuscula){
		letra_convertida = una_letra - AMPLITUD;
		return letra_convertida;
	}
	else
		return una_letra;
	
}	
	

char Convierte_a_Minuscula(char una_letra){
	
	const int AMPLITUD = 'a' - 'A';
	char letra_convertida;
	TipoLetra es_mayuscula = Capitalizacion(una_letra);
	
	if(es_mayuscula == TipoLetra::mayuscula){
		letra_convertida = una_letra + AMPLITUD;
		return letra_convertida;
	}
	else
		return una_letra;
}	


char CambiaMayusculaMinuscula(char una_letra){
	
	TipoLetra letra;
	char a_mayuscula,a_minuscula;
	
	letra = Capitalizacion(una_letra);
	
	if(letra == TipoLetra::mayuscula){
		a_minuscula = Convierte_a_Minuscula(una_letra);
		return a_minuscula;
	}
	if(letra == TipoLetra::minuscula){
		a_mayuscula = Convierte_a_Mayuscula(una_letra);
		return a_mayuscula;
	}
	else
		return una_letra;
}	


int main(){
	
	char letra,cambio;
	
	
	cout << "Introduce una letra --> ";
	cin >> letra;
	
	
	cambio = CambiaMayusculaMinuscula(letra);
	
	
	cout << "El caracter " << letra << " una vez convertido es: " << cambio;
	cout << endl << endl;
	
	system("pause");	
}
