//
// Created by enano on 3/10/2017.
//

#ifndef SIMPLE_EXAMPLE_LISTA_H
#define SIMPLE_EXAMPLE_LISTA_H

#include "../struct/NodoProducto.h"
#include "../struct/Producto.h"

#define LISTA_PRIMERO 0
#define LISTA_ULTIMO 1


void vaciar(NodoProducto* & lista);

void agregarOrdenado(NodoProducto* & lista, Producto producto);

void agregarAlPrincipio(NodoProducto* & lista, Producto producto);



#endif //SIMPLE_EXAMPLE_LISTA_H
