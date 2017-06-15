#include "Lego.h"

using namespace std;

Lego :: Lego (string codigo, string name, string marca, double precio, string tipo) : Jugueteria(name, marca, precio, tipo) {
	this -> codigo = codigo;
}

string getCodigo() {
	return codigo;
}

void setCodigo(string codigo) {
	this -> codigo = codigo;
}