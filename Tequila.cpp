#include "Tequila.h"

using namespace std;

Tequila :: Tequila (string codigo, string name, string marca, double precio, int cantidadML) : Licores(name, marca, precio, cantidadML) {
	this -> codigo = codigo;
}

string getCodigo() {
	return codigo;
}

void setCodigo(string codigo) {
	this -> codigo = codigo;
}