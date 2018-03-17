#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

class nodo {
	//dESDE OTRA CLASE SE PUEDEN
   public:
    nodo(int v, nodo *sig = NULL)
    {
       valor = v;
       siguiente = sig;
    }

    //Desde otra clase/funcion no de puede acceder a los atributos o metodos privados.
   private:
    int valor;
    nodo *siguiente;

   //Una funcion externa puede acceder a los atributos privados.
   friend class lista;
};

//declarar un apuntador de clase nodo, typedef
typedef nodo *pnodo;

class lista {
   public:
   	void Insertar();
      void MostrarNodos();
      void MostrarOpcionesDelMenu();
      void Iniciar();

   private:
    pnodo raiz;
    pnodo actual;
};

void lista::Iniciar(){
	raiz=NULL;
}

void lista::Insertar() {
	int valorNodo=0;
   pnodo anterior;

	cout<<endl<<"Valor del nodo: ";
	scanf( "%d", &valorNodo);

	if (raiz == NULL){
	   raiz = new nodo(valorNodo, NULL);
   	cout << "NODO, valor: " << raiz->valor << ", posicion: " << raiz << ", siguiente: " << raiz->siguiente << endl;
      anterior=raiz;
   }else{

   	pnodo hijo = new nodo(20, anterior);
   	cout << "HIJO, valor: " << hijo->valor << ", posicion: " << hijo << ", siguiente: " << hijo->siguiente << endl;
      anterior = hijo;
   }
}

void lista::MostrarNodos(){
	nodo *aux;

   aux = raiz;
   while(aux) {
      cout << aux->valor << "-> ";
      aux = aux->siguiente;
   }
   cout << endl;
   system("pause");
}

void lista::MostrarOpcionesDelMenu(){
	system("cls");
  	cout<<"Programa para crear nodos en un arbol v.2"<<endl<<endl;
   cout << "-------   MENU   --------" << endl ;
	cout<<endl<<"1. Agregar un nodo ";
 	cout<<endl<<"2. Mostrar nodos ";
  	cout<<endl<<"3. Salir ";
}

int main() {
   lista Lista;
   int opcion;
   Lista.Iniciar();

   do
   {
   	Lista.MostrarOpcionesDelMenu();
      cout<<endl<<"Ingrese una opcion: ";
      scanf( "%d", &opcion );

    	switch ( opcion )
      {
      	case 1:
	         Lista.Insertar();
         break;
			case 2:
	         Lista.MostrarNodos();
         break;

      }
   }while ( opcion != 3 );


   system("pause");
   return 0;
}
