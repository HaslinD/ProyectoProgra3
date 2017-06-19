#include "Vendedor.h"

using namespace std;

Vendedor :: Vendedor () {

}

Vendedor :: Vendedor (int id, string puesto, string password, string user) : Usuario(password, user) {
	this -> id = id;
	this -> puesto = puesto;
}

int Vendedor :: getID() {
	return id;
}

void Vendedor :: setID(int id) {
	this -> id = id;
}

string Vendedor :: getPuesto() {
	return puesto;
}

void Vendedor :: setPuesto(string puesto) {
	this -> puesto = puesto;
}
