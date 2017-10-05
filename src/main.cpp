//
// Created by enano on 3/10/2017.
//
#include <iostream>
#include "struct/Producto.h"
#include "estructurasDinamicas/Lista.h"
#include "vista/CargaDeDatos.h"

using namespace std;

void ingresoDatosPorPantalla();

int main(int argc, char **argv) {

    ingresoDatosPorPantalla();

    return 0;
}

void ingresoDatosPorPantalla(){
    Producto productoACargar;// = new Producto();
    NodoProducto* productos = NULL;

    cargarProductos(productos);

    cout << endl << "Lista: " << endl;
    mostrarProductos(productos);
    vaciar(productos);
}


