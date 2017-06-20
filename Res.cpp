#include "Res.h"

using namespace std;

Res :: Res (string codigo, string precio, string tipo) : Carnes(precio, tipo) {
	this -> codigo = codigo;
}

string Res :: getCodigo() {
	return codigo;
}

void Res :: setCodigo(string codigo) {
	this -> codigo = codigo;
}
