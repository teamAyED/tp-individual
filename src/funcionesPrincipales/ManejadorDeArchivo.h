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
#include "../estructurasDinamicas/Lista.h"
#include "../vista/ImpresionDeDatos.h"

/**
 * Guarda una lista de Productos en el archivo de nombre indicado.
 * El archivo queda ordenado por stock de productos.
 * Si el archivo no existe, lo crea. Si existe lo reemplaza.
 *
 * POST: La memoria de la lista no es liberada.
 *
 * RETURN: true si no hubo problemas. false si no se pude abrir el archivo.
 *
 * @param nombreArchivo
 * @param productos
 * @return
 */
bool guardarProductosEnArchivo(std::string nombreArchivo, NodoProducto* productos);


/**
 * Carga los productos del archivo de nombre indicado, en una lista de productos.
 * La lista queda ordenada por peso de los productos.
 *
 * RETURN: true si no hubo problemas. false si no se pude abrir el archivo.
 *
 * @param nombreArchivo
 * @param productos
 * @return
 */
bool leerProductosDeArchivo(std::string nombreArchivo, NodoProducto* productos);

#endif //SIMPLE_EXAMPLE_MANEJADORDEARCHIVO_H
