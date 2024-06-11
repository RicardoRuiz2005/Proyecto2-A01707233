/*El codigo define la clase Empresa, que maneja empleados y productos con arreglos de tamano
 fijo (100 cada uno) y sus respectivos contadores. Permite agregar empleados y productos hasta 
 alcanzar el limite, mostrar empleados y productos, producir productos por indice y cantidad, y 
 hacer que empleados trabajen por nombre. Muestra mensajes de error si se exceden los limites o 
 si se ingresan indices invalidos.*/

#include "Empleado.h"
#include "Producto.h"

#include <iostream>
#include <string>

using namespace std;

class Empresa {
private:
    string nombreEmpresa;
    Empleado* empleados[100]; // Arreglo para manejar los empleados, tamano fijo de 100
    Producto* productos[100]; // Arreglo para manejar los productos con un tamano fijo de 100
    int numEmpleados; // Contador de empleados actuales para no superar el limite
    int numProductos; // Contador de productos actuales para no superar el limite de productos

public:
    Empresa(string nombre) : nombreEmpresa(nombre), numEmpleados(0), numProductos(0) {}

    void agregarEmpleado(Empleado* empleado) {
        if (numEmpleados < 100) {
            empleados[numEmpleados] = empleado;
            numEmpleados++;
        } else {
            cout << "No se pueden agregar mas empleados. Limite alcanzado." << endl;
        }
    }

    void agregarProducto(Producto* producto) {
        if (numProductos < 100) {
            productos[numProductos] = producto;
            numProductos++;
        } else {
            cout << "No se pueden agregar mas productos. Limite alcanzado." << endl;
        }
    }

    void mostrarEmpleados() {
        cout << "Empleados de " << nombreEmpresa << ":" << endl;
        for (int i = 0; i < numEmpleados; i++) {
            empleados[i]->mostrarDatos();
        }
    }

    void mostrarProductos() {
        cout << "Productos de " << nombreEmpresa << ":" << endl;
        for (int i = 0; i < numProductos; i++) {
            productos[i]->mostrarProducto();
        }
    }

    void mostrarInfoEmpresa() {
        cout << "Nombre de la empresa: " << nombreEmpresa << endl;
        cout << "Cantidad de empleados: " << numEmpleados << endl;
        mostrarEmpleados();
        cout << "Cantidad de productos: " << numProductos << endl;
        mostrarProductos();
    }

    void producirProducto(int indice, int cantidad, string extra) {
        if (indice >= 1 && indice <= numProductos) {
            productos[indice - 1]->producirProducto(cantidad); // Sirve para ajustar el indice de los productos
        } else {
            cout << "Indice de producto no valido." << endl;
        }
    }

    void trabajarEmpleadoPorNombre(string nombre) {
        bool encontrado = false;
        for (int i = 0; i < numEmpleados; i++) {
            if (empleados[i]->getNombreEmpleado() == nombre) {
                empleados[i]->trabajar();
                encontrado = true;
                break;
            }
        }
        if (!encontrado) {
            cout << "Empleado con el nombre " << nombre << " no encontrado." << endl;
        }
    }
};
