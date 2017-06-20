#include "Pepsi.h"
#include "Bebidas.h"
using namespace std;

Pepsi :: Pepsi (string codigo, string precio, string sabor) : Bebidas(precio, sabor) {
	this -> codigo = codigo;
}

string Pepsi :: getCodigo() {
	return codigo;
}

void Pepsi :: setCodigo(string codigo) {
	this -> codigo = codigo;
}
