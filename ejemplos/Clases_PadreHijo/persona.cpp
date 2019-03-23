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
		string _nombre;
		string _apellido;
		int _calificaciones[10];
		bool _habilitado;
      Alumno *hijo;// declarar un puntero de tipo alumno

	public:
   	Alumno(string, string, bool = true);
		void asignarNombre(string);
		string leerNombre();
		void mostrar();
      void asignarHijo(Alumno);
      void mostrarNombreHijo();
};

void Alumno::mostrarNombreHijo(){
	Alumno actual = *hijo;
	cout << endl << "hijo ";
   actual.mostrar();
}

void Alumno::asignarHijo(Alumno nodoHijo){
	cout << "hijo> "<< &nodoHijo;
	hijo = &nodoHijo;
}

string Alumno::convertirTextoAmayuscula(string texto){
   for(int i = 0; i < texto.length(); i++)
         texto[i] = toupper(texto[i]);
	return texto;
}

//Implementación de la clase Alumno       
Alumno::Alumno(string nombre, string apellido, bool habilitado)
{
	_nombre = convertirTextoAmayuscula(nombre);
	_apellido = apellido;
	_habilitado = habilitado;
}

void Alumno::asignarNombre(string nombre)
{
	_nombre = convertirTextoAmayuscula(nombre);
}

string Alumno::leerNombre()
{
	return _nombre;
}

void Alumno::mostrar()
{
	cout<<_apellido<<", "<< _nombre <<endl;
	cout<<"Habilitado "<<_habilitado<<"\n\n"<<endl;
	return;
}
