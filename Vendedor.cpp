#include "Vendedor.h"

using namespace std;

Vendedor :: Vendedor () {

}

Vendedor :: Vendedor (string id, string puesto, string password, string user) : Usuario(password, user) {
	this -> id = id;
	this -> puesto = puesto;
}

string Vendedor :: getID() {
	return id;
}

void Vendedor :: setID(string id) {
	this -> id = id;
}

string Vendedor :: getPuesto() {
	return puesto;
}

void Vendedor :: setPuesto(string puesto) {
	this -> puesto = puesto;
}

void Vendedor::metodo(){
	
}
