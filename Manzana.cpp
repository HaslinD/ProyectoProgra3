#include "Manzana.h"

using namespace std;

Manzana :: Manzana (string codigo, string precio, string tipo) : Frutas(precio, tipo) {
	this -> codigo = codigo;
}

string Manzana :: getCodigo() {
	return codigo;
}

void Manzana :: setCodigo(string codigo) {
	this -> codigo = codigo;
}
