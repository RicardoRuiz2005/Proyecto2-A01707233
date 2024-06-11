/*El codigo es un programa que interactua con una empresa ficticia. Solicita
  el nombre de la empresa, crea un arreglo de Empresa con capacidad para 100 
  empleados, y muestra un menu para registrar empleados, ver empleados, ver 
  productos, dar una accion a los empleados, crear productos o salir del programa. 
  Cada opcion ejecuta acciones especificas como 
  agregar empleados, mostrar informacion y gestionar productos, todo dentro de un 
  bucle de opciones hasta que se elige salir.*/

#include<iostream>
#include<string>

#include"Empresa.h"
#include"Empleado.h"
#include"Producto.h"
using namespace std;

int main() {
    string nombreEmpresa;
    cout << "Ingrese el nombre de una empresa de tecnologia que produce aplicaciones y productos fisicos: ";
    cin >> nombreEmpresa;

    Empresa miEmpresa(nombreEmpresa);

    Fisico productoFisico("Celular", 75, "Dispositivo de facil uso y portatil", "Metal");
    Aplicacion productoAplicacion("AppMovil", 50, "Aplicacion movil para gestionar tareas", "Java");

    miEmpresa.agregarProducto(&productoFisico);
    miEmpresa.agregarProducto(&productoAplicacion);

    int opcion;
    do {
        cout << "\n--- Menu de Opciones ---" << endl;
        cout << "1. Registrar un empleado." << endl;
        cout << "2. Ver todos los empleados registrados." << endl;
        cout << "3. Ver todos los productos registrados." << endl;
        cout << "4. Producir un producto." << endl;
        cout << "5. Mandar a trabajar a un empleado por nombre." << endl;
        cout << "6. Salir." << endl;
        cout << "Seleccione una opcion: ";
        cin >> opcion;
        cout << endl;

        if (opcion == 1) {
            string nombre, puesto, matricula;
            cout << "Ingrese el nombre del empleado: ";
            cin >> nombre;
            cout << "Ingrese el puesto del empleado (Operador, Director, Jefe): ";
            cin >> puesto;
            cout << "Ingrese la matricula del empleado: ";
            cin >> matricula;

            if (puesto == "Operador" or puesto == "operador") {
                Operador* nuevoEmpleado = new Operador(nombre, puesto, matricula);
                miEmpresa.agregarEmpleado(nuevoEmpleado);
            } else if (puesto == "Director" or puesto == "director") {
                Director* nuevoEmpleado = new Director(nombre, puesto, matricula);
                miEmpresa.agregarEmpleado(nuevoEmpleado);
            } else if (puesto == "Jefe" or puesto == "jefe") {
                Jefe* nuevoEmpleado = new Jefe(nombre, puesto, matricula);
                miEmpresa.agregarEmpleado(nuevoEmpleado);
            } else {
                cout << "Puesto invalido. Solo se permiten los puestos: Operador, Director, Jefe." << endl;
            }
        } else if (opcion == 2) {
            miEmpresa.mostrarEmpleados();
        } else if (opcion == 3) {
            miEmpresa.mostrarProductos();
        } else if (opcion == 4) {
            int indiceProducto, cantidad;
            cout << "Ingrese el indice del producto a producir (1- Producto fisico, 2- Aplicacion): ";
            cin >> indiceProducto;
            if (indiceProducto == 1) {
            	cout << "Ingrese la cantidad a producir: ";
          		cin >> cantidad;
                string materiales;
                miEmpresa.producirProducto(indiceProducto, cantidad, materiales);
            } else if (indiceProducto == 2) {
                cout << "Ingrese la cantidad de programadores: ";
      		    cin >> cantidad;
				string programadores;
                miEmpresa.producirProducto(indiceProducto, cantidad, programadores);
            } else {
                cout << "Indice de producto no valido." << endl;
            }
        } else if (opcion == 5) {
            string nombreEmpleado;
            cout << "Ingrese el nombre del empleado que va a trabajar: ";
            cin >> nombreEmpleado;
            miEmpresa.trabajarEmpleadoPorNombre(nombreEmpleado);
        } else if (opcion == 6) {
            cout << "Saliendo del programa." << endl;
        } else {
            cout << "Opcion no valida. Por favor, intente de nuevo." << endl;
        }
    } while (opcion != 6);

    return 0;
}
