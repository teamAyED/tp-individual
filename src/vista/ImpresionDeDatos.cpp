//
// Created by maximiliano.torchio on 11/10/2017.
//

#include "ImpresionDeDatos.h"

using namespace std;

void imprimirProductoPorPantalla(Producto producto){
    cout << endl;
    cout << "ID Producto: " << producto.idProducto << endl;
    cout << "Descripcion: " << producto.descripcion << endl;
    cout << "Cantidad de unidades: " << producto.stock << endl;
    //cout << "Peso: " << producto.peso << endl;
}

void imprimirProductosPorPantalla(NodoProducto *productos){
    NodoProducto* cursor = productos;
    while( cursor != NULL ){
        imprimirProductoPorPantalla(cursor->info);
        cursor = cursor->siguiente;
    }
}