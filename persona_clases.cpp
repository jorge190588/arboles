#include <iostream.h>
#include <string>
#include <conio.h>
//Declaración de la clases

class Alumno
{
	private:
		string nombre;
		string apellido;
		int calificaciones [10];
		bool habilitado;
	
	public:
		Alumno(string, string, bool = true);
		void set_nombre (string);
		string get_nombre();
		void mostrar_info();
};

//Implementación de la clase Alumno

Alumno :: Alumno(string nom, string ape, bool hab)
{
	nombre = nom;
	apellido = ape;
	habilitado = hab;
}

void Alumno :: set_nombre (string nom)
{
	nombre = nom;
	return;
}

string Alumno :: get_nombre ()
{
	return nombre;
}

void Alumno :: mostrar_info ()
{
	cout<<apellido<<", "<<nombre<<endl;
	cout<<"Habilitado "<<habilitado<<"\n\n"<<endl;
	return;
}


int main()
{

	Alumno alumno_1 = Alumno("Diego", "Rosales");
	Alumno alumno_2 = Alumno("Luisa", "Estrada",false);

	alumno_1.mostrar_info();
	alumno_2.mostrar_info();

	alumno_1.set_nombre("Victor");

	alumno_1.mostrar_info();

	system ("pause");
	return 0;

}
