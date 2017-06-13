#include "Jugueteria.h"

using namespace std;

Jugueteria :: Jugueteria() {

}

Jugueteria :: Jugueteria(string name, string marca, double precio, string tipo) {
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

double Jugueteria :: getPrecio() {
	return precio;
}

void Jugueteria :: setPrecio(double precio) {
	this -> precio = precio;
}

string Jugueteria :: getTipo() {
	return tipo;
}

void Jugueteria :: setTipo(string tipo) {
	this -> tipo = tipo;
}