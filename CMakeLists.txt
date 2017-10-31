cmake_minimum_required(VERSION 3.6)   # CMake version check
project(simple_example)               # Create project "simple_example"
set(CMAKE_CXX_STANDARD 98)            # Enable c++11 standard

set(SOURCE_FILES src/main.cpp src/struct/Producto.h src/struct/NodoProducto.h src/estructurasDinamicas/Lista.cpp src/accesoAArchivos/ManejadorDeArchivo.cpp src/vista/CargaDeDatos.cpp src/vista/ImpresionDeDatos.cpp)            # Add main.cpp file of project root directory as source file
add_executable(simple_example ${SOURCE_FILES})       # Add executable target with source files listed in SOURCE_FILES variable