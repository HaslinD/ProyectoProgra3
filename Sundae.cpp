#include "Sundae.h"

using namespace std;

Sundae :: Sundae (int codigo, double precio, string tipo) : Heladeria(precio, tipo) {
	this -> codigo = codigo;
}

int getCodigo() {
	return codigo;
}

void setCodigo(int codigo) {
	this -> codigo = codigo;
}