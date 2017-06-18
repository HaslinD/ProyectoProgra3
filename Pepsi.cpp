#include "Pepsi.h"

using namespace std;

Pepsi :: Pepsi (string codigo, double precio, string sabor) : Bebidas(precio, sabor) {
	this -> codigo = codigo;
}

string Pepsi :: getCodigo() {
	return codigo;
}

void Pepsi :: setCodigo(string codigo) {
	this -> codigo = codigo;
}