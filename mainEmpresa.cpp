#include<iostream>
#include<string>

#include"Empresa.h"
#include"Empleado.h"
#include"Producto.h"
using namespace std;


int main() {
    int opcion;
    cout << "¿Qué desea hacer?" << endl;
    cout << "1. Registrar un empleado." << endl;
    cout << "2. Ver un producto ya creado." << endl;
    cin >> opcion;

    if (opcion == 1) {
    	
        string nombre, puesto, matricula;
        cout << "Ingrese el nombre del empleado: ";
        cin >> nombre;
        cout << "Ingrese el puesto del empleado: ";
        cin >> puesto;
        cout << "Ingrese la matricula del empleado: ";
        cin >> matricula;

        Empleado nuevoEmpleado(nombre, puesto, matricula);
        nuevoEmpleado.mostrarDatos();
        nuevoEmpleado.trabajar(); 

    } else if (opcion == 2) {
        Fisico productoExistente("Celular", 75, "dispositivo de facil uso y portatil","Metal");
        cout << "Informacion del Producto Existente:" << endl;
        productoExistente.mostrarProducto();
    } else {
        cout << "Opción no válida. Saliendo del programa." << endl;
    }

    return 0;
}
