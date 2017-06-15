#include "Cloro.h"

using namespace std;

Cloro :: Cloro (string codigo, double precio, string tipo) : Limpieza(precio, tipo) {
	this -> codigo = codigo;
}

string getCodigo() {
	return codigo;
}

void setCodigo(string codigo) {
	this -> codigo = codigo;
}