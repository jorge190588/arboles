# VERSION 2. 

La primera version del programa incluye crear y mostrar nodos consecutivos.

### Caracteristica: como usuario necesito acceder al programa y que muestre un menu	
+ **Escenario:** creacion del menu
+ **Given(Dado):** un usuario inicia el programa.
+ **When(Cuando):** carge el sistema
+ **Then(Entonces):** debe mostrar un menu con las opciones siguientes:

Ejemplo:

	1. Insertar un nodo
	2. Listar nodos
	3. Salir

+ **Escenario:** crear el nodo raiz
+ **Given(Dado):** el programa es iniciado
+ **And (Y):** muestre el menu
+ **And (Y):** el usuario acceda a la opcion 1. insertar un nodo
+ **And (Y):** ingrese el valor 10
+ **And (Y):** pulse la tecla enter
+ **And (Y):** no debe preguntar la posicion del nodo (izquierda o derecha)
+ **And (Y):** el programa regrese al menu
+ **When(Cuando):** el usuario acceda a la opcion 2. Listar nodos
+ **Then(Entonces):** el resultado mostrado en pantalla debe ser

Ejemplo:

	Nodo actual: 10, # memoria nodo actual: 0001, # memoria nodo izquierdo: null, # memoria nodo derecho: null


+ **Escenario:** crear el nodo raiz y un nodo izquierdo
+ **Given(Dado):** el programa es iniciado
+ **And (Y):** muestre el menu
+ **And (Y):** el usuario acceda a la opcion 1. insertar un nodo
+ **And (Y):** ingrese el valor 10
+ **And (Y):** pulse la tecla enter
+ **And (Y):** no debe preguntar la posicion del nodo (izquierda o derecha)
+ **And (Y):** el programa regrese al menu
+ **And (Y):** el usuario acceda a la opcion 1. insertar un nodo
+ **And (Y):** ingrese el valor 20
+ **And (Y):** pulse la tecla enter
+ **And (Y):** el usuario escribe que el nodo 20 es hijo izquierdo del nodo 10
+ **And (Y):** pulse la tecla enter
+ **And (Y):** el programa regrese al menu
+ **When(Cuando):** el usuario acceda a la opcion 2. Listar nodos
+ **Then(Entonces):** el resultado mostrado en pantalla debe ser

Ejemplo:

	Nodo actual: 10, # memoria nodo actual: 0001, # memoria nodo izquierdo: 0002, # memoria nodo derecho: null
  Nodo actual: 20, # memoria nodo actual: 0002, # memoria nodo izquierdo: null, # memoria nodo derecho: null



+ **Escenario:** crear el nodo raiz, un nodo izquierdo y un nodo derecho
+ **Given(Dado):** el programa es iniciado
+ **And (Y):** muestre el menu
+ **And (Y):** el usuario acceda a la opcion 1. insertar un nodo
+ **And (Y):** ingrese el valor 10
+ **And (Y):** pulse la tecla enter
+ **And (Y):** no debe preguntar la posicion del nodo (izquierda o derecha)
+ **And (Y):** el programa regrese al menu
+ **And (Y):** el usuario acceda a la opcion 1. insertar un nodo
+ **And (Y):** ingrese el valor 20
+ **And (Y):** pulse la tecla enter
+ **And (Y):** el usuario escribe que el nodo 20 es hijo izquierdo del nodo 10
+ **And (Y):** pulse la tecla enter
+ **And (Y):** el usuario acceda a la opcion 1. insertar un nodo
+ **And (Y):** ingrese el valor 30
+ **And (Y):** pulse la tecla enter
+ **And (Y):** el usuario escribe que el nodo 30 es hijo izquierdo del nodo 10
+ **And (Y):** pulse la tecla enter
+ **And (Y):** el programa regrese al menu
+ **When(Cuando):** el usuario acceda a la opcion 2. Listar nodos
+ **Then(Entonces):** el resultado mostrado en pantalla debe ser

Ejemplo:

	Nodo actual: 10, # memoria nodo actual: 0001, # memoria nodo izquierdo: 0002, # memoria nodo derecho: 0003
  Nodo actual: 20, # memoria nodo actual: 0002, # memoria nodo izquierdo: null, # memoria nodo derecho: null
  Nodo actual: 30, # memoria nodo actual: 0003, # memoria nodo izquierdo: null, # memoria nodo derecho: null
  

+ **Escenario:** crear el nodo raiz, un nodo izquierdo de la raiz, un nodo derecho de la raiz y un nodo izquierdo
+ **Given(Dado):** el programa es iniciado
+ **And (Y):** muestre el menu
+ **And (Y):** el usuario acceda a la opcion 1. insertar un nodo
+ **And (Y):** ingrese el valor 10
+ **And (Y):** pulse la tecla enter
+ **And (Y):** no debe preguntar la posicion del nodo (izquierda o derecha)
+ **And (Y):** el programa regrese al menu
+ **And (Y):** el usuario acceda a la opcion 1. insertar un nodo
+ **And (Y):** ingrese el valor 20
+ **And (Y):** pulse la tecla enter
+ **And (Y):** el usuario escribe que el nodo 20 es hijo izquierdo del nodo 10
+ **And (Y):** pulse la tecla enter
+ **And (Y):** el usuario acceda a la opcion 1. insertar un nodo
+ **And (Y):** ingrese el valor 30
+ **And (Y):** pulse la tecla enter
+ **And (Y):** el usuario escribe que el nodo 30 es hijo izquierdo del nodo 10
+ **And (Y):** pulse la tecla enter
+ **And (Y):** el programa regrese al menu
+ **And (Y):** el usuario acceda a la opcion 1. insertar un nodo
+ **And (Y):** ingrese el valor 40
+ **And (Y):** pulse la tecla enter
+ **And (Y):** el usuario escribe que el nodo 40 es hijo izquierdo del nodo 20
+ **And (Y):** pulse la tecla enter
+ **And (Y):** el programa regrese al menu
+ **When(Cuando):** el usuario acceda a la opcion 2. Listar nodos
+ **Then(Entonces):** el resultado mostrado en pantalla debe ser

Ejemplo:

	Nodo actual: 10, # memoria nodo actual: 0001, # memoria nodo izquierdo: 0002, # memoria nodo derecho: 0003
  Nodo actual: 20, # memoria nodo actual: 0002, # memoria nodo izquierdo: 0004, # memoria nodo derecho: null
  Nodo actual: 30, # memoria nodo actual: 0003, # memoria nodo izquierdo: null, # memoria nodo derecho: null  
  Nodo actual: 40, # memoria nodo actual: 0004, # memoria nodo izquierdo: null, # memoria nodo derecho: null  
  
  
