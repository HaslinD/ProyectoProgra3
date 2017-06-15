#include "Manzana.h"

using namespace std;

Manzana :: Manzana (int codigo, double precio, string tipo) : Frutas(precio, tipo) {
	this -> codigo = codigo;
}

int getCodigo() {
	return codigo;
}

void setCodigo(int codigo) {
	this -> codigo = codigo;
}