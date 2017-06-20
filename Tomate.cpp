#include "Tomate.h"
#include <string>

using namespace std;

Tomate :: Tomate (string codigo, string name, string precioVerdura, string cantidad) : Verduras(name, precioVerdura, cantidad) {
	this -> codigo = codigo;
}

string Tomate :: getCodigo() {
	return codigo;
}

void Tomate :: setCodigo(string codigo) {
	this -> codigo = codigo;
}
