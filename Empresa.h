#include"Empleado.h"
#include"Producto.h"

#include<iostream>
#include<string>
using namespace std;

class Empresa {
private:
    int cantEmpleados;
    string nombreEmpresa;
    Empleado empleados[100];
    Producto productos[100];
    int contadorEmpleados;
    int contadorProductos;

public:
    Empresa(int cant, string nombre) : cantEmpleados(cant), nombreEmpresa(nombre), contadorEmpleados(0), contadorProductos(0) {}

    void agregarEmpleado(Empleado empleado) {
        if (contadorEmpleados < 100) {
            empleados[contadorEmpleados++] = empleado;
        } else {
            cout << "No se pueden agregar más empleados. Límite alcanzado." << endl;
        }
    }

    void agregarProducto(Producto producto) {
        if (contadorProductos < 100) {
            productos[contadorProductos++] = producto;
        } else {
            cout << "No se pueden agregar más productos. Límite alcanzado." << endl;
        }
    }

    void mostrarEmpleados() {
        cout << "Empleados de " << nombreEmpresa << ":" << endl;
        for (int i = 0; i < contadorEmpleados; i++) {
            empleados[i].mostrarDatos();
        }
    }

    void mostrarProductos() {
        cout << "Productos de " << nombreEmpresa << ":" << endl;
        for (int i = 0; i < contadorProductos; i++) {
            productos[i].mostrarProducto();
        }
    }

    void mostrarInfoEmpresa() {
        cout << "Nombre de la empresa: " << nombreEmpresa << endl;
        cout << "Cantidad de empleados: " << contadorEmpleados << endl;
        mostrarEmpleados();
        cout << "Cantidad de productos: " << contadorProductos << endl;
        mostrarProductos();
    }
};
