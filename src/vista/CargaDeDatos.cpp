//
// Created by maximiliano.torchio on 04/10/2017.
//

#include "CargaDeDatos.h"

using namespace std;

bool finCargaDeProductos(int datoIngresado) {
    return datoIngresado == FIN_CARGA_DE_PRODUCTOS;
}

bool cargarProductoDesdePantalla(Producto & productoACargar){
    cout << "ID Producto: ";
    cin >> productoACargar.idProducto;
    if( finCargaDeProductos(productoACargar.idProducto) ) {
        return false;
    }
    cout << "Descripcion: ";
    cin >> productoACargar.descripcion;
    cout << "Cantidad de unidades: ";
    cin >> productoACargar.stock;
    cout << "Peso: ";
    cin >> productoACargar.peso;
    cout << endl;
    return true;
}

void cargarProductosDesdePantalla(NodoProducto* & productos){
    bool seguirCargando;
    Producto productoACargar;

    cout << "*** Para terminar la carga: idProducto = -1" << endl;
    cout << "Ingrese datos de los productos: " << endl;
    seguirCargando = cargarProductoDesdePantalla( productoACargar );
    while( seguirCargando ) {
        agregarOrdenado(productos, productoACargar);
        seguirCargando = cargarProductoDesdePantalla( productoACargar );
    }
}

void imprimirProducto(Producto producto){
    cout << endl;
    cout << "ID Producto: " << producto.idProducto << endl;
    cout << "Descripcion: " << producto.descripcion << endl;
    cout << "Cantidad de unidades: " << producto.stock << endl;
    cout << "Peso: " << producto.peso << endl;
}

void imprimirProductos(NodoProducto *productos){
    NodoProducto* cursor = productos;
    while( cursor != NULL ){
        imprimirProducto(cursor->info);
        cursor = cursor->siguiente;
    }
}