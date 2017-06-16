#include "Martillo.h"

using namespace std;

Martillo :: Martillo (string codigo, string sabor, double precio) : Herraminentas(tipo, precio) {
	this -> codigo = codigo;
}

string Martillo :: getCodigo() {
	return codigo;
}

void Martillo :: setCodigo(string codigo) {
	this -> codigo = codigo;
}