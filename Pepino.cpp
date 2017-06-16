#include "Pepino.h"

using namespace std;

Pepino :: Pepino (string codigo, string name, double precioVerdura, int cantidad) : Verduras(name, precioVerdura, cantidad) {
	this -> codigo = codigo;
}

string Pepino :: getCodigo() {
	return codigo;
}

void Pepino :: setCodigo(string codigo) {
	this -> codigo = codigo;
}