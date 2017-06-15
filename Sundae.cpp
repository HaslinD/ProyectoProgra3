#include "Sundae.h"

using namespace std;

Sundae :: Sundae (string codigo, double precio, string tipo) : Heladeria(precio, tipo) {
	this -> codigo = codigo;
}

string getCodigo() {
	return codigo;
}

void setCodigo(string codigo) {
	this -> codigo = codigo;
}