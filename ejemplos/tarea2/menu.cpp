#include <iostream>
#include <string>
#include <conio.h>
#include "persona.cpp"
using namespace std;

Alumno raiz = Alumno("raiz","raiz");
void crearRaiz();
void crearHijo();
void mostrarOpciones();

int main()
{
	int opcion;
	do{
		mostrarOpciones();
		cout<<"Opción: ";
		cin>>opcion;
		switch(opcion){
			case 1:
         	if (raiz.obtenerNombre().length()>0){
					crearHijo();
				}else{
					crearRaiz();
				}
				break;
			case 2:
				raiz.mostrar();
				system ("pause");
				break;
			case 3:
				cout << "entro a la opcion 3"<< endl;
			 	raiz.mostrarNombreHijos();
			 	system ("pause");
			 	break; 
			default:
				cout << "default";
		}
		system("cls");	
	}while(opcion !=4);

	system ("pause");
	return 0;
}


void mostrarOpciones()
{
	cout<<" *********MENU*******"<<endl;
	cout<<"1. *****INSERTAR DATOS***"<<endl;
	cout<<"2. ******MOSTRAR RAIZ:****"<<endl;
	cout<<"3. ******MOSTRAR HIJOS DE RAIZ:****"<<endl;
	cout<<"4. *******SALIR********"<<endl<<endl;
}

void crearHijo(){
	cout << "Crear hijo" << endl;
	Alumno hijo;
	hijo.leerNombre();
	raiz.asignarHijo(&hijo);
	hijo.obtenerNombre();
   system("pause");
}

void crearRaiz(){
	cout << "Crear raiz" << endl;
	raiz.leerNombre();
   system("pause");
}

