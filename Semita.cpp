#include "Semita.h"

using namespace std;

Semita :: Semita (string codigo, string name, string estado, double precio, string tipo, string fechaVencimiento) : Pan(name, estado, precio, tipo, fechaVencimiento) {
	this -> codigo = codigo;
}

string getCodigo() {
	return codigo;
}

void setCodigo(string codigo) {
	this -> codigo = codigo;
}