#include "Tomate.h"
#include <string>

using namespace std;

Tomate :: Tomate (string codigo, string name, double precioVerdura, int cantidad) : Verduras(name, precioVerdura, cantidad) {
	this -> codigo = codigo;
}

string Tomate :: getCodigo() {
	return codigo;
}

void Tomate :: setCodigo(string codigo) {
	this -> codigo = codigo;
}