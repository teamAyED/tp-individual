//
// Created by enano on 5/10/2017.
//

#include "ManejadorDeArchivo.h"

using namespace std;

Producto leerArchivoProductos(string nombreArchivo){
    FILE* archivo = fopen(nombreArchivo, "r");
    if(archivo != NULL){
        Producto producto;
        fread(producto, sizeof(Producto), 1, archivo);
        return producto;
    }
    return NULL;
}

NodoProducto* cargarProductosDesdeArchivo(string nombreArchivo){

}

bool guardarProductosEnArchivo(string nombreArchivo, NodoProducto* productos){
    FILE* archivo = fopen(nombreArchivo, "w+");
    if(archivo != NULL){
        Producto producto;
        fread(producto, sizeof(Producto), 1, archivo);
        return producto;
    }
    return false;
}