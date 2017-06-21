#include "Verduras.h"

using namespace std;

Verduras :: Verduras() {

}

Verduras :: Verduras(string name, string precioVerdura, string cantidad):Productos() {
	this -> name = name;
	this -> precioVerdura = precioVerdura;
	this -> cantidad = cantidad;
}

string Verduras :: getName() {
	return name;
}

void Verduras :: setName(string name) {
	this -> name = name;
}

string Verduras :: getPrecioverdura() {
	return precioVerdura;
}

void Verduras :: setPrecioverdura(string precioVerdura) {
	this -> precioVerdura = precioVerdura;
}

string Verduras :: getCantidad() {
	return cantidad;
}

void Verduras :: setCantidad(string cantidad) {
	this -> cantidad = cantidad;
}
