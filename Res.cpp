#include "Res.h"

using namespace std;

Res :: Res (int codigo, double precio, string tipo) : Carnes(precio, tipo) {
	this -> codigo = codigo;
}

int getCodigo() {
	return codigo;
}

void setCodigo(int codigo) {
	this -> codigo = codigo;
}