#include "Semita.h"

using namespace std;

Semita :: Semita (string codigo, string name, string estado, string precio, string tipo, string fechaVencimiento) : Pan(name, estado, precio, tipo, fechaVencimiento) {
	this -> codigo = codigo;
}

string Semita :: getCodigo() {
	return codigo;
}

void Semita :: setCodigo(string codigo) {
	this -> codigo = codigo;
}
