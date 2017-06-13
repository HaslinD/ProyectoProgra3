#include "Verduras.h"

using namespace std;

Verduras :: Verduras() {

}

Verduras :: Verduras(string name, string frescura, double precioVerdura, int cantidad) {
	this -> name = name;
	this -> frescura = frescura;
	this -> precioVerdura = precioVerdura;
	this -> cantidad = cantidad;
}

string Verduras :: getName() {
	return name;
}

void Verduras :: setName(string name) {
	this -> name = name;
}

string Verduras :: getFrescura() {
	return frescura;
}

void Verduras :: setFrescura(string frescura) {
	this -> frescura = frescura;
}

double Verduras :: getPrecioverdura() {
	return precioVerdura;
}

void Verduras :: setPrecioverdura(double precioVerdura) {
	this -> precioVerdura = precioVerdura;
}

int Verduras :: getCantidad() {
	return cantidad;
}

void Verduras :: setCantidad(int cantidad) {
	this -> cantidad = cantidad;
}