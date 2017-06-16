#include "Tequila.h"

using namespace std;

Tequila :: Tequila (string codigo, string name, string marca, double precio, int cantidadML) : Licores(name, marca, precio, cantidadML) {
	this -> codigo = codigo;
}

string Tequila :: getCodigo() {
	return codigo;
}

void Tequila :: setCodigo(string codigo) {
	this -> codigo = codigo;
}