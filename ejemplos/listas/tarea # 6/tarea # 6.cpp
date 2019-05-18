#include <iostream>
#include <string>
#include <conio.h>
#include <ctype.h>

using namespace std;

class Alumno{
	private:
		string nombre;
		int codigo;
		
		Alumno *hijo;
		Alumno *direccionMemoria;
		Alumno *hijos[5];
      	int numeroHijos;
		
	public:
		Alumno ();
		Alumno(string, int );
		void asignarNombre(string);
		void asignarCodigo(int);
		void asignarhijo(Alumno*);
		void mostrarNombrehijo();
		void mostrar();
		void asignarHijo(Alumno* nodoHijo);
	
};


Alumno::Alumno(string, int){
	nombre=nombre;
	codigo=codigo;
	direccionMemoria=this;
	numeroHijos=0;

}

void Alumno::asignarNombre(string _nombre){
	cout<<" Ingrese nombre:"<<endl;
	cin>>nombre;
}
 void Alumno::asignarCodigo(int _codigo){
	cout<<" Digite un codigo:"<<endl;
	cin>>codigo;	
}
void Alumno::mostrarNombrehijo(){
	Alumno nodoHijo = *hijo;
	cout << endl << "HIJO: "<< endl;
   nodoHijo.mostrar();
 }
 void Alumno::asignarhijo(Alumno *nodoHijo){
	hijo = nodoHijo;
}

void Alumno::mostrar(){
	cout<<"Direccion de memoria es: "<<direccionMemoria<<endl;
	cout<<" nombre  es: "<<nombre<<endl;
	cout<<" codigo es: "<<codigo<<endl;
	cout<<endl;
	mostrarNombrehijo();
}
 void Alumno::asignarHijo(Alumno* nodoHijo){
	hijos[numeroHijos] = nodoHijo;
	cout << endl<< "hijo agregado: "<< hijos[numeroHijos];
   numeroHijos++;
}
