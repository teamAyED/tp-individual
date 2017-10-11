//
// Created by enano on 5/10/2017.
//

#include "ManejadorDeArchivo.h"

using namespace std;


bool guardarProductosEnArchivo(string nombreArchivo, NodoProducto* productos){
    FILE* archivo = fopen(nombreArchivo.c_str(), "wb");
    if(archivo != NULL){
        NodoProducto* productoAGuardar = productos;
        while( productoAGuardar != NULL ){
            fwrite(& productoAGuardar->info, sizeof(Producto), 1, archivo);
            productoAGuardar = productoAGuardar->siguiente;
        }
        fclose(archivo);
        return true;
    }
    return false;
}

void imprimirProductosDeArchivo(string nombreArchivo, NodoProducto* & productos){
    FILE* archivo = fopen(nombreArchivo.c_str(), "rb");
    if(archivo != NULL){
        Producto productoEnArchivo;
        fread(& productoEnArchivo, sizeof(Producto), 1, archivo);
        while( ! feof(archivo) ){
            imprimirProductoPorPantalla(productoEnArchivo);
            fread(& productoEnArchivo, sizeof(Producto), 1, archivo);
        }
    }
}

bool leerProductosDeArchivo(std::string nombreArchivo, NodoProducto* productos){
    FILE* archivo = fopen(nombreArchivo.c_str(), "rb");
    if(archivo != NULL){
        Producto productoEnArchivo;
        fread(& productoEnArchivo, sizeof(Producto), 1, archivo);
        while( ! feof(archivo) ){
            agregarOrdenadoEnLista(productos, productoEnArchivo, CAMPO_ORDENAMIENTO_PESO);
            fread(& productoEnArchivo, sizeof(Producto), 1, archivo);
        }
        fclose(archivo);
        return true;
    }
    return false;
}