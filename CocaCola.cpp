#include "CocaCola.h"

using namespace std;

CocaCola :: CocaCola (string codigo, double precio, string sabor) : Bebidas(precio, sabor) {
	this -> codigo = codigo;
}

string getCodigo() {
	return codigo;
}

void setCodigo(string codigo) {
	this -> codigo = codigo;
}