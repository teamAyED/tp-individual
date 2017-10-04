//
// Created by enano on 3/10/2017.
//

#include "Lista.h"

void agregar(NodoProducto* & lista, Producto producto){
    NodoProducto* nuevo = new NodoProducto();
    nuevo->info = producto;
    nuevo->siguiente = NULL;
    if( lista == NULL ){
        lista = nuevo;
    } else {
        //lista->siguiente
    }
}

void eliminar(NodoProducto* & lista){

}

void agregarOrdenado(NodoProducto* & lista, Producto producto){

    if( lista == NULL || producto.stock < lista->info.stock ) {
        agregarAlPrincipio(lista, producto);
    } else {
        NodoProducto* nuevo = new NodoProducto();
        nuevo->info = producto;
        nuevo->siguiente = NULL;
        NodoProducto* aux = lista;
        NodoProducto* ant = lista;

        while( aux != NULL && aux->info.stock < producto.stock ){
            ant = aux;
            aux = aux->siguiente;
        }
        ant->siguiente = nuevo;
        nuevo->siguiente = aux;
    }
}

void agregarAlPrincipio(NodoProducto* & lista, Producto producto){
    NodoProducto* nuevo = new NodoProducto();
    nuevo->info = producto;
    nuevo->siguiente = lista;
    lista = nuevo;
}