#include "Cono.h"

using namespace std;

Cono :: Cono (string codigo, double precio, string tipo) : Heladeria(precio, tipo) {
	this -> codigo = codigo;
}

string getCodigo() {
	return codigo;
}

void setCodigo(string codigo) {
	this -> codigo = codigo;
}