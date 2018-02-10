#define LONGITUD_NODO 12
#define LONGITUD_HIJO 18
using namespace std;



Arbol::Arbol()
{
  this->raiz = NULL;
}

void Arbol::agregarNodo()
{
  int valor_padre = 0; 
  int valor = 0; 
  Nodo *codigo_padre = NULL; 
  Nodo *codigo_nodo = NULL; 
  bool direccion; 
  bool ocupado; 

  if(raiz != NULL)
  {
    cout << "Ingrese el valor del nodo padre: ";
    cin >> valor_padre;

    codigo_padre = getNodo(valor_padre, raiz);

    if(codigo_padre != NULL)
    {
      cout << endl << "izquierda (0) o Derecha(1): ";
      cin >> direccion;

      ocupado = (codigo_padre->getDerecha() && direccion) || (codigo_padre->getIzquierda() && !direccion);
      if(ocupado)
      {
        cout << endl << "La direccion no esta dispobible "; getch();
        return;
      }
    }
    else
    {
      cout << endl << "No se ha encontrado el nodo...";
    }
  }

  cout << endl << "Ingrese el valor ";
      (raiz != NULL) ? cout << "del hijo: " : cout << "de la raiz: ";
  cin >> valor;

  if(raiz != NULL)
  {
    codigo_nodo = getNodo(valor, raiz);
    if(codigo_nodo)
      cout << endl << "Ya existe un nodo con este valor...";
    else
      insertarHijo(valor, codigo_padre, direccion);
  }
  else
    insertarRaiz(valor);

  getch();
}

void Arbol::mostrarPorWhile()
{
 

  // Aún no funciona
  cout << endl << "Opcion no disponible..."; getch();
}

void Arbol::mostrarPorRecursion()
{
  if(raiz == NULL)
  {
    cout << endl << "El arbol no tiene nodos...";
  }
  else
  {
  encabezadoArbol();
  muestreoRecursivo(raiz);
  cout << endl << "Presione cualquier tecla para continuar...";
  }

  getch();
}

void Arbol::buscarNodo()
{
  int valor;
  Nodo *codigo_nodo = NULL;

  if(raiz != NULL)
  {
    cout << "Ingrese el valor del nodo: ";
    cin >> valor;

    cout << endl;

    codigo_nodo = getNodo(valor, raiz);
    if(codigo_nodo != NULL)
    {
      encabezadoArbolIndividual();
      mostrarDatosIndividual(codigo_nodo);
      mostrarIdentificacion(codigo_nodo);
      cout << endl << "Presione cualquier tecla para continuar...";
    }
    else
      cout << "Este nodo no es parte del arbol...";
  }
  else
    cout << "El arbol se encuentra vacio...";
  getch();
}

void Arbol::eliminarNodo()
{
  int valor;
  Nodo *codigo_nodo = NULL;

  cout << "Ingrese el valor del nodo: ";
  cin >> valor;
  codigo_nodo = getNodo(valor, raiz);
  if(codigo_nodo)
  {
    elimina(codigo_nodo);
    cout << endl << "Proceso exitoso..."; getch();
  }
  else
  {
    cout << endl << "El nodo no es parte del arbol..."; getch();
  }
}


void Arbol::insertarRaiz(int valor)
{
  Nodo *nuevo = new Nodo(valor, NULL);
  raiz = nuevo;
  cout << endl << "Proceso exitoso...";
}

void Arbol::insertarHijo(int valor, Nodo *nodo, bool direccion)
{
  Nodo *nuevo = new Nodo(valor, nodo);


  if(direccion)
    nodo->setDerecha(nuevo);
  else
    nodo->setIzquierda(nuevo);

  cout << endl << "Proceso exitoso...";
}

Nodo *Arbol::getNodo(int valor, Nodo *nodo)
{
  if(nodo == NULL)
    return nodo;

  else if(nodo->getValor() == valor)
    return nodo;

  else if(getNodo(valor, nodo->getIzquierda()) != NULL)
    return getNodo(valor, nodo->getIzquierda());

  else if(getNodo(valor, nodo->getDerecha()) != NULL)
    return getNodo(valor, nodo->getDerecha());

  else return NULL;
}

void Arbol::muestreoRecursivo(Nodo *nodo)
{
  if(nodo == NULL)
    return;
  else
    mostrarDatos(nodo);

  if(nodo->getIzquierda())
    muestreoRecursivo(nodo->getIzquierda());
  if(nodo->getDerecha())
    muestreoRecursivo(nodo->getDerecha());
}

bool Arbol::tieneHijos(Nodo *nodo)
{
  if(nodo->getDerecha() || nodo->getIzquierda())
    return true;
  else
    return false;
}

bool Arbol::esHijoIzquierdo(Nodo *nodo)
{
  bool es_hijo = (nodo->getPadre() != NULL) ? true : false;
  bool es_izquierdo = (nodo->getPadre()->getIzquierda() == nodo) ? true : false;
  if(es_hijo && es_izquierdo)
    return true;
  else
    return false;
}

bool Arbol::esHijoDerecho(Nodo *nodo)
{
  bool es_derecho = (nodo->getPadre()->getDerecha() == nodo) ? true : false;
  return
    es_derecho;
}

bool Arbol::getDireccion(Nodo *nodo)
{
  if(nodo->getPadre()->getDerecha() == nodo)
    return true;
  else
    return false;
}

void Arbol::encabezadoArbol()
{
  cout << setw(LONGITUD_NODO) << left << "Codigo"
       << setw(LONGITUD_NODO) << left << "Valor"
       << setw(LONGITUD_HIJO) << left << "Nodo Izquierdo"
       << setw(LONGITUD_HIJO) << left << "Nodo Derecho"
       << endl;
}

void Arbol::encabezadoArbolIndividual()
{
  cout << setw(LONGITUD_NODO) << left << "Codigo"
       << setw(LONGITUD_NODO) << left << "Valor"
       << setw(LONGITUD_HIJO) << left << "Nodo Izquierdo"
       << setw(LONGITUD_HIJO) << left << "Valor Izquierdo"
       << setw(LONGITUD_HIJO) << left << "Nodo Derecho"
       << setw(LONGITUD_HIJO) << left << "Valor Derecho"
       << endl;
}

void Arbol::mostrarDatos(Nodo *nodo)
{
  cout << setw(LONGITUD_NODO) << left << nodo
       << setw(LONGITUD_NODO)  << left << nodo->getValor()
       << setw(LONGITUD_HIJO) << left << nodo->getIzquierda()
       << setw(LONGITUD_HIJO) << left << nodo->getDerecha() << endl;
}

void Arbol::mostrarDatosIndividual(Nodo *nodo)
{
  Nodo *izquierda = nodo->getIzquierda();
  Nodo *derecha = nodo->getDerecha();
  int valor_izquierda = 0;
  int valor_derecha = 0;

  valor_izquierda = (izquierda) ? izquierda->getValor() : 0;
  valor_derecha = (derecha) ? derecha->getValor() : 0;

  cout << setw(LONGITUD_NODO) << left << nodo
       << setw(LONGITUD_NODO) << left << nodo->getValor()
       << setw(LONGITUD_HIJO) << left << izquierda
       << setw(LONGITUD_HIJO) << left << valor_izquierda
       << setw(LONGITUD_HIJO) << left << derecha
       << setw(LONGITUD_HIJO) << left << valor_derecha << endl;

  cout << endl;
}
