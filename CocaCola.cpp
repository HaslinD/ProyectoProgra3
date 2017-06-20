#include "CocaCola.h"
#include "Bebidas.h"

using namespace std;

CocaCola :: CocaCola (string codigo, string precio, string sabor) : Bebidas(precio, sabor) {
	this -> codigo = codigo;
}

string CocaCola :: getCodigo() {
	return codigo;
}

void CocaCola :: setCodigo(string codigo) {
	this -> codigo = codigo;
}
