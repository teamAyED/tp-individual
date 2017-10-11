//
// Created by enano on 3/10/2017.
//
#include <iostream>
#include "struct/Producto.h"
#include "estructurasDinamicas/Lista.h"
#include "vista/CargaDeDatos.h"
#include "funcionesPrincipales/ManejadorDeArchivo.h"

using namespace std;

void mainApp();

int main(int argc, char **argv) {

    mainApp();

    return 0;
}

void mainApp(){
    NodoProducto* productos = NULL;


    cargarProductosDesdePantalla(productos);

    cout << endl << "Los 10 productos más pesados que se encuentren en el depósito son:";
    NodoProducto* productoAImprimir = productos;
    for( int i=0; i < 10 || productoAImprimir != NULL ; i++ ){
        imprimirProductoPorPantalla(productoAImprimir->info);
        productoAImprimir = productoAImprimir->siguiente;
    }

    guardarProductosEnArchivo("STOCK.dat", productos);
    cout << endl << "Los productos cargados fueron guardados en STOCK.dat" << endl;
    vaciarLista(productos);
}


