#include <iostream.h>
#include <string>
#include <conio.h>
#include "persona.cpp"

int main()
{
	Alumno alumno_1 = Alumno("Diego", "Rosales");
	Alumno alumno_2 = Alumno("Luisa", "Estrada",false);

	alumno_1.mostrar();
	alumno_2.mostrar();
	alumno_1.asignarNombre("Victor");
	alumno_1.mostrar();

	system ("pause");
	return 0;

}