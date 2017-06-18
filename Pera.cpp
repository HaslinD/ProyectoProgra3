#include "Pera.h"

using namespace std;

Pera :: Pera (string codigo, double precio, string tipo) : Frutas(precio, tipo) {
	this -> codigo = codigo;
}

string Pera :: getCodigo() {
	return codigo;
}

void Pera :: setCodigo(string codigo) {
	this -> codigo = codigo;
}