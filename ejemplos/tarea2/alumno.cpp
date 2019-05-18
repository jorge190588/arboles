#include <iostream>
#include <string>
#include <conio.h>
#include <ctype.h>

// Tarea # 2 programacion arboles.
using namespace std;

class Alumno
{
	private:
		string Nombre;
		int codigo;
		Alumno *DireccionMemoria;
		
	public:
		Alumno(string, int);
		void asignarNombre();
		string leerNombre();
		void asignarcodigo();
		int leercodigo();
		void Mostrar();		
};

Alumno::Alumno(string, int){
	Nombre=Nombre;
	codigo=codigo;
	DireccionMemoria=this;
	
}


void Alumno::asignarNombre(){
	cout<<"Ingrese Nombre: "<<endl;
	cin>>Nombre;
}

 void Alumno::asignarcodigo(){
 	cout<<"Ingrese codigo: "<<endl;
	cin>>codigo;
 }
 
void Alumno::Mostrar(){
	cout << "Memoria #: "<< DireccionMemoria <<endl;
	cout << "Nombre: " << Nombre <<",codigo"<< codigo ;
	
}



