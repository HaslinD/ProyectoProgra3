#include "Pala.h"

using namespace std;

Pala :: Pala (string codigo, string tipo, double precio) : Herramientas(tipo, precio) {
	this -> codigo = codigo;
}

string getCodigo() {
	return codigo;
}

void setCodigo(string codigo) {
	this -> codigo = codigo;
}