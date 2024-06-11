/*Este codigo define clases de empleados, como Operador, Director y 
  Jefe, que heredan de la clase base Empleado. Cada clase tiene metodos para 
  trabajar, pero con comportamientos especificos: el Operador trabaja en 
  produccion, el Director dirige la produccion y el Jefe dirige la empresa.*/

#ifndef EMPLEADO_H
#define EMPLEADO_H

#include <iostream>
#include <string>
using namespace std;

class Empleado {
protected:
    string nombreEmpleado;
    string puesto;
    string matricula;

public:
    Empleado() : nombreEmpleado(""), puesto(""), matricula("") {}
    Empleado(string nom, string pues, string matri) : nombreEmpleado(nom), puesto(pues), matricula(matri) {}

    // Getters
    string getNombreEmpleado() {
        return nombreEmpleado;
    }
    string getPuesto() {
        return puesto;
    }
    string getMatricula() {
        return matricula;
    }

    // Setters
    void setNombreEmpleado(string nombre) {
        nombreEmpleado = nombre;
    }
    void setPuesto(string puest) {
        puesto = puest;
    }
    void setMatricula(string matricu) {
        matricula = matricu;
    }

    // Métodos
    virtual void mostrarDatos() {
        cout << "El empleado " << matricula << " se llama: " << nombreEmpleado << endl;
        cout << "Su puesto en la empresa es: " << puesto << endl;
    }

    virtual void trabajar() = 0;
};

class Operador : public Empleado {
public:
    Operador() : Empleado() {}
    Operador(string nom, string pues, string matri) : Empleado(nom, pues, matri) {}

    void trabajar() {
        cout << "Este empleado esta trabajando" << endl;
        cout << "El operador: " << nombreEmpleado << " de matricula: " << matricula << " esta trabajando en la produccion" << endl;
    }
};

class Director : public Empleado {
public:
    Director() : Empleado() {}
    Director(string nom, string pues, string matri) : Empleado(nom, pues, matri) {}

    void trabajar() {
        cout << "Este empleado esta dirigiendo" << endl;
        cout << "El director: " << nombreEmpleado << " de matricula: " << matricula << " esta trabajando en la produccion" << endl;
    }
};

class Jefe : public Empleado {
public:
    Jefe() : Empleado() {}
    Jefe(string nom, string pues, string matri) : Empleado(nom, pues, matri) {}

    void trabajar() {
        cout << "Este es el jefe" << endl;
        cout << "El jefe tiene como nombre: " << nombreEmpleado << " con matricula: " << matricula << " esta dirigiendo la empresa" << endl;
    }
};

#endif
