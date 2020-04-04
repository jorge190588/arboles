#include <iostream>
#include <string>
#include <conio>

/*
Autor: Jorge Santos
Fecha: 29.03.2020
Descripcion: Este ejemplo demuestra el uso de clases y encapsulamiento
Referencias:
1. http://www.cplusplus.com/doc/tutorial/classes/
2. https://www.geeksforgeeks.org/c-classes-and-objects/
*/

class Alumno{
	private:
		string nombre;
		string apellido;
		bool   habilitado;

	public:
		Alumno();
		void asignarNombre(string);
      void asignarApellido(string);
      void asignarHabilitado(bool);
		string obtenerNombre();
      string obtenerApellido();
      bool obtenerHabilitado();
      void imprimir();
};

Alumno :: Alumno(){habilitado = true;}
void Alumno::asignarNombre(string _nombre){			nombre = _nombre; 			}
void Alumno::asignarApellido(string _apellido){		apellido = _apellido; 		}
void Alumno::asignarHabilitado(bool _habilitado){	habilitado = _habilitado; 	}

string 	Alumno::obtenerNombre(){		return nombre; 		}
string	Alumno::obtenerApellido(){		return apellido; 		}
bool 		Alumno::obtenerHabilitado(){	return habilitado; 	}

void Alumno::imprimir(){
	cout<<"Nombre: "<<nombre<<", apellido: "<<apellido<<", habilitado: "<< habilitado <<'\n';
}

void main(){
	Alumno jorge;
   jorge.asignarNombre("jorge");
   jorge.asignarApellido("Santos");
   jorge.imprimir();
	system("pause");
}




