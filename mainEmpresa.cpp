#include<iostream>
#include<string>

#include"Empresa.h"
#include"Empleado.h"
#include"Producto.h"
using namespace std;

int main() {
    string nombreEmpresa;
    cout << "Ingrese el nombre de la empresa: ";
    cin >> nombreEmpresa;

    Empresa miEmpresa(100, nombreEmpresa);

    int opcion;
    do {
        cout << "\n--- Menu de Opciones ---" << endl;
        cout << "1. Registrar un empleado." << endl;
        cout << "2. Ver todos los empleados registrados." << endl;
        cout << "3. Ver un producto ya creado." << endl;
        cout << "4. Salir." << endl;
        cout << "Seleccione una opcion: ";
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
            miEmpresa.agregarEmpleado(nuevoEmpleado);
        } else if (opcion == 2) {
            miEmpresa.mostrarEmpleados();
        } else if (opcion == 3) {
            Fisico productoExistente("Celular", 75, "Dispositivo de facil uso y portatil", "Metal");
            cout << "Informacion del Producto Existente:" << endl;
            productoExistente.mostrarProducto();
        } else if (opcion == 4) {
            cout << "Saliendo del programa." << endl;
        } else {
            cout << "Opcion no válida. Por favor, intente de nuevo." << endl;
        }
    } while (opcion != 4);

    return 0;
}
