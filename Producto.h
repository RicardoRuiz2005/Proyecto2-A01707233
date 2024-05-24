#ifndef PRODUCTO_H
#define PRODUCTO_H

#include<iostream>
#include<string>
using namespace std;

class Producto{
	protected:
		string nombreProducto;
		int costoProduccion;
		string descripcion;
		
	public:
		Producto() : nombreProducto(""), costoProduccion(0), descripcion("") {}
		Producto(string nom, int cost, string des) : nombreProducto(nom), costoProduccion(cost), descripcion(des) {}
		
		//getters
		string getNombreProducto(){
			return nombreProducto;
		}
		int getcostoProduccion(){
			return costoProduccion;
		}
		string getDescripcion(){
			return descripcion;
		}
		
		//setters
		void setNombreProducto(string nomPro){
			nombreProducto = nomPro;
		}
		void setCostoProduccion(int costPro){
			costoProduccion = costPro;
		}
		void setDescripcion(string descri){
			descripcion = descri;
		}
		
		//Metodos
		virtual void mostrarProducto(){
			cout<<"El producto "<<nombreProducto<<" es: "<<descripcion<<endl;
			cout<<"Este producto tiene un costo de: "<<costoProduccion<<"$"<<endl;
		}
		virtual void producirProducto(int cant){
			cout<<"Se producen "<<cant<<" del producto"<<endl;
		}	
};

class Fisico : public Producto{
	private:
		string materiales;
		
	public:
		Fisico() : Producto(), materiales("") {}
		Fisico(string nom, int cost, string des, string mat) : Producto(nom, cost, des){
			materiales = mat;
		}
		virtual void producirProducto(int cant){
			cout<<"Se producen "<<cant<<" del producto"<<nombreProducto<<endl;
			cout<<"Este necesita: "<<materiales<<endl;
		}
};

class Aplicacion : public Producto{
	private:
		string programa;
		
	public:
		Aplicacion() : Producto(), programa("") {}
		Aplicacion(string nom, int cost, string des, string progra) : Producto(nom, cost, des){
			programa = progra;
		}
		virtual void producirProducto(int cant){
			cout<<"Se necesitan "<<cant<<" operadores para programar el funcionamiento de "<<nombreProducto<<endl;
			cout<<"Este necesita "<<programa<<" para funcionar"<<endl;
		}
};
#endif
