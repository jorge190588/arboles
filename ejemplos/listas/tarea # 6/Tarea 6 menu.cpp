#include <iostream>
#include <string>
#include <conio.h>
#include "tarea # 6.cpp"
using namespace std;

Alumno raiz = Alumno("",0);
void crearRaiz();
void crearHijo();
void mostrarOpciones();

int main(){
	int opcion;
	Alumno alumno=Alumno()
	do{
		mostrarOpciones();
		cout<<"Opcion";
		cin>>opcion;
		switch(opcion){
			case 1:
				cout<<"Ingresar datos: "<<endl;
				cout<<"Ingrese Nombre: "<<endl;
				alumno.asignarNombre(_nombre);
				
				cout<<"Ingrese acodigo: "<<endl;
				asignarcodigo();
				cout<<"Ingrese acodigo: "<<endl;
				asignarcodigo();
				break;
				
				case 2:
					
					

		}
	}
}

void mostrarOpciones()
{
	cout<<" *********MENU*******"<<endl;
	cout<<"1. *****INSERTAR DATOS***"<<endl;
	cout<<"2. ******MODIFICAR :****"<<endl;
	cout<<"3. ******ELIMINAR :****"<<endl;
	cout<<"4. *******MOSTRAR DATOS: ****"<<endl;
	cout<<"4. *******SALIR********"<<endl;		
}
void crearHijo(){
	cout << "Crear hijo" << endl;
	Alumno hijo = Alumno();
	hijo.asignarNombre();
	raiz.asignarHijo(&hijo);
}

void crearRaiz(){
	cout << "Crear raiz" << endl;
	raiz.asignarNombre();
}
