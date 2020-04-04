#include <iostream.h>
#include <string>
#include <conio.h>

/*
Autor: Jorge Santos
Fecha: 29.03.2020
Descripcion: uso de punteros
Referencias:
1. https://www.programarya.com/Cursos/C++/Estructuras-de-Datos/Punteros
*/

void ejemploPuntero1(){
	cout<<endl<<"Ejemplo 1"<<endl;
	//Crear una variable de tipo intero
	int edad;

   //Crear un apuntador a la posicion en memoria de la variable edad
   int *edadApuntador = &edad;

	// asignar un valor a la posicion de memoria
   *edadApuntador=20;

   cout<<"edad "<< edad<<endl;
   cout<<"*edad puntero "<< *edadApuntador <<endl;
   cout<<"edad puntero "<< edadApuntador <<endl;

}

void ejemploPuntero2()
{
	cout<<endl<<"Ejemplo 2"<<endl;

   //Crear un apuntador e inicializarlo
   int *edadApuntador = NULL;

	//Crear una variable de tipo intero
	int edad;

   //Crear un apuntador a la posicion en memoria de la variable edad
   edadApuntador = &edad;

	// asignar un valor a la posicion de memoria
   *edadApuntador=20;

   cout<<"edad "<< edad<<endl;
   cout<<"*edad puntero "<< *edadApuntador <<endl;
   cout<<"edad puntero "<< edadApuntador <<endl;

}

int main() {
	ejemploPuntero1();
   ejemploPuntero2();
   system("pause");
return 0;
}



