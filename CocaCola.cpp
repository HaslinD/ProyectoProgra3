#include "CocaCola.h"

using namespace std;

CocaCola :: CocaCola (string codigo, double precio, string sabor) : Bebidas(precio, sabor) {
	this -> codigo = codigo;
}

string CocaCola :: getCodigo() {
	return codigo;
}

void CocaCola :: setCodigo(string codigo) {
	this -> codigo = codigo;
}