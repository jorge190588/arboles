#include <iostream.h>
#include <string>
#include <conio.h>
#include <ctype.h>
//Declaración de la clases
using namespace std;

class Alumno
{
	private:
   	string convertirTextoAmayuscula(string);
		string nombre;
		string apellido;
		int calificaciones[10];
		bool habilitado;
      Alumno *hijo;// declarar un puntero de tipo alumno
      Alumno *direccionMemoria;

	public:
   	Alumno(string, string, bool = true);
		void asignarNombre(string);
		string leerNombre();
		void mostrar();
      void asignarHijo(Alumno*);
      void mostrarNombreHijo();
};

void Alumno::mostrarNombreHijo(){
	Alumno nodoHijo = *hijo;
	cout << endl << "HIJO: "<< endl;
   nodoHijo.mostrar();
}

void Alumno::asignarHijo(Alumno *nodoHijo){
	hijo = nodoHijo;
}

string Alumno::convertirTextoAmayuscula(string texto){
   for(int i = 0; i < texto.length(); i++)
         texto[i] = toupper(texto[i]);
	return texto;
}

//Implementación de la clase Alumno       
Alumno::Alumno(string _nombre, string _apellido, bool _habilitado){
	nombre = convertirTextoAmayuscula(_nombre);
	apellido = _apellido;
	habilitado = _habilitado;
   direccionMemoria=this;
}

void Alumno::asignarNombre(string _nombre){
	nombre = convertirTextoAmayuscula(_nombre);
}

string Alumno::leerNombre(){
	return nombre;
}

void Alumno::mostrar(){
	cout << "Memoria #: "<< direccionMemoria <<endl;
	cout << "Nombre: " << nombre <<", apellido> "<< apellido;
	cout << ", habilitado: "<< habilitado<<endl<<endl;
}
