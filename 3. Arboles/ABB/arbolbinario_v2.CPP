#include <iostream>
#include <string>
#include <conio>

/*
Autor: Jorge Santos
Fecha: 29.03.2020
Descripción: segunda versión de un arbol binario, se definen las operaciones insertar y mostrar en una clase
Rerefencias:
1. https://blog.martincruz.me/2012/11/arboles-binarios-de-busqueda-c.html
*/

class Nodo{
	private:
   	int valor;
      Nodo *izquierdo;
      Nodo *derecho;
   public:
		Nodo();
      asignarValor(int);
      obtenerValor();
      Nodo *obtenerNodoIzquierdo();
      Nodo *obtenerNodoDerecho();
};

Nodo::Nodo(){
  izquierdo=NULL;
  derecho=NULL;
};
Nodo::asignarValor(int _valor){
	//cout<<"asignar valor a nodo: "<<_valor<<"\n";
	valor=_valor;
};
Nodo::obtenerValor(){
	return valor;
};
Nodo *Nodo::obtenerNodoIzquierdo(){
	return izquierdo;
}
Nodo *Nodo::obtenerNodoDerecho(){
	return derecho;
}
class Arbol{
	private:
   	Nodo raiz;
   public:
   	Arbol();
      insertar(Nodo &nodo, int);
      Nodo *obtenerRaiz();
      void mostrar(Nodo *nodo,int);
};
Arbol::Arbol(){
	raiz=NULL;
};
Nodo *Arbol::obtenerRaiz(){
	return raiz;
};
Arbol::insertar(Nodo &nodo, int _valor){
	if (nodo==NULL){
   	Nodo nuevo;
      nuevo.asignarValor(_valor);
      nodo=nuevo;
      if (raiz==NULL){
      	raiz=&nuevo;
         cout<<"insertar como raiz "<< nuevo.obtenerValor()<<"\n";
      }

   }else{
		Nodo nodoActual = *nodo;
      if (_valor < nodoActual.obtenerValor()){
      	insertar(nodoActual.obtenerNodoIzquierdo(),_valor);
         cout<<"insertar izquierdo: "<<_valor<<"\n";
      }else{
      	insertar(nodoActual.obtenerNodoDerecho(),_valor);
         cout<<"insertar derecho: "<<_valor<<"\n";
      }

   }
};

void Arbol::mostrar(Nodo *nodo, int indice=1){
	if(nodo==NULL)  return;
   Nodo nodoActual = *nodo;
   mostrar( nodoActual.obtenerNodoDerecho(), indice+1);
   for(int i=0; i<indice; i++)	cout<<"   ";
   cout<< nodoActual.obtenerValor() <<endl;
   mostrar( nodoActual.obtenerNodoIzquierdo(), indice+1);
};

void main(){
	Arbol arbol;
   arbol.insertar(arbol.obtenerRaiz(),10);
   arbol.insertar(arbol.obtenerRaiz(),20);
   arbol.mostrar( arbol.obtenerRaiz());
   
	system("pause");
};