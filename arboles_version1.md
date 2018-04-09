
# VERSION 1. 

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

+ **Escenario:** creacion de un nodo
+ **Given(Dado):** el programa es iniciado
+ **And (Y):** muestre el menu
+ **And (Y):** el usuario acceda a la opcion 1. insertar un nodo
+ **And (Y):** ingrese el valor 10
+ **And (Y):** pulse la tecla enter
+ **And (Y):** el programa regrese al menu
+ **When(Cuando):** el usuario acceda a la opcion 2. Listar nodos
+ **Then(Entonces):** el resultado mostrado en pantalla debe ser

Ejemplo:

	Nodo actual: 10, # memoria nodo actual: 0001, # memoria nodo siguiente: null



+ **Escenario:** creacion de dos nodos
+ **Given(Dado):** el programa es iniciado
+ **And (Y):** muestre el menu
+ **And (Y):** el usuario acceda a la opcion 1. insertar un nodo
+ **And (Y):** ingrese el valor 10
+ **And (Y):** pulse la tecla enter
+ **And (Y):** el programa regrese al menu
+ **And (Y):** el usuario acceda a la opcion 1. insertar un nodo
+ **And (Y):** ingrese el valor 20
+ **And (Y):** pulse la tecla enter
+ **And (Y):** el programa regrese al menu
+ **When(Cuando):** el usuario acceda a la opcion 2. Listar nodos
+ **Then(Entonces):** el resultado mostrado en pantalla debe ser

Ejemplo:

	Nodo actual: 10, # memoria nodo actual: 0001, # memoria nodo siguiente: 0002
	Nodo actual: 20, # memoria nodo actual: 0002, # memoria nodo siguiente: null


+ **Escenario:** creacion de tres nodos
+ **Given(Dado):** el programa es iniciado
+ **And (Y):** muestre el menu
+ **And (Y):** el usuario acceda a la opcion 1. insertar un nodo
+ **And (Y):** ingrese el valor 10
+ **And (Y):** pulse la tecla enter
+ **And (Y):** el programa regrese al menu
+ **And (Y):** el usuario acceda a la opcion 1. insertar un nodo
+ **And (Y):** ingrese el valor 20
+ **And (Y):** pulse la tecla enter
+ **And (Y):** el programa regrese al menu
+ **And (Y):** el usuario acceda a la opcion 1. insertar un nodo
+ **And (Y):** ingrese el valor 30
+ **And (Y):** pulse la tecla enter
+ **And (Y):** el programa regrese al menu
+ **When(Cuando):** el usuario acceda a la opcion 2. Listar nodos
+ **Then(Entonces):** el resultado mostrado en pantalla debe ser

Ejemplo:

	Nodo actual: 10, # memoria nodo actual: 0001, # memoria nodo siguiente: 0002
	Nodo actual: 20, # memoria nodo actual: 0002, # memoria nodo siguiente: 0003
	Nodo actual: 30, # memoria nodo actual: 0003, # memoria nodo siguiente: null
