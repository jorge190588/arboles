#include <iostream.h>
#include <string>
#include <conio.h>
#include <ctype.h>
//Declaración de la clases

class Alumno
{
	private:
   	string convertirTextoAmayuscula(string);
		string _nombre;
		string _apellido;
		int _calificaciones[10];
		bool _habilitado;
      Alumno *hijos[5];
      int numeroHijos;

	public:
      Alumno();
   	Alumno(string, string, bool = true);
		void asignarNombre(string);
		string leerNombre();
		void mostrar();
      void asignarHijo(Alumno*);
      void mostrarNombreHijos();
};

Alumno::Alumno(){
	numeroHijos=0;
}

//Implementación de la clase Alumno       
Alumno::Alumno(string nombre, string apellido, bool habilitado)
{
	_nombre = convertirTextoAmayuscula(nombre);
	_apellido = apellido;
	_habilitado = habilitado;
   numeroHijos=0;
}

void Alumno::asignarHijo(Alumno* nodoHijo){
	hijos[numeroHijos] = nodoHijo;
	cout << endl<< "hijo agregado: "<< hijos[numeroHijos];
   numeroHijos++;
}

void Alumno::mostrarNombreHijos(){
	Alumno actual;
	for(int indice=0;indice<numeroHijos;indice++){
   	cout << endl << "hijo "<< indice <<": "<< hijos[indice]<<endl;
		actual = *hijos[indice];
	   actual.mostrar();
   }
}

string Alumno::convertirTextoAmayuscula(string texto){
   for(int i = 0; i < texto.length(); i++)
         texto[i] = toupper(texto[i]);
	return texto;
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
	cout<<"Habilitado "<<_habilitado<<endl;
	return;
}
