#include <iostream>
#include <string>
#include <conio.h>
#include <ctype.h>
//Declaraci?n de la clases
using namespace std;

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
		string obtenerNombre();
		void mostrar();
      void asignarHijo(Alumno*);
      void mostrarNombreHijos();
      void leerNombre();
};

Alumno::Alumno(){
	_nombre = "";
	_apellido = "";
	_habilitado = false;
	numeroHijos=0;
}

//Implementaci?n de la clase Alumno       
Alumno::Alumno(string nombre, string apellido, bool habilitado)
{
	_nombre = convertirTextoAmayuscula(nombre);
	_apellido = apellido;
	_habilitado = habilitado;
   numeroHijos=0;
}

void Alumno::asignarHijo(Alumno *nodoHijo){
	hijos[numeroHijos] = nodoHijo;
	cout << endl<< "hijo agregado: "<< hijos[numeroHijos]<<endl;
   numeroHijos++;
}

void Alumno::mostrarNombreHijos(){
	for(int indice=0;indice<numeroHijos;indice++){
   	cout << endl << "hijo "<< indice <<": "<< hijos[indice]<<endl;
      try{
	      Alumno *actualPuntero;
         actualPuntero = hijos[indice];
         Alumno actual;
         actual= *(actualPuntero);
         cout << actualPuntero << endl;
			//Alumno alumno = (Alumno)*hijos[indice]; // Cast pointer to object
			//actual.mostrar();
      }catch (exception& e){
			cout << e.what() << '\n';
		}
   }
}

string Alumno::convertirTextoAmayuscula(string texto){
   for(int i = 0; i < texto.length(); i++)
         texto[i] = toupper(texto[i]);
	return texto;
}

void Alumno::leerNombre(){
	cout << " Ingrese el nombre ";
	cin >> _nombre;
}


void Alumno::asignarNombre(string nombre)
{
	_nombre = convertirTextoAmayuscula(nombre);
}

string Alumno::obtenerNombre()
{
	return _nombre;
}

void Alumno::mostrar()
{
	cout<<_apellido<<", "<< _nombre <<endl;
	cout<<"Habilitado "<<_habilitado<<endl;
	return;
}
