#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;

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
   	void ElegirOpciones();
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
	
	cout<<endl<<"\tллллллллллллллллллллллллллллллллллллллллллллллллллллллллллллллллл\n";
	cout<<"\tлл                    Ingreso de Valores                       лл"<<endl;
	cout<<"\tллллллллллллллллллллллллллллллллллллллллллллллллллллллллллллллллл\n"<<endl<<endl;

	cout<<"Inserte el valor del nodo: ";
   	cin>>valorNodo;
   	pnodo hijo;
 	 if(raiz == NULL)
 	 {
    raiz = new nodo(valorNodo,NULL);
    actual=raiz;
    
	  }else{	
  	hijo= new nodo(valorNodo, NULL);
  	actual->siguiente=hijo;
	actual=hijo;
 	 }
}
	 
void lista::Mostrar(){
	  	system("cls");
	  	
		nodo *puntero;
		puntero=raiz;
		
		cout<<endl<<"\tллллллллллллллллллллллллллллллллллллллллллллллллллллллллллллллллл\n";
		cout<<"\tлл                 Lista de Nodos Ingresados                   лл"<<endl;
		cout<<"\tллллллллллллллллллллллллллллллллллллллллллллллллллллллллллллллллл\n"<<endl<<endl;
		
		while(puntero){
			cout << "NODO; valor: " << puntero->valor<<"->" <<" , posicion: "<<puntero<<" , siguiente:  "<<puntero->siguiente  << endl;
			puntero=puntero->siguiente;
		}
		
		cout << endl;
		system("Pause");
  	    system("cls");	
}

void lista::ElegirOpciones(){
	system("cls");
	cout<<"\t*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*\n";
	cout<<"\t*.                         Menu                                .*"<<endl;
	cout<<"\t*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*\n"<<endl;
  	cout<<"1. Agregar Nodo"<<endl;
  	cout<<"2. Mostrar Nodos"<<endl;
   	cout<<"3. Salir"<<endl;
}

int main() {
   	system("title TAREA NODOS");
    system("color 1f");
    int opcion;
    lista Lista;
    Lista.Iniciar();
    do{
   	Lista.ElegirOpciones();
    cout<<"Ingrese la opci\xA2n: ";
    cin>>opcion;
    switch (opcion){
   		case 1:
   			system("cls");
   			Lista.Insertar();
   			break;
   		case 2:
 
   			Lista.Mostrar();
   			break;
			
	}
	
}while(opcion!=3);
  	system("cls");
	cout<<"Saliendo..."<<endl;
    system("pause");
    return 0;

}
