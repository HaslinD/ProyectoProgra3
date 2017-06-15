#include "Ron.h"

using namespace std;

Ron :: Ron (string codigo, string name, string marca, double precio, int cantidadML) : Licores(name, marca, precio, cantidadML) {
	this -> codigo = codigo;
}

string getCodigo() {
	return codigo;
}

void setCodigo(string codigo) {
	this -> codigo = codigo;
}