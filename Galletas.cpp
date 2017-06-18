#include "Galletas.h"

using namespace std;

Galletas :: Galletas (string codigo, string name, string estado, double precio, string tipo, string fechaVencimiento) : Pan(name, estado, precio, tipo, fechaVencimiento) {
	this -> codigo = codigo;
}

string Galletas :: getCodigo() {
	return codigo;
}

void Galletas :: setCodigo(string codigo) {
	this -> codigo = codigo;
}