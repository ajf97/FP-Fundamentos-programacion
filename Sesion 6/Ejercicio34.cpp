/*Calcular mediante un programa en C++ el combinatorio con n, m valores
enteros. No pueden usarse las funciones de la biblioteca cmath.
El combinatorio de n sobre m (con n  m) es un número entero*/

#include <iostream>
using namespace std;


int main(){
	
	int m,n,nm;
	int long m_factorial,n_factorial,nm_factorial;
	int long combinatorio;
	
	
	
	do{
		
		cout << "\Introduce un entero (n) --> ";
		cin >> n;
		cout << "Introduce un entero (m) --> ";
		cin >> m;
	}while((n < 0 && m < 0) || n < m);
	
	
	n_factorial = 1;
	m_factorial = 1;
	nm_factorial = 1;
	nm = n - m;
	
	
	for(n; n >= 1; n--){                        
		
		n_factorial = n_factorial * n;
	}
	
	for(m; m >= 1; m--){
		
		m_factorial = m_factorial * m;
	}
	
	for (nm; nm >= 1; nm--){
		
		nm_factorial = nm_factorial * nm;
	}
	
	
	combinatorio = n_factorial / (m_factorial * nm_factorial);
	
	
	cout << "\nEl combinatorio de los valores introducidos vale: " << combinatorio << endl;
	
	
	
	system("pause");
	
	
}
