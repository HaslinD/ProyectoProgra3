#include "Pez.h"

using namespace std;

Pez :: Pez (string codigo, string name, string precio, string peso) : Mariscos(name, precio, peso) {
	this -> codigo = codigo;
}

string Pez :: getCodigo() {
	return codigo;
}

void Pez :: setCodigo(string codigo) {
	this -> codigo = codigo;
}
