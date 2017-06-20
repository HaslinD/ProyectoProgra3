#include "Cloro.h"

using namespace std;

Cloro :: Cloro (string codigo, string precio, string tipo) : Limpieza(precio, tipo) {
	this -> codigo = codigo;
}

string Cloro :: getCodigo() {
	return codigo;
}

void Cloro :: setCodigo(string codigo) {
	this -> codigo = codigo;
}
