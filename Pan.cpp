#include "Pan.h"

using namespace std;

Pan :: Pan() {

}

Pan :: Pan(string name, string estado, double precio, string tipo, string fechaVencimiento) {
	this -> name = name;
	this -> estado = estado;
	this -> precio = precio;
	this -> tipo = tipo;
	this -> fechaVencimiento = fechaVencimiento;
}

string Pan :: getName() {
	return name;
}

void Pan :: setName(string name) {
	this -> name = name;
}

string Pan :: getEstado() {
	return estado;
}

void Pan :: setEstado(string estado) {
	this -> estado = estado;
}

double Pan :: getPrecio() {
	return precio;
}

void Pan :: setPrecio(double precio) {
	this -> precio = precio;
}

string Pan :: getTipo() {
	return tipo;
}

void Pan :: setTipo(string tipo) {
	this -> tipo = tipo;
}

string Pan :: getVence() {
	return tipo;
}

void Pan :: setVence(string fechaVencimiento) {
	this -> fechaVencimiento = fechaVencimiento;
}