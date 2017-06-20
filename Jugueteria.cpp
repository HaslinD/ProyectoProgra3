#include "Jugueteria.h"

using namespace std;

Jugueteria :: Jugueteria() {

}

Jugueteria :: Jugueteria(string name, string marca, string precio, string tipo) : Productos(){
	this -> name = name;
	this -> marca = marca;
	this -> precio = precio;
	this -> tipo = tipo;
}

string Jugueteria :: getName() {
	return name;
}

void Jugueteria :: setName(string name) {
	this -> name = name;
}

string Jugueteria :: getMarca() {
	return marca;
}

void Jugueteria :: setMarca(string marca) {
	this -> marca = marca;
}

string Jugueteria :: getPrecio() {
	return precio;
}

void Jugueteria :: setPrecio(string precio) {
	this -> precio = precio;
}

string Jugueteria :: getTipo() {
	return tipo;
}

void Jugueteria :: setTipo(string tipo) {
	this -> tipo = tipo;
}
