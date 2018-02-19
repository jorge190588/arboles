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
   	void Insertar(int valorNodo);

   private:
    pnodo raiz;
    pnodo actual;
};

void lista::Insertar(int valorNodo) {

   raiz = new nodo(valorNodo, NULL);
   cout << "NODO, valor: " << raiz->valor << ", posicion: " << raiz << ", siguiente: " << raiz->siguiente << endl;

   pnodo anterior;
   anterior=raiz;
   pnodo hijo = new nodo(20, NULL);
   cout << "HIJO, valor: " << hijo->valor << ", posicion: " << hijo << ", siguiente: " << hijo->siguiente << endl;
   anterior->siguiente=hijo;

   cout << "NODO, valor: " << raiz->valor << ", posicion: " << raiz << ", siguiente: " << raiz->siguiente << endl;
}

int main() {
   lista Lista;
   Lista.Insertar(10);

   system("pause");
   return 0;
}
