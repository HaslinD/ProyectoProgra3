#include "Res.h"

using namespace std;

Res :: Res (string codigo, double precio, string tipo) : Carnes(precio, tipo) {
	this -> codigo = codigo;
}

string getCodigo() {
	return codigo;
}

void setCodigo(string codigo) {
	this -> codigo = codigo;
}