#include "Camaron.h"

using namespace std;

Camaron :: Camaron (string codigo, string name, double precio, double peso) : Mariscos(name, precio, peso) {
	this -> codigo = codigo;
}

string getCodigo() {
	return codigo;
}

void setCodigo(string codigo) {
	this -> codigo = codigo;
}