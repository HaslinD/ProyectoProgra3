#include "Sundae.h"

using namespace std;

Sundae :: Sundae (string codigo, string precio, string tipo) : Heladeria(precio, tipo) {
	this -> codigo = codigo;
}

string Sundae :: getCodigo() {
	return codigo;
}

void Sundae :: setCodigo(string codigo) {
	this -> codigo = codigo;
}
