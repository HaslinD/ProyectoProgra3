#include "Martillo.h"

using namespace std;

Martillo :: Martillo (string codigo, string sabor, double precio) : Herraminentas(tipo, precio) {
	this -> codigo = codigo;
}

string getCodigo() {
	return codigo;
}

void setCodigo(string codigo) {
	this -> codigo = codigo;
}