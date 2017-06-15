#include "CocaCola.h"

using namespace std;

CocaCola :: CocaCola (int codigo, double precio, string sabor) : Bebidas(precio, sabor) {
	this -> codigo = codigo;
}

int getCodigo() {
	return codigo;
}

void setCodigo(int codigo) {
	this -> codigo = codigo;
}