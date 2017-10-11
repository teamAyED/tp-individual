//
// Created by enano on 3/10/2017.
//
#include <iostream>
#include "struct/Producto.h"
#include "estructurasDinamicas/Lista.h"
#include "vista/CargaDeDatos.h"
#include "vista/ImpresionDeDatos.h"
#include "funcionesPrincipales/ManejadorDeArchivo.h"

using namespace std;

void mainApp();

int main(int argc, char **argv) {

    mainApp();

    return 0;
}

void mainApp(){
    NodoProducto* productosOrdenadosPorStock = NULL;
    NodoProducto* productosOrdenadosPorPeso = NULL;

    //Ejercicio 1
    cargarProductosDesdePantalla(productosOrdenadosPorStock);

    //Ejercicio 2
    if( guardarProductosEnArchivo("STOCK.dat", productosOrdenadosPorStock) ){
        cout << endl << "Los productos cargados fueron guardados en STOCK.dat" << endl;
    } else {
        cout << endl << "Ocurrio un error al guardar los productos en archivo STOCK.dat" << endl;
    }


    //Ejercicio 3
    leerProductosDeArchivo("STOCK.dat", productosOrdenadosPorPeso);
    cout << endl << "Los 10 productos más pesados que se encuentren en el depósito son:";
    NodoProducto* productoAImprimir = productosOrdenadosPorPeso;
    for( int i=0; i < 10 || productoAImprimir != NULL ; i++ ){
        imprimirProductoPorPantalla(productoAImprimir->info);
        productoAImprimir = productoAImprimir->siguiente;
    }

    //Libero memoria dinamica
    vaciarLista(productosOrdenadosPorStock);
    vaciarLista(productosOrdenadosPorPeso);
}


