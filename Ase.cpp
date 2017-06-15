#include "Ase.h"

using namespace std;

Ase :: Ase (string codigo, double precio, string tipo) : Limpieza(precio, tipo) {
	this -> codigo = codigo;
}

string getCodigo() {
	return codigo;
}

void setCodigo(string codigo) {
	this -> codigo = codigo;
}