//
// Created by maximiliano.torchio on 04/10/2017.
//

#ifndef SIMPLE_EXAMPLE_CARGADEDATOS_H
#define SIMPLE_EXAMPLE_CARGADEDATOS_H

#include <iostream>
#include "../struct/Producto.h"
#include "../struct/NodoProducto.h"
#include "../estructurasDinamicas/Lista.h"

#define FIN_CARGA_DE_PRODUCTOS -1;

void cargarProductos(NodoProducto* & productos);

void mostrarProductos(NodoProducto *productos);

#endif //SIMPLE_EXAMPLE_CARGADEDATOS_H
