#include "Manzana.h"

using namespace std;

Manzana :: Manzana (string codigo, double precio, string tipo) : Frutas(precio, tipo) {
	this -> codigo = codigo;
}

string getCodigo() {
	return codigo;
}

void setCodigo(string codigo) {
	this -> codigo = codigo;
}