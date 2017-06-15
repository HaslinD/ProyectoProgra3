#include "Cono.h"

using namespace std;

Cono :: Cono (int codigo, double precio, string tipo) : Heladeria(precio, tipo) {
	this -> codigo = codigo;
}

int getCodigo() {
	return codigo;
}

void setCodigo(int codigo) {
	this -> codigo = codigo;
}