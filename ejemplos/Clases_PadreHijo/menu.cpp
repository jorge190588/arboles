#include <iostream.h>
#include <string>
#include <conio.h>
#include <stdlib.h>
#include "persona.cpp"

int main()
{
	Alumno raiz = Alumno("Raiz","Jorge");
	Alumno nodo1 = Alumno("Nodo1","Santos");
   Alumno nodo2 = Alumno("Nodo2", "Jose");
   raiz.asignarHijo(nodo1);
   nodo1.asignarHijo(nodo2);
   raiz.mostrar();
   nodo1.mostrar();
   nodo2.mostrar();
	system ("pause");
	return 0;

}