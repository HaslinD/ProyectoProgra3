#include "Ron.h"

using namespace std;

Ron :: Ron (string codigo, string name, string marca, string precio, string cantidadML) : Licores(name, marca, precio, cantidadML) {
	this -> codigo = codigo;
}

string Ron :: getCodigo() {
	return codigo;
}

void Ron :: setCodigo(string codigo) {
	this -> codigo = codigo;
}
