#include "Licores.h"

using namespace std;

Licores :: Licores() {

}

Licores :: Licores(string name, string marca, string precio, string cantidadML) :Productos(){
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

string Licores :: getPrecio() {
	return precio;
}

void Licores :: setPrecio(string precio) {
	this -> precio = precio;
}

string Licores :: getCantidadML() {
	return cantidadML;
}

void Licores :: setCantidadML(string cantidad) {
	this -> cantidadML = cantidadML;
}
