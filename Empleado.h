#ifndef EMPLEADO_H
#define EMPLEADO_H

#include<iostream>
#include<string>

using namespace std;

//Clase padre de Empleado
class Empleado{
	protected:
		string nombreEmpleado;
		string puesto;
		string matricula;
	
	public:
		Empleado() : nombreEmpleado(""), puesto(""), matricula("") {}
		Empleado(string nom, string pues, string matri) : nombreEmpleado(nom), puesto(pues), matricula(matri) {}
		
		//Getters
		string getNombreEmpleado(){
			return nombreEmpleado;
		}
		string getPuesto(){
			return puesto;
		}		
		string getMatricula(){
			return matricula;
		}
		
		//Setters
		void setNombreEmpleado(string nombre){
			nombreEmpleado = nombre;
		}
		void setPuesto(string puest){
			puesto = puest;
		}
		void setMatricula(string matricu){
			matricula = matricu;
		}
		
		//Metodos
		virtual void mostrarDatos(){
			cout<<"El empleado "<<matricula<<" se llama: "<<nombreEmpleado<<endl;
			cout<<"Su puesto en la empesa es: "<<puesto<<endl;
		}
		
		virtual void trabajar(){
			cout<<"Este empleado esta trabajando"<<endl;
		}
};

//Clase hija de Empleado (Operador)
class Operador : public Empleado{
	public:
		Operador() : Empleado() {}
		Operador(string nom, string pues, string matri) : Empleado(nom, pues, matri) {}		
	
		void trabajar(){
			cout<<"Este empleado esta trabajando"<<endl;
			cout<<"El operador: "<<nombreEmpleado<<" de matricula: "<<matricula<<" esta trabajando en la produccion: ---insertar---"<<endl;
		}
};

//Clase hija de Empleado (Director)
class Director : public Empleado{
	public:
		Director() : Empleado() {}
		Director(string nom, string pues, string matri) : Empleado(nom, pues, matri) {}		
	
		void trabajar(){
			cout<<"Este empleado esta dirijiendo"<<endl;
			cout<<"El trabajador: "<<nombreEmpleado<<" de matricula: "<<matricula<<" esta trabajando en la produccion: ---insertar---"<<endl;
		}
};

//Clase hija de Empleado (Jefe)
class Jefe : public Empleado{
	public:
		Jefe() : Empleado() {}
		Jefe(string nom, string pues, string matri) : Empleado(nom, pues, matri) {}		
	
		void trabajar(){
			cout<<"Este es el jefe"<<endl;
			cout<<"El jefe tiene como nombre: "<<nombreEmpleado<<" con matricula: "<<matricula<<" esta dirijiendo la empresa"<<endl;
		}
};

#endif
