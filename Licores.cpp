#include "Licores.h"

using namespace std;

Licores :: Licores() {

}

Licores :: Licores(string name, string marca, double precio, int cantidadML) {
	this -> name = name;
	this -> marca = marca;
	this -> precio = precio;
	this -> cantidadML = cantidadML;
}

string Licores :: getName() {
	return name;
}

void Licores :: setName(string name) {
	this -> name = name;
}

string Licores :: getMarca() {
	return marca;
}

void Licores :: setMarca(string marca) {
	this -> marca = marca;
}

double Licores :: getPrecio() {
	return precio;
}

void Licores :: setPrecio(double precio) {
	this -> precio = precio;
}

int Licores :: getCantidadML() {
	return cantidadML;
}

void Licores :: setCantidadML(int cantidad) {
	this -> cantidadML = cantidadML;
}