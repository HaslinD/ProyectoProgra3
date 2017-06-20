#include "Puzzle.h"

using namespace std;

Puzzle :: Puzzle (string codigo, string name, string marca, string precio, string tipo) : Jugueteria(name, marca, precio, tipo) {
	this -> codigo = codigo;
}

string Puzzle :: getCodigo() {
	return codigo;
}

void Puzzle :: setCodigo(string codigo) {
	this -> codigo = codigo;
}
