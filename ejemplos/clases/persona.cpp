#include <iostream.h>
#include <string>
#include <conio.h>
//Declaración de la clases

class Alumno
{
	private:
		string _nombre;
		string _apellido;
		int _calificaciones [10];
		bool _habilitado;

	public:
		Alumno(string, string, bool = true);
		void asignarNombre(string);
		string leerNombre();
		void mostrar();
};

//Implementación de la clase Alumno       
Alumno :: Alumno(string nombre, string apellido, bool habilitado)
{
	_nombre = nombre;
	_apellido = apellido;
	_habilitado = habilitado;
}

void Alumno :: asignarNombre(string nombre)
{
	_nombre = nombre;
	return;
}

string Alumno :: leerNombre()
{
	return _nombre;
}

void Alumno :: mostrar()
{
	cout<<_apellido<<", "<<_nombre<<endl;
	cout<<"Habilitado "<<_habilitado<<"\n\n"<<endl;
	return;
}

