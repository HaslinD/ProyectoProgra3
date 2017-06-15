#include "Pepsi.h"

using namespace std;

Pepsi :: Pepsi (int codigo, double precio, string sabor) : Bebidas(precio, sabor) {
	this -> codigo = codigo;
}

int getCodigo() {
	return codigo;
}

void setCodigo(int codigo) {
	this -> codigo = codigo;
}