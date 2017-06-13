#include "Mariscos.h"

using namespace std;

Mariscos :: Mariscos() {

}

Mariscos :: Mariscos(string name, double precio, double peso) {
	this -> name = name;
	this -> precio = precio;
	this -> peso = peso;
}

string Mariscos :: getName() {
	return name;
}

void Mariscos :: setName(string name) {
	this -> name = name;
}

double Mariscos :: getPrecio() {
	return precio;
}

void Mariscos :: setPrecio(double precio) {
	this -> precio = precio;
}

double Mariscos :: getPeso() {
	return peso;
}

void Mariscos :: setPeso(double peso) {
	this -> peso = peso;
}