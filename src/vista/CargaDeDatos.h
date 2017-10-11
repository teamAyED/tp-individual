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

/**
 * Posibilita la carga de un Producto a través de la consola, interactuando con el usuario.
 *
 * @param productoACargar
 * @return
 */
bool cargarProductoDesdePantalla(Producto & productoACargar);

/**
 * Posibilita la carga de datos a través de la consola, interactuando con el usuario.
 * Los datos se cargan en una lista de Producto, de manera ordenada por stock.
 * El fin de carga de datos se define en FIN_CARGA_DE_PRODUCTOS.
 *
 * @param productoACargar
 * @return
 */
void cargarProductosDesdePantalla(NodoProducto* & productos);




#endif //SIMPLE_EXAMPLE_CARGADEDATOS_H
