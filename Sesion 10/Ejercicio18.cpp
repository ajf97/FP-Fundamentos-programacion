////////////////////////////////////////////////////////////////////////////
//
// Fundamentos de Programación
// ETS Informática y Telecomunicaciones
// Universidad de Granada
// Departamento de Ciencias de la Computación e Inteligencia Artificial
// Autor: Alejandro Jerónimo Fuentes
//
////////////////////////////////////////////////////////////////////////////

/*Definir la clase AlumnoFP, que almacene el nombre, el primer apellido, el DNI del
alumno y cada una de las partes consideradas en la evaluación de la asignatura: teoría,
parcial_pract1, parcial_pract2, participación_clase. La escala utilizada para evaluar
cada parte es de 0 a 10.

	* Construir los constructores necesarios para poder asignar valores a los miembros
	de la clase.
	
	* Construir un método que calcule la nota final del alumno. Para ello se debe de
	tener en cuenta los porcentajes de las distintas partes consideradas: 70% teoría,
	5% parcial 1, 15% parcial 2 y 10% participación.
	
	* Construir un programa que lea los datos del alumno y en caso de haber obtenido
	una nota inferior a 5 en alguna de las partes que indique la nota obtenida en dicha
	parte.

*/

#include <iostream>
#include <string>

using namespace std;

class AlumnoFP{
	
	private:
		
		string nombre;
		string apellido;
		string dni;
		float teoria = 0.0;
		float parcial_pract1 = 0.0;
		float parcial_pract2 = 0.0;
		float participacion_clase = 0.0;
		
		
		bool EsCorrectaTeoria(float teoria){
			if (teoria >= 0 && teoria <= 10)
				return true;
			else
				return false;
	   }
	   
	   bool EsCorrectaParcial1(float parcial_pract1){
	   	if (parcial_pract1 >= 0 && parcial_pract1 <= 10)
	   		return true;
	   	else
	   		return false;
		}
			
		bool EsCorrectaParcial2(float parcial_pract2){
			if (parcial_pract2 >= 0 && parcial_pract2 <= 10)
				return true;
			else
				return false;
		}
	
		bool EsCorrectaParticipacion(float participacion_clase){
			if (participacion_clase >= 0 && participacion_clase <= 10)
				return true;
			else
				return false;
		}
	
	public:
		
		AlumnoFP(string el_nombre, string el_apellido, string el_dni , float nota_teoria, float nota_pract1 , float nota_pract2, float nota_participacion){
			SetNombreApellidoDNI(el_nombre,el_apellido,el_dni);
			if (EsCorrectaTeoria(nota_teoria) && EsCorrectaParcial1(nota_pract1) && EsCorrectaParcial2(nota_pract2) && EsCorrectaParticipacion(nota_participacion)){
				SetTeoria(nota_teoria);
				SetPract1(nota_pract1);
				SetPract2(nota_pract2);
				SetParticipacion(nota_participacion);			
			}
		}
		
		void SetNombreApellidoDNI(string el_nombre, string el_apellido, string el_dni){
			nombre = el_nombre;
			apellido = el_apellido;
			dni = el_dni;
		}
	
		void SetTeoria(float nota_teoria){
			teoria = nota_teoria;
		}
	
		void SetPract1(float nota_pract1){
			parcial_pract1 = nota_pract1;
		}
	
		void SetPract2(float nota_pract2){
			parcial_pract2 = nota_pract2;
		}
	
		void SetParticipacion(float nota_participacion){
			participacion_clase = nota_participacion;
		}
	
		string GetNombre(){
			return nombre;
		}
	
		string GetApellido(){
			return apellido;
		}
	
		string GetDNI(){
			return dni;
		}
		
		float GetTeoria(){
			return teoria;
		}
	
		float GetPract1(){
			return parcial_pract1;
		}
		
		float GetPract2(){
			return parcial_pract2;
		}
		
		
		float NotaFinal(){
			const float PORCENTAJE_TEORIA = 0.7;
			const float PORCENTAJE_PARC1 = 0.05;
			const float PORCENTAJE_PARC2 = 0.15;
			const float PORCENTAJE_PARTI = 0.1;
			float nota;
			
			nota = PORCENTAJE_TEORIA * teoria + PORCENTAJE_PARC1 * parcial_pract1 + PORCENTAJE_PARC2 * parcial_pract2 + PORCENTAJE_PARTI * participacion_clase;
			
			return nota;
		}
	};


int main(){
	
	
	float nota_alumno,teoria,parcial1,parcial2,participa;
	string el_nombre, el_apellido , el_dni;
	
	
	cout << "Introduce el nombre del alumno ---> ";
	cin >> el_nombre;
	cout << "Introduce el apellido del alumno ---> ";
	cin >> el_apellido;
	cout << "Introduce el DNI del alumno ---> ";
	cin >> el_dni;
	cout << "\nIntroduce la nota del examen teorico: ";
	cin >> teoria;
	cout << "Introduce la nota del primer parcial: ";
	cin >> parcial1;
	cout << "Introduce la nota del segundo parcial: ";
	cin >> parcial2;
	cout << "Introduce la participacion del alumno: ";
	cin >> participa;
	
	
	AlumnoFP un_alumno(el_nombre,el_apellido,el_dni,teoria,parcial1,parcial2,participa);
	nota_alumno = un_alumno.NotaFinal();
	
	cout << "\nLa nota final del alumno es ---> " << nota_alumno;
}

