#include <iostream.h>
#include <string>
#include <conio.h>
#include "persona.cpp"


int main()
{
	Alumno padre =  Alumno("Padre","Jorge");
   Alumno hijo1 = Alumno("Hijo","Santos");
   Alumno hijo2 = Alumno("Hijo","Neill");
   padre.mostrar();
   hijo1.mostrar();
   hijo2.mostrar();
	cout<< endl <<"padre: "<< &padre;
	cout<< endl <<"hijo1: "<< &hijo1;
	cout<< endl <<"hijo2: "<< &hijo2;
   padre.asignarHijo(&hijo1);
   padre.asignarHijo(&hijo2);

   padre.mostrarNombreHijos();
   cout << endl;
	system ("pause");
	return 0;

}