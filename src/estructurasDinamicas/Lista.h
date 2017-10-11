//
// Created by enano on 3/10/2017.
//

#ifndef SIMPLE_EXAMPLE_LISTA_H
#define SIMPLE_EXAMPLE_LISTA_H

#include "../struct/NodoProducto.h"
#include "../struct/Producto.h"

#define CAMPO_ORDENAMIENTO_STOCK 1
#define CAMPO_ORDENAMIENTO_PESO 2

/**
 * Libera la memoria dinánimca utilizada por la lista.
 *
 * @param lista
 */
void vaciarLista(NodoProducto *&lista);

/**
 * Agrega el Producto a la lista pasada por parámetro, en el orden indicado en
 * "campoOrdenamiento". Todos los parámetros son obligatorios.
 *
 * campoOrdenamiento puede ser: CAMPO_ORDENAMIENTO_STOCK o CAMPO_ORDENAMIENTO_PESO.
 *
 * @param lista
 * @param producto
 * @param campoOrdenamiento
 */
void agregarOrdenadoEnLista(NodoProducto *&lista, Producto producto, int campoOrdenamiento);

/**
 * Elimina el primer Producto de la lista, devolviendo su valor.
 * Libera memoria dinamica del elemento eliminado.
 *
 * En caso de lista vacía, no hace nada.
 *
 * @param lista
 * @param producto
 */
Producto eliminarPrimerProductoEnLista(NodoProducto *&lista);

/**
 * Agrega un Producto al principio de la lista.
 * Si la lista no existe, la crea.
 *
 * @param lista
 * @param producto
 */
void agregarAlPrincipioEnLista(NodoProducto *&lista, Producto producto);


#endif //SIMPLE_EXAMPLE_LISTA_H
