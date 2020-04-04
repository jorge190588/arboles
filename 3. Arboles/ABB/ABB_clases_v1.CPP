#include <iostream>
#include <string>
#include <conio>
class Nodo {
   private:
	   Nodo *izq;
   	Nodo *der;
		int valor;
   public:
   	Nodo();
      AsignarValor(int);
      int ObtenerValor();
      AsignarNodoIzq(Nodo *izq);
      AsignarNodoDer(Nodo *der);
      Nodo *ObtenerNodoIzq();
      Nodo *ObtenerNodoDer();
};
Nodo::Nodo(){
	der=NULL;
   izq=NULL;
};
Nodo::AsignarValor(int _valor){
	valor=_valor;
};
int Nodo::ObtenerValor(){
	return valor;
};
Nodo::AsignarNodoIzq(Nodo *_izq){
	izq=_izq;
};
Nodo::AsignarNodoDer(Nodo *_der){
	der=_der;
};
Nodo *Nodo::ObtenerNodoIzq(){
	return izq;
};
Nodo *Nodo::ObtenerNodoDer(){
	return der;
};
typedef class Nodo *Arbol;
class ABB {
	private:
		Arbol arbol;
   public:
   	ABB();
      Insertar(int);
      InsertarNodo(Arbol &arbol, int);
      Arbol CrearNodo(int);
      Mostrar();
      int MostrarNodos(Arbol,int);
      Arbol ObtenerArbol();
};
ABB::ABB(){
	arbol=NULL;
};
Arbol ABB::ObtenerArbol(){return arbol;};
ABB::Insertar(int valor){
	InsertarNodo(arbol,valor);
};
ABB::InsertarNodo(Arbol &nodo, int valor){
	if (nodo==NULL){
      nodo = CrearNodo(valor);
   }else if (valor <nodo->ObtenerValor()){
   	if (nodo->ObtenerNodoIzq()==NULL){
   		Arbol nuevoNodo= CrearNodo(valor);
         nodo->AsignarNodoIzq(nuevoNodo);
      }else{
	      InsertarNodo(nodo->ObtenerNodoIzq(),valor);
      }
   }else{
   	if (nodo->ObtenerNodoDer()==NULL){
   		Arbol nuevoNodo = CrearNodo(valor);
         nodo->AsignarNodoDer(nuevoNodo);
      }else{
	      InsertarNodo(nodo->ObtenerNodoDer(),valor);
      }

   }
};
Arbol ABB::CrearNodo(int valor){
	Arbol nuevoNodo=new (Nodo);
   //Arbol nuevoNodo;
   nuevoNodo->AsignarValor(valor);
   nuevoNodo->AsignarNodoDer(NULL);
   nuevoNodo->AsignarNodoIzq(NULL);
   /*cout<<"Nuevo #"<<&nuevoNodo<<"\n";
   cout<<"Nuevo nodo Izq: "<<nuevoNodo->ObtenerNodoIzq()<<"\n";
   cout<<"Nuevo nodo Der: "<<nuevoNodo->ObtenerNodoDer()<<"\n";
   cout<<"Nuevo nodo v: "<<nuevoNodo->ObtenerValor()<<"\n";
   */
	return nuevoNodo;
};
int ABB::MostrarNodos(Arbol arbol, int n){
     if(arbol==NULL)	return 0;
     MostrarNodos(arbol->ObtenerNodoDer(), n+1);
     for(int i=0; i<n; i++)	cout<<"   ";
     cout<< arbol->ObtenerValor() <<endl;
     MostrarNodos(arbol->ObtenerNodoIzq(), n+1);
}
ABB::Mostrar(){
	MostrarNodos(arbol,0);
};
int main(){
	ABB abb;
	abb.Insertar(10);
 	abb.Insertar(5);
 	abb.Insertar(15);
 	abb.Insertar(20);
  	abb.Insertar(3);
  	abb.Insertar(20);
  	abb.Insertar(100);
  	abb.Insertar(6);
   abb.Mostrar();
	system("pause");
	return 0;
}
//* devuelve el contenido de la dirección que lo contiene