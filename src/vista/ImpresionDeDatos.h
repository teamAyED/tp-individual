//
// Created by maximiliano.torchio on 11/10/2017.
//

#ifndef SIMPLE_EXAMPLE_IMPRESIONDEDATOS_H
#define SIMPLE_EXAMPLE_IMPRESIONDEDATOS_H

#include <iostream>
#include "../struct/Producto.h"
#include "../struct/NodoProducto.h"

/**
 * Imprime por pantalla un producto de manera formateada.
 * No se imprime el peso, por solicitud en enunciado de ejercicio.
 *
 * @param producto
 */
void imprimirProductoPorPantalla(Producto producto);

/**
 * Imprime por pantalla todos los productos que se encuentren en la lista.
 * POST: No vacía el contenido de la lista.
 *
 * @param producto
 */
void imprimirProductosPorPantalla(NodoProducto* & productos);

#endif //SIMPLE_EXAMPLE_IMPRESIONDEDATOS_H
