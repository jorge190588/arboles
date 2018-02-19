// Introducción a C++, Nacho Cabanes
// Ejemplo 07.01:
// Registros (struct)
#include <iostream>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <cstring>

int main()
{
    struct persona
    {
        string nombre;
        string apellido;
        char  inicial;
        int   edad;
        float nota;
    };

    struct persona personas[5];

    cout << "size: " << (sizeof(personas)) << endl;
    cout << endl << "INGRESAR DATOS " << endl;
    for (int i = 0; i < 5 ; i++){
    	cout << "Numero " << i << ":" << endl;
    	printf("Nombre:");
      cin >> personas[i].nombre;

      cout <<  "Apellido " << personas[i].apellido ;
      getline (cin,personas[i].apellido);
    }                    

    cout << endl << "MOSTRAR DATOS" << endl;
    for (int i = 0; i < 5 ; i++){
		cout << "Registro " << (i+1) << ":";
		cout << endl << "nombre " << ": " << personas[i].nombre;
	   cout << endl << "apellido " << ": " << personas[i].apellido << endl;
	}
   cout <<endl;
    system("pause");
    return 0;
}