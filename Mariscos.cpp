#include "Mariscos.h"

using namespace std;

Mariscos :: Mariscos() {

}

Mariscos :: Mariscos(string name, string precio, string peso) :Productos(){
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

string Mariscos :: getPrecio() {
	return precio;
}

void Mariscos :: setPrecio(string precio) {
	this -> precio = precio;
}

string Mariscos :: getPeso() {
	return peso;
}

void Mariscos :: setPeso(string peso) {
	this -> peso = peso;
}
