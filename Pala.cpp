#include "Pala.h"

using namespace std;

Pala :: Pala (string codigo, string tipo, string precio) : Herramientas(tipo, precio) {
	this -> codigo = codigo;
}

string Pala :: getCodigo() {
	return codigo;
}

void Pala :: setCodigo(string codigo) {
	this -> codigo = codigo;
}
