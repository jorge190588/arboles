#include <iostream.h>
#include <string>
#include <conio.h>
#include "persona.cpp"


int main()
{
	Alumno alumno_1 = Alumno("Padre","Jorge");
   alumno_1.mostrar();

   Alumno alumno_2 = Alumno("Hijo","Santos");
   alumno_1.asignarHijo(alumno_2);
   alumno_1.mostrarNombreHijo();

	system ("pause");
	return 0;

}