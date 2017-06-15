#include "Tomate.h"
#include <string>

using namespace std;

Tomate :: Tomate (string codigo, string name, double precioVerdura, int cantidad) : Verduras(name, precioVerdura, cantidad) {
	this -> codigo = codigo;
}

string getCodigo() {
	return codigo;
}

void setCodigo(string codigo) {
	this -> codigo = codigo;
}