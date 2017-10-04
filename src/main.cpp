//
// Created by enano on 3/10/2017.
//
#include <iostream>
#include "struct/Producto.h"
#include "estructurasDinamicas/Lista.h"

using namespace std;

void ingresoDatosPorPantalla();

int main(int argc, char **argv) {

    ingresoDatosPorPantalla();

    return 0;
}

void ingresoDatosPorPantalla(){
    Producto productoACargar;// = new Producto();
    NodoProducto* lista;

    do {
        cout << "Ingrese datos de productos: " << endl;
        cout << "ID Producto: ";
        cin >> productoACargar.idProducto;
        cout << "Descripcion: ";
        cin >> productoACargar.descripcion;
        cout << "Cantidad de unidades: ";
        cin >> productoACargar.stock;
        cout << "Peso: ";
        cin >> productoACargar.peso;

        if( productoACargar.idProducto != -1 ){
            agregarOrdenado(lista, productoACargar);
        }
    } while( productoACargar.idProducto != -1 );

    cout << endl << "Lista: " << endl;
    cout << endl << lista->info.stock << endl;
    cout << endl << lista->siguiente->info.stock << endl;
    cout << endl << lista->siguiente->siguiente->info.stock << endl;
}


