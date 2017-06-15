#include "Puzzle.h"

using namespace std;

Puzzle :: Puzzle (string codigo, string name, string marca, double precio, string tipo) : Jugueteria(name, marca, precio, tipo) {
	this -> codigo = codigo;
}

string getCodigo() {
	return codigo;
}

void setCodigo(string codigo) {
	this -> codigo = codigo;
}