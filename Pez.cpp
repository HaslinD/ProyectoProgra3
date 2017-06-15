#include "Pez.h"

using namespace std;

Pez :: Pez (string codigo, string name, double precio, double peso) : Mariscos(name, precio, peso) {
	this -> codigo = codigo;
}

string getCodigo() {
	return codigo;
}

void setCodigo(string codigo) {
	this -> codigo = codigo;
}