#include <iostream>
#include <string>
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

class nodo {
   public:
    nodo(int nuevo, nodo *sig = NULL)
    {
       valor = nuevo;
       siguiente = sig;
    }

   private:
    int valor;
    nodo *siguiente;

   friend class lista;
};

typedef nodo *pnodo;

class lista {

    public:
   	void Insertar();
   	void Mostrar();
		void Buscar();
      pnodo LeerNodo(int valor, pnodo nodoActual);
      void MostrarNodo(pnodo nodoActual);
      void Configuracion();
      void Menu();
      void OpcionesDeMenu();
      void TituloDeOpcion(string opcion);

   private:
    pnodo raiz;
    pnodo actual;
};



void lista::MostrarNodo(pnodo nodoActual){
	if (nodoActual != NULL)
   	cout << "NODO; valor: " << nodoActual->valor<<"->" <<" , posicion: "<< nodoActual <<" , siguiente:  "<<nodoActual->siguiente  << endl;
}

void lista::Buscar(){
	TituloDeOpcion("Buscar un nodo");
   int valorNodo=0;
	cout<<"Valor del nodo a buscar: ";
   cin>>valorNodo;

   pnodo nodoBuscado;
	nodoBuscado = LeerNodo(valorNodo,raiz);
   if (nodoBuscado ==NULL)
		cout << "Nodo no encontrado " << endl;
   else
	   MostrarNodo(nodoBuscado);

	system("pause");
}

pnodo lista::LeerNodo(int valor, pnodo nodoActual){

	if(nodoActual == NULL)
		return nodoActual;

	else if(nodoActual->valor == valor)
   	return nodoActual;

	else if(LeerNodo(valor, nodoActual->siguiente) != NULL)
   	return LeerNodo(valor, nodoActual->siguiente);

  return NULL;
}

void lista::Insertar() {
	TituloDeOpcion("Insertar un nodo");
	int valorNodo=0;
	cout<<"Inserte el valor del nodo: ";
   cin>>valorNodo;
 	if(raiz == NULL){
		raiz = new nodo(valorNodo,NULL);
    	actual=raiz;
   }else{
      pnodo hijo;
  		hijo= new nodo(valorNodo, NULL);
	  	actual->siguiente=hijo;
		actual=hijo;
   }
}

void lista::Mostrar(){
	TituloDeOpcion("Mostar nodos");

	nodo *puntero;
	puntero=raiz;

	while(puntero){
		MostrarNodo(puntero);
		puntero=puntero->siguiente;
   }
	system("Pause");
}

void lista::TituloDeOpcion(string opcion){
	system("cls");
	cout<<endl<<"\tллллллллллллллллллллллллллллллллллллллллллллллллллллллллллллллллл\n";
	cout<<"\tлл                    " << opcion << "                       лл"<<endl;
	cout<<"\tллллллллллллллллллллллллллллллллллллллллллллллллллллллллллллллллл\n"<<endl<<endl;
}

void lista::OpcionesDeMenu(){
	system("cls");
	cout<<"\t*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*\n";
	cout<<"\t*.                         Menu                                .*"<<endl;
	cout<<"\t*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*\n"<<endl;
  	cout<<"1. Agregar Nodo"<<endl;
  	cout<<"2. Mostrar Nodos"<<endl;
  	cout<<"3. Buscar Nodo"<<endl;
   cout<<"4. Salir"<<endl;
}

void lista::Configuracion(){
	system("title TAREA NODOS");
	system("color 1f");
	raiz=NULL;
}

void lista::Menu(){
	int opcion;
   do{
   	OpcionesDeMenu();
		cout<<"Ingrese la opci\xA2n: ";
    	cin>>opcion;
    	switch (opcion){
      	case 1:
   			Insertar();
   			break;
   		case 2:
   			Mostrar();
   			break;
   		case 3:
   			Buscar();
   			break;
		}
	}while(opcion!=4);
	system("cls");
	cout<<"Saliendo..."<<endl;
   system("pause");
}

int main() {
	lista Lista;
	Lista.Configuracion();
   Lista.Menu();
   return 0;
}
