/*El codigo define una clase Empresa que usa vectores para manejar empleados 
  y productos. Utiliza push_back para agregar elementos y size() para obtener el tamanio 
  del vector. Ofrece metodos para agregar y mostrar empleados y productos, incluyendo 
  informacion sobre la empresa.*/

#include "Empleado.h"
#include "Producto.h"

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Empresa {
private:
    int cantEmpleados;
    string nombreEmpresa;
    vector<Empleado> empleados; // Utilizo un vector para manejar los empleados
    vector<Producto> productos; // Tambien utilizo otro vector para manejar los productos
	
	/* En el caso de los vectores solicite ayuda externa de programadores y de sitios de internet para 
	   comprender mejor los vectores y asi usarlos, puesto que me fue recomendado usarlos por el becario,
	   el apoyo externo esta comentado para asi demostrar la comprensión de los vectores y de su uso. */
	
public:
    Empresa(int cant, string nombre) : cantEmpleados(cant), nombreEmpresa(nombre) {}

    void agregarEmpleado(Empleado empleado) {
        if (empleados.size() < static_cast<size_t>(cantEmpleados)) {
        	/* Uso el [static_cast<size_t>(cantEmpleados)] para asegura que ambos valores se comparen 
		       correctamente y se eviten posibles errores de comparacion de tipos de datos debido a que son vectores*/
            empleados.push_back(empleado);
        } else {
            cout << "No se pueden agregar mas empleados. Limite alcanzado." << endl;
        }
    }

    void agregarProducto(Producto producto) {
        productos.push_back(producto); // Uso el .push_back para agregar un elemento al final del vector
    }

    void mostrarEmpleados() {
        cout << "Empleados de " << nombreEmpresa << ":" << endl;
        for (size_t i = 0; i < empleados.size(); i++) {
        	// Use el size_t para obtener valores de tamaño relacionados con la memoria
            empleados[i].mostrarDatos();
        }
    }

    void mostrarProductos() {
        cout << "Productos de " << nombreEmpresa << ":" << endl;
        for (size_t i = 0; i < productos.size(); i++) {
        	// Uso el .size() para obtener el número de elementos que contiene ese vector
            productos[i].mostrarProducto();
        }
    }

    void mostrarInfoEmpresa() {
        cout << "Nombre de la empresa: " << nombreEmpresa << endl;
        cout << "Cantidad de empleados: " << empleados.size() << endl;
        mostrarEmpleados();
        cout << "Cantidad de productos: " << productos.size() << endl;
        mostrarProductos();
    }
};
