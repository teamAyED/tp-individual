//
// Created by enano on 3/10/2017.
//

#ifndef SIMPLE_EXAMPLE_NODO_H
#define SIMPLE_EXAMPLE_NODO_H

#include "Producto.h"

struct NodoProducto {
    NodoProducto* siguiente;
    Producto info;
};

#endif //SIMPLE_EXAMPLE_NODO_H
