#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main(void)
{
	 //declarar un tipo de datos
    int notas;
    notas=100;
    cout << "valor notas " << notas << endl;


    typedef int nuevotipo_int;
    nuevotipo_int nota_int;
    nota_int=100;
    cout << "valor nota_int " << nota_int << endl;

    //struct type
    struct alumno
	 {
   	int id;
	   int nota;
   	char nombre;
	 };
    //crear un tipo de dato estructura nombre
    struct alumno nuevo_alumno;
    nuevo_alumno.nota=100;
    cout << "nuevo_alumno.nota " << nuevo_alumno.nota << endl;

    //crear un tipo de dato
    typedef struct alumno alumno_struct;

	 //crear una variable de tipo struct
    alumno_struct nuevo_alumno2;
    nuevo_alumno2.nota=200;
    cout << "nuevo_alumno2.nota " << nuevo_alumno2.nota << endl;

    
    system("pause");
    return 0;
}