#include "Pepsi.h"

using namespace std;

Pepsi :: Pepsi (string codigo, double precio, string sabor) : Bebidas(precio, sabor) {
	this -> codigo = codigo;
}

string getCodigo() {
	return codigo;
}

void setCodigo(string codigo) {
	this -> codigo = codigo;
}