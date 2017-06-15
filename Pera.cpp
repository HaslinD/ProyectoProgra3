#include "Cerdo.h"

using namespace std;

Cerdo :: Cerdo (string codigo, double precio, string tipo) : Frutas(precio, tipo) {
	this -> codigo = codigo;
}

string getCodigo() {
	return codigo;
}

void setCodigo(string codigo) {
	this -> codigo = codigo;
}