//
// Created by enano on 3/10/2017.
//
#include <iostream>
#include "struct/Producto.h"
#include "estructurasDinamicas/Lista.h"
#include "vista/CargaDeDatos.h"
#include "vista/ImpresionDeDatos.h"
#include "accesoAArchivos/ManejadorDeArchivo.h"

using namespace std;

void mainApp();

int main(int argc, char **argv) {

    mainApp();

    return 0;
}

/**
 * Alumno: Torchio Maximiliano.
 * Legajo: 162794-6
 *
 * EJERCICIO 1:
 * Crear el archivo STOCK.dat mediante el pedido de datos al usuario, con los siguientes campos:
 *
 * Crear el archivo STOCK.dat mediante el pedido de datos al usuario, con los siguientes
 * campos:
 * - IDProducto
 * - Descripción
 * - CantidadDeUnid
 * - Peso
 *
 * EJERCICIO 2:
 * Ordene el archivo creado en el Ejercicio 1 por CantidadDeUnid utilizando estruturas dinámicas.
 *
 * EJERCICIO 3:
 * Emitir un listado por pantalla con la siguiente información de los 10 productos más pesados que se encuentren en el depósito.
 * IDProducto XXXXX
 * Descripción “asdf asdf adsf”
 * Cantidad de Unidades XXXXX
 */

/**
 * Consideraciones:
 *     - Se considera que los datos ingresados por pantalla son correctos.
 *     - Se utilizan listas distintas para cada tipo de ordenamiento para que el código quede más claro.
 *     - Se libera la memoria de las listas al final y no dentro de los métodos de escritura o impresión,
 *          para que las funcionalidades sean más específicas dentro de cada función o procesamiento.
 *     - Se intenta que tanto los nombres de funciones como de variables y structs sean lo más descriptivos
 *          posibles, por eso (por ejemplo) se utiliza el nombre "NodoProducto" para los nodos que en su info
 *          contienen una variable de tipo Producto.
 *
 */
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


