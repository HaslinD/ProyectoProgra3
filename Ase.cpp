#include "Ase.h"

using namespace std;

Ase :: Ase (string codigo, string precio, string tipo) : Limpieza(precio, tipo) {
	this -> codigo = codigo;
}

string Ase :: getCodigo() {
	return codigo;
}

void Ase :: setCodigo(string codigo) {
	this -> codigo = codigo;
}
