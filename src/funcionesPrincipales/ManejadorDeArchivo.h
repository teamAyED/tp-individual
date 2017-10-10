//
// Created by enano on 5/10/2017.
//

#ifndef SIMPLE_EXAMPLE_MANEJADORDEARCHIVO_H
#define SIMPLE_EXAMPLE_MANEJADORDEARCHIVO_H

#include <iostream>
#include <string>
#include <cstdio>
#include "../struct/Producto.h"
#include "../struct/NodoProducto.h"
#include "../vista/CargaDeDatos.h"


bool guardarProductosEnArchivo(std::string nombreArchivo, NodoProducto* productos);

void leerProductosDeArchivo(std::string nombreArchivo, NodoProducto* productos);

#endif //SIMPLE_EXAMPLE_MANEJADORDEARCHIVO_H
