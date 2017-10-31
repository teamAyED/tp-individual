//
// Created by enano on 3/10/2017.
//

#include "Lista.h"

/**
 * Retorna si el Producto A es menor al Producto B, basandose
 * en la cantidad de stock o el peso, según "campoOrdenamiento".
 *
 * campoOrdenamiento puede ser: CAMPO_ORDENAMIENTO_STOCK o CAMPO_ORDENAMIENTO_PESO.
 *
 * @param prodA
 * @param prodB
 * @param campoOrdenamiento
 * @return
 */
bool esMenor(Producto prodA, Producto prodB, int campoOrdenamiento);

/**
 * Retorna si el Producto A es mayor al Producto B, basandose
 * en la cantidad de stock o el peso, según "campoOrdenamiento".
 *
 * campoOrdenamiento puede ser: CAMPO_ORDENAMIENTO_STOCK o CAMPO_ORDENAMIENTO_PESO.
 *
 * @param prodA
 * @param prodB
 * @param campoOrdenamiento
 * @return
 */
bool esMayor(Producto prodA, Producto prodB, int campoOrdenamiento);

void vaciarLista(NodoProducto *&lista){
    while( lista != NULL ){
        eliminarPrimerProductoEnLista(lista);
    }
}


Producto eliminarPrimerProductoEnLista(NodoProducto *&lista){
    if( lista != NULL ){
        NodoProducto* primero = lista;
        lista = primero->siguiente;
        Producto primerValor = primero->info;
        delete(primero);
        return  primerValor;
    }
}

void agregarAlPrincipioEnLista(NodoProducto *&lista, Producto producto){
    NodoProducto* primero = new NodoProducto();
    primero->info = producto;
    primero->siguiente = (lista != NULL) ? lista : NULL;
    lista = primero;
}


bool esMenor(Producto prodA, Producto prodB, int campoOrdenamiento){
    if( campoOrdenamiento == CAMPO_ORDENAMIENTO_STOCK ){
        return prodA.stock < prodB.stock;
    } else if( campoOrdenamiento == CAMPO_ORDENAMIENTO_PESO ){
        return prodA.peso < prodB.peso;
    }
}

void agregarOrdenadoEnLista(NodoProducto *&lista, Producto producto, int campoOrdenamiento){

    if( lista == NULL ||
            esMenor( producto, lista->info, campoOrdenamiento ) ) {
        agregarAlPrincipioEnLista(lista, producto);
    } else {
        NodoProducto* nuevo = new NodoProducto();
        nuevo->info = producto;
        nuevo->siguiente = NULL;
        NodoProducto* aux = lista;
        NodoProducto* anterior = lista;

        while( aux != NULL &&
                esMenor( aux->info, producto, campoOrdenamiento) ) {
            anterior = aux;
            aux = aux->siguiente;
        }
        anterior->siguiente = nuevo;
        nuevo->siguiente = aux;
    }
}

bool esMayor(Producto prodA, Producto prodB, int campoOrdenamiento){
    if( campoOrdenamiento == CAMPO_ORDENAMIENTO_STOCK ){
        return prodA.stock > prodB.stock;
    } else if( campoOrdenamiento == CAMPO_ORDENAMIENTO_PESO ){
        return prodA.peso > prodB.peso;
    }
}

void agregarOrdenadoInvertidoEnLista(NodoProducto *&lista, Producto producto, int campoOrdenamiento){

    if( lista == NULL ||
            esMayor( producto, lista->info, campoOrdenamiento ) ) {
        agregarAlPrincipioEnLista(lista, producto);
    } else {
        NodoProducto* nuevo = new NodoProducto();
        nuevo->info = producto;
        nuevo->siguiente = NULL;
        NodoProducto* aux = lista;
        NodoProducto* anterior = lista;

        while( aux != NULL &&
                esMayor( aux->info, producto, campoOrdenamiento) ) {
            anterior = aux;
            aux = aux->siguiente;
        }
        anterior->siguiente = nuevo;
        nuevo->siguiente = aux;
    }
}