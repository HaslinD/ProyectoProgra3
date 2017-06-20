#include "Camaron.h"

using namespace std;

Camaron :: Camaron (string codigo, string name, string precio, string peso) : Mariscos(name, precio, peso) {
	this -> codigo = codigo;
}

string Camaron :: getCodigo() {
	return codigo;
}

void Camaron :: setCodigo(string codigo) {
	this -> codigo = codigo;
}
