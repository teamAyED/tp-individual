//
// Created by enano on 3/10/2017.
//

#ifndef SIMPLE_EXAMPLE_LISTA_H
#define SIMPLE_EXAMPLE_LISTA_H

#include "../struct/NodoProducto.h"
#include "../struct/Producto.h"

void agregar(NodoProducto* & lista, Producto producto);

void eliminar(NodoProducto* & lista);

void agregarOrdenado(NodoProducto* & lista, Producto producto);

void agregarAlPrincipio(NodoProducto* & lista, Producto producto);

#endif //SIMPLE_EXAMPLE_LISTA_H
