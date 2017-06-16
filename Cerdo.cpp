#include "Cerdo.h"

using namespace std;

Cerdo :: Cerdo (string codigo, double precio, string tipo) : Carnes(precio, tipo) {
	this -> codigo = codigo;
}

string Cerdo :: getCodigo() {
	return codigo;
}

void Cerdo :: setCodigo(string codigo) {
	this -> codigo = codigo;
}