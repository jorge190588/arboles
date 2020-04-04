#include <iostream>
#include <string>
#include <conio>

/*
Autor: Jorge Santos
Fecha: 29.03.2020
Descripción: primera versión de un arbol binario, se definen las operaciones insertar y mostrar.
Rerefencias:
1. https://blog.martincruz.me/2012/11/arboles-binarios-de-busqueda-c.html
*/

struct nodo{
     int valor;
     struct nodo *izq, *der;
};

typedef struct nodo *Arbol;

Arbol crearNodo(int valor){
     Arbol nuevoNodo = new(struct nodo);
     nuevoNodo->valor = valor;
     nuevoNodo->izq = NULL;
     nuevoNodo->der = NULL;
     return nuevoNodo;
}

void insertar(Arbol &arbol, int valor){
     if(arbol==NULL)
			arbol = crearNodo(valor);
     else if(valor < arbol->valor)
          insertar(arbol->izq, valor);
     else if(valor > arbol->valor)
          insertar(arbol->der, valor);
}

void verArbol(Arbol arbol, int n){
     if(arbol==NULL)	return;
     verArbol(arbol->der, n+1);
     for(int i=0; i<n; i++)	cout<<"   ";
     cout<< arbol->valor <<endl;
     verArbol(arbol->izq, n+1);
}


int main(){
	Arbol arbol = NULL;   // creado Arbol
	insertar(arbol,5);
   insertar(arbol,4);
	insertar(arbol,3);
	insertar(arbol,2);
   insertar(arbol,6);
   insertar(arbol,7);
   insertar(arbol,10);
   insertar(arbol,9);
   insertar(arbol,8);
	insertar(arbol,11);
	verArbol(arbol,10);
   system("pause");
	return 0;
}
